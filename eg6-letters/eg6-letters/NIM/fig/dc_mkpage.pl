#!/usr/local/bin/perl



#
# This prints an HTML document to stdout with information
# contained in DC_DOCA.map about the CLAS drift chamber 
# calibration for the given run
#
#

if(@ARGV!=1){&PrintUsage;}


#-----------------------------------------------------------------#
#----------------------- Start of Main ---------------------------#
#-----------------------------------------------------------------#

#
# Get comments out of map
#

$run=$ARGV[0];
$CLAS_PARMS=`printenv CLAS_PARMS`;
chop $CLAS_PARMS;

#
#
# Find run period
#
print STDERR "Finding run period for $run...\n";
@runfile=`find /mss/clas -maxdepth 3 -name "*_*$run.A00"`;
if(@runfile<1){
	print STDERR "\tUnable to find file for run $run!\n";
	$runperiod="unknown";
}else{
	$runfile[0] =~ /clas\//;
	$' =~ /\//;
	$runperiod=$`;
}

print STDERR "\tRun $run is in run period $runperiod\n";

if($runperiod =~ /^e1/){
	$fcolor="#0000FF";
}elsif ($runperiod =~ /^eg1/){
	$fcolor="#FF0000";
}elsif ($runperiod =~ /^g1/){
	$fcolor="#00FF00";
}elsif ($runperiod =~ /^g6/){
	$fcolor="#A07000";
}elsif ($runperiod =~ /^e2/){
	$fcolor="#FFA500";
}else{
	$fcolor="#000000";
}

#
#Print HTML header
#
#
print "\n
<title>DC calibration run $run</title>
<body bgcolor=\"#FFFFFF\">
<h1><center>DC calibration run $run</center></h1>
<hr>

<center><h2>
Run Period : <font color=\"$fcolor\">$runperiod</font>
</h2></center>

<hr>
This page was generated from values stored in the \"comment\"
items in the Map (DC_DOCA.map).<br>
<br>
The comment date, user, computer name, and host computer values
are generally stored by the program that wrote the comment. The
program <A href=\"../dc_tool/index.html\">dc_tool</A> can be used to view,
add or delete comments for a given run number. Recent versions
of <A href=\"../dc_calib_check/index.html\">dc_calib_check</A> automatically
update the comment sections of the map, but other calibrations
had to have comments added after the fact. Always check the \"comments\"
section for info about the actual calibration dates etc.
<br>
This page was created by a perl
<A href=\"../dc_mkpage.pl\">script</A>. The run periods
are determined by directory names in /mss/clas.
<br>
<hr>

";

&PrintTable("t_max");
&PrintTable("xvst_params");
&PrintTable("xvst_par_Sect2");
&PrintTable("xvst_par_Sect3");
&PrintTable("xvst_par_Sect4");
&PrintTable("xvst_par_Sect5");
&PrintTable("xvst_par_Sect6");

$USER=`printenv USER`;
$DATE=`date`;

print "
</body>		

<hr>

<i><A href=\"mailto:$USER\@jlab.org\">$USER\@jlab.org</A><br>
$DATE
</i>
<br><br>
";


#-----------------------------------------------------------------#
#------------------------ End of Main ----------------------------#
#-----------------------------------------------------------------#



#########################################
#                                       #
#      &PrintTable($subsystem);         #
#                                       #
#########################################

sub PrintTable {

$subsystem=$_[0];

$cmdstr="get_map_char -m$CLAS_PARMS/Maps/DC_DOCA.map -s$subsystem -icomment -l1024 -t$run";
@comments=split(/:::/,`$cmdstr`);

print "\n
<br>
<br>
<center>
<table border=\"3\">
<caption>$subsystem</caption>

        <tr>
        <b>
        <td align=\"center\">Comment Date</td>
        <td align=\"center\">User</td>
        <td align=\"center\">Host<br>Computer</td>
        <td align=\"center\">Calibration<br>Program</td>
        <td align=\"center\">Comments</td>
        </b>
        </tr>

        <tr>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        </tr>\n\n";


for(@comments){
	@comm = split(/\n/);
	next if(@comm==0);
#	print "at comm equals $n\n";

	print "        <tr>\n";
	print "        <td>$comm[0]</td>\n";
	$comm[1] =~ /^user:/;
	print "        <td>$'</td>\n";
	$comm[2] =~ /^execution host:/;
	print "        <td>$'</td>\n";
	print "        <td>$comm[3]</td>\n";
	print "        <td>\n";
	if(@comm<4 || length($comm[4])<2){
		print "        none<br>\n";
	}else{
		for($i=4;$i<@comm;$i++){
			print "        $comm[$i]<br>\n";
		}
	}
	print "        </td>\n";
	print "        </tr>\n\n";
}

print "			

</table>
</center>
\n";

}




sub PrintUsage {

	print "\nUsage:  dc_mkpage.pl run
	
	where run is the run number for which you'd like to create a page.\n\n";

	exit 0;
}












