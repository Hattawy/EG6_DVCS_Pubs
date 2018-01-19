{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 16 17:51:10 2013) by ROOT version5.32/03

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
   gStyle->SetPadBottomMargin(0.15); //margins... 
   gStyle->SetPadTopMargin(0.04);
   gStyle->SetPadLeftMargin(0.15);
   gStyle->SetPadRightMargin(0.1);
   gStyle->SetFrameBorderMode(0);
   gStyle->SetPaperSize(20,24);
   gStyle->SetLabelSize(0.05,"xy");
   gStyle->SetTitleSize(0.06,"xy");


   TCanvas *c = new TCanvas("c", "",1,1,650,430);
   gStyle->SetOptFit(1);
   c->Range(-150,60.52221,150,73.37344);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(20);
   gre->SetName("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(3);
   gre->SetPoint(0,-95,65.44687);
   gre->SetPointError(0,5,1);
   gre->SetPoint(1,-85,66.67688);
   gre->SetPointError(1,5,1);
   gre->SetPoint(2,-75,67.64999);
   gre->SetPointError(2,5,1);
   gre->SetPoint(3,-65,68.38904);
   gre->SetPointError(3,5,1);
   gre->SetPoint(4,-55,69.2335);
   gre->SetPointError(4,5,1);
   gre->SetPoint(5,-45,69.41969);
   gre->SetPointError(5,5,1);
   gre->SetPoint(6,-35,69.99798);
   gre->SetPointError(6,5,1);
   gre->SetPoint(7,-25,70.2293);
   gre->SetPointError(7,5,1);
   gre->SetPoint(8,-15,70.23157);
   gre->SetPointError(8,5,1);
   gre->SetPoint(9,-5,70.14353);
   gre->SetPointError(9,5,1);
   gre->SetPoint(10,5,70.06345);
   gre->SetPointError(10,5,1);
   gre->SetPoint(11,15,69.57844);
   gre->SetPointError(11,5,1);
   gre->SetPoint(12,25,68.99993);
   gre->SetPointError(12,5,1);
   gre->SetPoint(13,35,68.50365);
   gre->SetPointError(13,5,1);
   gre->SetPoint(14,45,67.71084);
   gre->SetPointError(14,5,1);
   gre->SetPoint(15,55,66.78539);
   gre->SetPointError(15,5,1);
   gre->SetPoint(16,65,65.95342);
   gre->SetPointError(16,5,1);
   gre->SetPoint(17,75,65.05052);
   gre->SetPointError(17,5,1);
   gre->SetPoint(18,85,64.49019);
   gre->SetPointError(18,5,1);
   gre->SetPoint(19,95,63.66408);
   gre->SetPointError(19,5,1);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,-120,120);
   Graph_Graph5->SetMinimum(61.80733);
   Graph_Graph5->SetMaximum(72.08832);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   Graph_Graph5->SetLineColor(kBlack);
   Graph_Graph5->SetMarkerColor(kBlack);
   Graph_Graph5->SetMarkerStyle(21);
   Graph_Graph5->GetXaxis()->SetTitle("Z [mm]");
   Graph_Graph5->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph5->GetXaxis()->CenterTitle(true);
   Graph_Graph5->GetYaxis()->SetTitle("T_{max}");
   Graph_Graph5->GetYaxis()->SetLabelSize(0.055);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.0);
   Graph_Graph5->GetYaxis()->CenterTitle(true);
   gre->SetHistogram(Graph_Graph5);
 
   gre->SetLineColor(kBlack);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(kBlack);
   gre->SetMarkerStyle(21);
   
   
   gre->Draw("AP");
   
   c->Modified();
   c->cd();
   c->SetSelected(c);

   c->Print("RunNumber_61452_TDCmax_Zslice.pdf")
}
