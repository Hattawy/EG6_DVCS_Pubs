#include "Riostream.h"
#include <iostream>
#include <TFile.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TF1.h>
#include <TH1.h>
#include <TH2.h>
#include <TLine.h>
#include <stdio.h>
#include <stdlib.h>
#include <TStyle.h>
#include <TGraphErrors.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TCanvas.h>
#include <TLatex.h>
#include <TLegend.h>

void Drift_TDC()
{

   gStyle->SetStatFontSize(0.12);
   gStyle->SetStatW(0.25);
   gROOT->Reset();
   gStyle->SetOptStat(kFALSE);
   gStyle->SetPalette(55);   
   gStyle->SetLabelSize(0.03,"xyz"); // size of axis value font 
   gStyle->SetTitleSize(0.035,"xyz"); // size of axis title font 
   gStyle->SetTitleFont(22,"xyz"); // font option 
   gStyle->SetLabelFont(22,"xyz");
   gStyle->SetTitleOffset(1.2,"y");
   gStyle->SetCanvasBorderMode(0);
   gStyle->SetCanvasBorderSize(0);

   gStyle->SetPadBottomMargin(0.2); //margins... 
   gStyle->SetPadTopMargin(0.05);
   gStyle->SetPadLeftMargin(0.1);
   gStyle->SetPadRightMargin(0.05);

   gStyle->SetFrameBorderMode(0);
   gStyle->SetPaperSize(20,24);
   gStyle->SetLabelSize(0.05,"xy");
   gStyle->SetTitleSize(0.06,"xy");

 int N_5p7 = 11;
 int N_6 = 291; 
 int N_1p2 = 52; 
 double runs_5p7[N_5p7];
 double TDCs_5p7[N_5p7];
 double reading_5p7[N_5p7][2];

 double runs_6[N_6];
 double TDCs_6[N_6];
 double reading_6[N_6][2];

 double runs_1p2[N_1p2];
 double TDCs_1p2[N_1p2];
 double reading_1p2[N_1p2][2]; 

  ifstream file1;
  file1.open("Run_TDC_half_max_5p7.dat");
  for(int i=0; i<N_5p7; i++)
   for(int j=0; j<2; j++)
   file1>>reading_5p7[i][j];
  file1.close();
  for(int i=0; i<N_5p7; i++){
   runs_5p7[i] = reading_5p7[i][0]; 
   TDCs_5p7[i] = reading_5p7[i][1];}
  
  ifstream file2;
  file2.open("Run_TDC_half_max_6GeV.dat");
  for(int i=0; i<291; i++)
   for(int j=0; j<2; j++)
       file2>>reading_6[i][j];
  file2.close();

  for(int i=0; i<N_6; i++){
   runs_6[i] = reading_6[i][0]; 
   TDCs_6[i] = reading_6[i][1];}


  ifstream file3;
  file3.open("Run_TDC_half_max_1p2.dat");
  for(int i=0; i<N_1p2; i++)
   for(int j=0; j<2; j++)
   file3>>reading_1p2[i][j];
  file3.close();
  for(int i=0; i<N_1p2; i++){
   runs_1p2[i] = reading_1p2[i][0]; 
   TDCs_1p2[i] = reading_1p2[i][1];}
   

   TCanvas * c1 =  new TCanvas("c1","", 1300,500);

   TGraph *Drift_5p7 = new TGraph(N_5p7, runs_5p7, TDCs_5p7);
   Drift_5p7->SetTitle("5.7 GeV runs");
   Drift_5p7->SetMarkerStyle(21);
   Drift_5p7->SetMarkerSize(1.5);
   Drift_5p7->SetMarkerColor(kBlack);

   TGraph *Drift_1p2 = new TGraph(N_1p2, runs_1p2, TDCs_1p2);
   Drift_1p2->SetTitle("1.2 GeV runs");
   Drift_1p2->SetMarkerStyle(22);
   Drift_1p2->SetMarkerSize(1.5);
   Drift_1p2->SetMarkerColor(4);

   TGraph *Drift_6 = new TGraph(N_6, runs_6, TDCs_6);
   Drift_6->SetTitle("6 GeV runs");
   Drift_6->SetMarkerStyle(8);
   Drift_6->SetMarkerSize(1.5);
   Drift_6->SetMarkerColor(2);

   TLatex *l1 = new TLatex(61425,72.5,"(61450, -2% GT, +12% El )");
           l1->SetTextSize(0.04);
   TLatex *l2 = new TLatex(61430,72,"(61453, 0% GT, +16% El)");
           l2->SetTextSize(0.04);
   TLatex *l3 = new TLatex(61435,71.5,"(61465, -1% GT, +14% El)");
           l3->SetTextSize(0.04);
   
   TLatex *l4 = new TLatex(61550,70.5,"(61570, +10% GT)");
           l4->SetTextSize(0.04);
   TLatex *l5 = new TLatex(61625,68.5,"(61625, +17% GT)");
           l5->SetTextSize(0.04);
   TLatex *l6 = new TLatex(61734,68,"(61734, +23% GT)");
           l6->SetTextSize(0.04);
   TLatex *l7 = new TLatex(61835,68.1,"(61872, +25% GT)");
           l7->SetTextSize(0.04);
   
   TLatex *l8 = new TLatex(61935,68.5,"(61940, +28% GT, +71% El)");
           l8->SetTextSize(0.04);
   TLatex *l9 = new TLatex(61937,68,"(61949, +24% GT, +52% El)");
           l9->SetTextSize(0.04);
   TLatex *l10 = new TLatex(61940,67.5,"(61960, +27% GT, +63% El)");
           l10->SetTextSize(0.04);
   
   TLatex *l11 = new TLatex(6300,67.5,"GT: Good Tracks");
   TLatex *l12 = new TLatex(6300,67.5,"El: Elastic events");


   TMultiGraph *mg = new TMultiGraph();
                mg->Add(Drift_1p2);
                mg->Add(Drift_5p7);
                mg->Add(Drift_6);

  TLegend* leg = new TLegend(0.72,0.7,0.95,0.95);  leg-> SetNColumns(1); 
           leg->AddEntry(Drift_1p2,"1.2 GeV runs","P");
           leg->AddEntry(Drift_5p7,"5.7 GeV runs","P");
           leg->AddEntry(Drift_6,"6 GeV runs","P");
           leg->SetTextSize(0.048);
           // leg->AddEntry(l11,"GT: Good Tracks","GT");
           // leg->AddEntry(l12,"El: Elastic Tracks","");


   // l11->Draw("same");
   // l12->Draw("same");
   //  //c1->BuildLegend();
   // l1->Draw("same");
   // l2->Draw("same");
   // l3->Draw("same");
   // l4->Draw("same");
   // l5->Draw("same");
   // l6->Draw("same");
   // l7->Draw("same");
   // l8->Draw("same");
   // l9->Draw("same");
   // l10->Draw("same");

   c1->cd();
   mg->Draw("AP");
   leg->Draw();        
   //mg->SetTitle(" Drift speed stability");
   mg->GetXaxis()->SetTitle("Run Number");
   mg->GetYaxis()->SetTitle("T_{max}");
   mg->GetXaxis()->SetNdivisions(615);
   mg->GetXaxis()->CenterTitle(true);
   mg->GetYaxis()->CenterTitle(true);
   mg->GetXaxis()->SetTitleSize(0.08);
   mg->GetYaxis()->SetTitleSize(0.08);
   mg->GetYaxis()->SetTitleOffset(0.5);

   gPad->Modified();
   mg->GetXaxis()->SetLimits(61430.,61980.);
   mg->GetYaxis()->SetRangeUser(65.,73.);
  

   c1->Print("Drift_run_number.png");
   c1->Print("Drift_run_number.pdf");



 }
