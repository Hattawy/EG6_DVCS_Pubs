% This model is only usable with LaTeX 2 epsilon
\NeedsTeXFormat{LaTeX2e}

\ProvidesClass{ThClas}[2010/08/26 classe pour mise en forme de These]
\LoadClass[a4paper,12pt,twoside,openright]{book}
%\LoadClass[a4paper,12pt]{book}


\RequirePackage{fancyhdr}
\RequirePackage{tabularx}
\RequirePackage{ifthen}
\RequirePackage[includefoot,nomarginpar,twoside,
    top=27mm,bottom=15mm,
    head=5mm,headsep=7mm,
    footskip=15mm,
    hmargin=25mm,bindingoffset=10mm]{geometry}

\newif\if@blankemptypage
\DeclareOption{noblankemptypage}{\@blankemptypagefalse}
\DeclareOption{blankemptypage}{\@blankemptypagetrue}

\@blankemptypagefalse
%\ExecuteOptions{}
\ProcessOptions

\newcommand{\makeback}{
    \begin{titlepage}
        \thispagestyle{empty}
        \null\clearpage
        \thispagestyle{empty}
%        \vsize = 277mm
%        \voffset = -15mm
%        \topmargin = 0mm
%        \headheight = 0mm
%        \headsep = 0mm
%        \hsize = 160mm
%        \hoffset = -10mm
%        \vbox to \vsize {
            \noindent\rule{\hsize}{1pt}
            \vspace*{\stretch{1}}
\title{}
            \@backsection{\@titleapp}{\@title}{\bf}
            \@backsection{\@resumeapp}{\@resume}{\@resumesize}
\keywords{... \\ \\}	    
            \@backsection{\@keywordsapp}{\@keywords}{\@resumesize}
\title{Study of the partonic structure of helium nucleus}
            \@backsection{\@engtitleapp}{\@title}{\bf}
            \@backsection{\@abstractapp}{\@abstract}{\@resumesize}
\keywords{... \\}	    
            \@backsection{\@engkeywordsapp}{\@keywords}{\@resumesize}
            \@backsection[]{Adrr : }{\@labaddr}{\@resumesize}%
    \end{titlepage}
\fi
