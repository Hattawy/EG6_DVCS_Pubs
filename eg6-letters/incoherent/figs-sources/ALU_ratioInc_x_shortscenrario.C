void ALU_ratioInc_x_shortscenrario()
{
//=========Macro generated from canvas: Can_R_x/DVCS Helium BoNuS
//=========  (Thu Jul  6 14:04:34 2017) by ROOT version6.09/01
   TCanvas *Can_R_x = new TCanvas("Can_R_x", "DVCS Helium BoNuS",0,0,600,450);
   gStyle->SetOptFit(1);
   Can_R_x->SetHighLightColor(2);
   Can_R_x->Range(-0.1558442,0.02727273,0.8831169,1.845455);
   Can_R_x->SetFillColor(0);
   Can_R_x->SetBorderMode(0);
   Can_R_x->SetBorderSize(2);
   Can_R_x->SetLeftMargin(0.15);
   Can_R_x->SetRightMargin(0.08);
   Can_R_x->SetTopMargin(0.08);
   Can_R_x->SetBottomMargin(0.15);
   Can_R_x->SetFrameBorderMode(0);
   Can_R_x->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_x__4 = new TH2F("HALU_RATIO_x__4","",100,0,0.8,100,0.3,1.7);
   HALU_RATIO_x__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_x__4->SetLineColor(ci);
   HALU_RATIO_x__4->GetXaxis()->SetTitle("x_{B}");
   HALU_RATIO_x__4->GetXaxis()->CenterTitle(true);
   HALU_RATIO_x__4->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_x__4->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_x__4->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__4->GetXaxis()->SetTitleSize(0.07);
   HALU_RATIO_x__4->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_x__4->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p} (90#circ)");
   HALU_RATIO_x__4->GetYaxis()->CenterTitle(true);
   HALU_RATIO_x__4->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_x__4->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_x__4->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__4->GetYaxis()->SetTitleSize(0.07);
   HALU_RATIO_x__4->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_x__4->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_x__4->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_x__4->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_x__4->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_x__4->Draw("");
   
   Double_t Graph0_fx1004[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1004[4] = {
   0.552459,
   0.767109,
   0.787287,
   0.807909};
   Double_t Graph0_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[4] = {
   0.102538,
   0.169802,
   0.174141,
   0.418206};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.1392,0.4128);
   Graph_Graph1004->SetMinimum(0.3060618);
   Graph_Graph1004->SetMaximum(1.309756);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(22);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1004->GetXaxis()->SetTitleFont(22);
   Graph_Graph1004->GetYaxis()->SetLabelFont(22);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleFont(22);
   Graph_Graph1004->GetZaxis()->SetLabelFont(22);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p");
   
   Double_t HERMES (-t = 0.2)_fx1005[1] = {
   0.107};
   Double_t HERMES (-t = 0.2)_fy1005[1] = {
   0.93};
   Double_t HERMES (-t = 0.2)_fex1005[1] = {
   0};
   Double_t HERMES (-t = 0.2)_fey1005[1] = {
   0.23};
   gre = new TGraphErrors(1,HERMES (-t = 0.2)_fx1005,HERMES (-t = 0.2)_fy1005,HERMES (-t = 0.2)_fex1005,HERMES (-t = 0.2)_fey1005);
   gre->SetName("HERMES (-t = 0.2)");
   gre->SetTitle("HERMES (-t = 0.2)");
   gre->SetFillColor(1);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_HERMESsPoPmItsPeQsP0dO2cP1005 = new TH1F("Graph_HERMESsPoPmItsPeQsP0dO2cP1005","HERMES (-t = 0.2)",100,0.007,1.207);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->SetMinimum(0.654);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->SetMaximum(1.206);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->SetDirectory(0);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->SetLineColor(ci);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetXaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetXaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetXaxis()->SetTitleSize(0.9);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetXaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetYaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetYaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetYaxis()->SetTitleSize(0.06);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetYaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetZaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetZaxis()->SetLabelSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetZaxis()->SetTitleSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1005->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_HERMES (-t = 0.2)1005);
   
   gre->Draw("p");
   
   Double_t Graph1_fx5[16] = {
   0.0053,
   0.0277,
   0.0672,
   0.1223,
   0.1911,
   0.271,
   0.3592,
   0.4525,
   0.5475,
   0.6408,
   0.729,
   0.8089,
   0.8777,
   0.9328,
   0.9723,
   0.9947};
   Double_t Graph1_fy5[16] = {
   0.998489,
   1.07332,
   1.09459,
   1.0764,
   1.02864,
   0.960773,
   0.886729,
   0.820116,
   0.773006,
   0.761977,
   0.830099,
   1.12463,
   2.40789,
   12.0811,
   267.163,
   199200};
   graph = new TGraph(16,Graph1_fx5,Graph1_fy5);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0,1.09364);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(219119.9);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(22);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph5->GetXaxis()->SetTitleFont(22);
   Graph_Graph5->GetYaxis()->SetLabelFont(22);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleFont(22);
   Graph_Graph5->GetZaxis()->SetLabelFont(22);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("c");
   
   Double_t Graph2_fx6[16] = {
   0.0053,
   0.0277,
   0.0672,
   0.1223,
   0.1911,
   0.271,
   0.3592,
   0.4525,
   0.5475,
   0.6408,
   0.729,
   0.8089,
   0.8777,
   0.9328,
   0.9723,
   0.9947};
   Double_t Graph2_fy6[16] = {
   1.26974,
   1.32565,
   1.28754,
   1.18841,
   1.05433,
   0.913347,
   0.788552,
   0.6928,
   0.631249,
   0.608471,
   0.652356,
   0.874929,
   1.85811,
   9.3449,
   205.42,
   152950};
   graph = new TGraph(16,Graph2_fx6,Graph2_fy6);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0,1.09364);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(168244.9);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(22);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph6->GetXaxis()->SetTitleFont(22);
   Graph_Graph6->GetYaxis()->SetLabelFont(22);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleFont(22);
   Graph_Graph6->GetZaxis()->SetLabelFont(22);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("c");
   
   Double_t Graph3_fx7[5] = {
   0.2,
   0.25,
   0.3,
   0.35,
   0.4};
   Double_t Graph3_fy7[5] = {
   0.9855,
   1.0142,
   1.0278,
   1.0354,
   1.0408};
   graph = new TGraph(5,Graph3_fx7,Graph3_fy7);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(7);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.18,0.42);
   Graph_Graph7->SetMinimum(0.97997);
   Graph_Graph7->SetMaximum(1.04633);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(22);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(22);
   Graph_Graph7->GetYaxis()->SetLabelFont(22);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleFont(22);
   Graph_Graph7->GetZaxis()->SetLabelFont(22);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("c");
   
   Double_t Graph4_fx8[7] = {
   0.2,
   0.25,
   0.3,
   0.35,
   0.4,
   0.45,
   0.5};
   Double_t Graph4_fy8[7] = {
   1.0032,
   1.0297,
   1.0404,
   1.0465,
   1.0514,
   1.0561,
   1.0611};
   graph = new TGraph(7,Graph4_fx8,Graph4_fy8);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.17,0.53);
   Graph_Graph8->SetMinimum(0.99741);
   Graph_Graph8->SetMaximum(1.06689);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(22);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(22);
   Graph_Graph8->GetYaxis()->SetLabelFont(22);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleFont(22);
   Graph_Graph8->GetZaxis()->SetLabelFont(22);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.4,0.69,0.919,0.9182,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","-t= 0.51 GeV^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HERMES (-t = 0.2)","-t = 0.02 GeV^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","-t = 0.10 GeV^{2}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","-t = 0.33 GeV^{2}","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","-t = 0.20 GeV^{2}","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(7);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","-t = 0.40 GeV^{2}","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Can_R_x->Modified();
   Can_R_x->cd();
   Can_R_x->SetSelected(Can_R_x);
}
