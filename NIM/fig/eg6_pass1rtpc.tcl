### 10/18/09: Turn GEM package ON, Solenoid current 534A;
### 12/08/09: Add TPCC bosbank for RTPC calibration purposes
### 01/21/10: Add/change tcl flags to take into acount the change on building the TBID bank.
source /group/clas/builds/PRODUCTION/packages/tcl/recsis_proc.tcl;
#
# define packages
turnoff ALL;
global_section off;
turnon seb trk cc tof egn gem user;
#
set trigger_particle_s 211;
#
inputfile           InputFile;
setc chist_filename histfile;
setc log_file_name  logfile;
setc helfile        hel_table.txt;
#
# Allows to keep track of the run ext number.
#
set runfile 1;
#
#
# Remove either TRPB (layer 1 info) or ECPC (EC calibration info)
# Pass1_v0 bosbanks list
#setc outbanknames(1) "HEADSCRCHELCRUNCTBIDCL01TRPBTBTRCC01CCPBSHHBSHPBDCPBECPBEVNTFBPMHEVTICHBICPBPARTSCPBTBERECHBGCPBBMPRVERTMVRTTGBIHLS ";
# 1.2 GeV data set bosbanks (RTPC calibration)
#setc outbanknames(1) "HEADTPCCSCRCHELCRUNCTBIDCL01TRPBTBTRCC01CCPBSHHBSHPBDCPBECPBEVNTFBPMHEVTICHBICPBPARTSCPBTBERECHBGCPBBMPRVERTMVRTTGBIHLS ";
#setc outbanknames(1) "HEADTPC TPCCSCRCHELCRUNCTBIDCL01TRPBTBTRCC01CCPBSHHBSHPBDCPBECPBEVNTFBPMHEVTICHBICPBPARTSCPBTBERECHBGCPBBMPRVERTMVRTTGBIHLS ";
# After adding RTPC bank
setc outbanknames(1) "HEADRTPCTPC TPCCSCRCHELCRUNCTBIDCL01TRPBTBTRCC01CCPBSHHBSHPBDCPBECPBEVNTFBPMHEVTICHBICPBPARTSCPBTBERECHBGCPBBMPRVERTMVRTTGBIHLS ";
outputfile outfile1 PROC1 2047;
#
setc prlink_file_name  "prlink_dcvs_centered_tgt10cm.bos";
setc bfield_file_name  "bgrid_T67to33.fpk";
#
setc poltarget_field_file_name "bgrid_s.fpk";
#
#set torus_current       2100;
#set poltarget_current   450000;
set mini_torus_current  0;
set TargetPos(3)       -64.0;
set TargetMagPos(3)    -64.0;
#
set ntswitch 1;
#
set touch_id 0;

# Franz's tcl variables
set trk_maxiter       8;
set trk_minhits(1)    2;
set trk_lrambfit_chi2 50.;
set trk_tbtfit_chi2   70.;
set trk_prfit_chi2    70.;
set trk_statistics    3 ;
#
# New tracking:
set trk_fitRegion   7;
#
#set dc_xvst_choice 0;
#
set lseb_nt_do      -1;
set lall_nt_do      -1;
set lseb_hist       -1;
set lseb_h_do       -1;
set lmon_hist       -1;
#
# SC & CC time cut
#
set CUT_T_SCCC 300.;
#
# New tcl flag to get RF time from RFT bank
#
set lseb_get_rf     -1;
#
# IC flags
#
set lic_do          -1;
set lichb_nt_do     -1;
set licpb_nt_do     -1;
set lic_h_do        -1;
set lic_hist        -1;
#set licr_nt_do      -1;
#
# CC flags
#
#set lcc_do          -1;
#set lcc_nt_do       -1;
#set lccr_nt_do      -1;
#
# Hodoscope flags
#
set lsh_do          -1;
set lshhb_nt_do     -1;
set lshpb_nt_do     -1;
#  
# GEM flags
#
set lgem_do         -1;
set lgem_nt_do      -1;
set lgcpb_nt_do     -1; 
# Ntuple needed for RTPC calibration/analysis with dE/dx info
set lrtpc_nt_do     -1; 
# Activate RTPC histos
set lrtpc_h_do     -1;
# Ntuple needed for RTPC calibration
set ltpcc_nt_do     -1;
#set ltpc_nt_do      -1;
#
# PID and TBID flags
#
set lpid_make_trks   0;
set ltbid_nost_do    0;
set ltbid_do        -1;    
#
# EC flags
#
set inner_surf 3.;
set outer_surf 17.;
#
# Turn MYSQL ON
#
#set lmysql          -1;
#set nmysql          -1;
#
# Turn MYSQL OFF
#
set lmysql          0;
set nmysql          0;
#
# helicity information
#
set lhelcor        -1;
#
# tell FPACK not to stop if it thinks you are running out of time
#
fpack "timestop -9999999999"
#
#
# do not send events to event display
set lscat $false;
set ldisplay_all $false;
go 2000000;
#go 1000;
#
#
#
setc rec_prompt "CLASCHEF_recsis> ";
exit_pend;
