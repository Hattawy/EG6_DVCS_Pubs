void ALU_ratioInc_x_shortscenrario()
{
//=========Macro generated from canvas: Can_R_x/DVCS Helium BoNuS
//=========  (Fri Jul 19 14:29:28 2019) by ROOT version 6.14/04
   TCanvas *Can_R_x = new TCanvas("Can_R_x", "DVCS Helium BoNuS",63,57,600,450);
   gStyle->SetOptFit(1);
   Can_R_x->SetHighLightColor(2);
   Can_R_x->Range(-0.1558442,-0.4506493,0.8831169,1.887013);
   Can_R_x->SetFillColor(0);
   Can_R_x->SetBorderMode(0);
   Can_R_x->SetBorderSize(2);
   Can_R_x->SetLeftMargin(0.15);
   Can_R_x->SetRightMargin(0.08);
   Can_R_x->SetTopMargin(0.08);
   Can_R_x->SetBottomMargin(0.15);
   Can_R_x->SetFrameBorderMode(0);
   Can_R_x->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_x__2 = new TH2F("HALU_RATIO_x__2","",100,0,0.8,100,-0.1,1.7);
   HALU_RATIO_x__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_x__2->SetLineColor(ci);
   HALU_RATIO_x__2->GetXaxis()->SetTitle("x_{B}");
   HALU_RATIO_x__2->GetXaxis()->CenterTitle(true);
   HALU_RATIO_x__2->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_x__2->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_x__2->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__2->GetXaxis()->SetTitleSize(0.07);
   HALU_RATIO_x__2->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_x__2->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p} (90#circ)");
   HALU_RATIO_x__2->GetYaxis()->CenterTitle(true);
   HALU_RATIO_x__2->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_x__2->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_x__2->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__2->GetYaxis()->SetTitleSize(0.07);
   HALU_RATIO_x__2->GetYaxis()->SetTitleOffset(0);
   HALU_RATIO_x__2->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_x__2->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_x__2->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_x__2->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_x__2->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_x__2->Draw("");
   
   Double_t Graph0_fx1002[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1002[4] = {
   0.552459,
   0.767109,
   0.787287,
   0.807909};
   Double_t Graph0_fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[4] = {
   0.102538,
   0.169802,
   0.174141,
   0.418206};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","Graph",100,0.1392,0.4128);
   Graph_Graph01002->SetMinimum(0.3060618);
   Graph_Graph01002->SetMaximum(1.309756);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetLabelFont(22);
   Graph_Graph01002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01002->GetXaxis()->SetTitleFont(22);
   Graph_Graph01002->GetYaxis()->SetLabelFont(22);
   Graph_Graph01002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01002->GetYaxis()->SetTitleFont(22);
   Graph_Graph01002->GetZaxis()->SetLabelFont(22);
   Graph_Graph01002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01002->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("p");
   
   Double_t _fx2[8] = {
   0.1,
   0.1,
   0.162,
   0.227,
   0.287,
   0.39,
   0.55,
   0.55};
   Double_t _fy2[8] = {
   0,
   0.08175153,
   0.08175153,
   0.1452546,
   0.3263205,
   0.1731762,
   0.1731762,
   0};
   TGraph *graph = new TGraph(8,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.055,0.595);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(0.3589525);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(22);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(22);
   Graph_Graph2->GetYaxis()->SetLabelFont(22);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(0);
   Graph_Graph2->GetYaxis()->SetTitleFont(22);
   Graph_Graph2->GetZaxis()->SetLabelFont(22);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("f");
   TLine *line = new TLine(0,0,0.8,0);
   line->SetLineStyle(7);
   line->Draw();
   
   Double_t fx1003[1] = {
   0.107};
   Double_t fy1003[1] = {
   0.93};
   Double_t fex1003[1] = {
   0};
   Double_t fey1003[1] = {
   0.23};
   gre = new TGraphErrors(1,fx1003,fy1003,fex1003,fey1003);
   gre->SetName("HERMES (-t = 0.2)");
   gre->SetTitle("HERMES (-t = 0.2)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_HERMESsPoPmItsPeQsP0dO2cP1003 = new TH1F("Graph_HERMESsPoPmItsPeQsP0dO2cP1003","HERMES (-t = 0.2)",100,0.007,1.207);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->SetMinimum(0.654);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->SetMaximum(1.206);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->SetDirectory(0);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->SetLineColor(ci);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetXaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetXaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetXaxis()->SetTitleSize(0.9);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetXaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetYaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetYaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetYaxis()->SetTitleSize(0.06);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetYaxis()->SetTitleOffset(0);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetYaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetZaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetZaxis()->SetLabelSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetZaxis()->SetTitleSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO2cP1003->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_HERMESsPoPmItsPeQsP0dO2cP1003);
   
   gre->Draw("p");
   
   Double_t Graph1_fx3[16] = {
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
   Double_t Graph1_fy3[16] = {
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
   graph = new TGraph(16,Graph1_fx3,Graph1_fy3);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,1.09364);
   Graph_Graph13->SetMinimum(0.6857793);
   Graph_Graph13->SetMaximum(219119.9);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(22);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph13->GetXaxis()->SetTitleFont(22);
   Graph_Graph13->GetYaxis()->SetLabelFont(22);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleOffset(0);
   Graph_Graph13->GetYaxis()->SetTitleFont(22);
   Graph_Graph13->GetZaxis()->SetLabelFont(22);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("c");
   
   Double_t Graph2_fx4[16] = {
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
   Double_t Graph2_fy4[16] = {
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
   graph = new TGraph(16,Graph2_fx4,Graph2_fy4);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,0,1.09364);
   Graph_Graph24->SetMinimum(0.5476239);
   Graph_Graph24->SetMaximum(168244.9);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(22);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph24->GetXaxis()->SetTitleFont(22);
   Graph_Graph24->GetYaxis()->SetLabelFont(22);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph24->GetYaxis()->SetTitleOffset(0);
   Graph_Graph24->GetYaxis()->SetTitleFont(22);
   Graph_Graph24->GetZaxis()->SetLabelFont(22);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("c");
   
   Double_t Graph3_fx5[5] = {
   0.2,
   0.25,
   0.3,
   0.35,
   0.4};
   Double_t Graph3_fy5[5] = {
   0.9855,
   1.0142,
   1.0278,
   1.0354,
   1.0408};
   graph = new TGraph(5,Graph3_fx5,Graph3_fy5);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(7);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Graph",100,0.18,0.42);
   Graph_Graph35->SetMinimum(0.97997);
   Graph_Graph35->SetMaximum(1.04633);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph35->SetLineColor(ci);
   Graph_Graph35->GetXaxis()->SetLabelFont(22);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph35->GetXaxis()->SetTitleFont(22);
   Graph_Graph35->GetYaxis()->SetLabelFont(22);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph35->GetYaxis()->SetTitleOffset(0);
   Graph_Graph35->GetYaxis()->SetTitleFont(22);
   Graph_Graph35->GetZaxis()->SetLabelFont(22);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph35);
   
   graph->Draw("c");
   
   Double_t Graph4_fx6[7] = {
   0.2,
   0.25,
   0.3,
   0.35,
   0.4,
   0.45,
   0.5};
   Double_t Graph4_fy6[7] = {
   1.0032,
   1.0297,
   1.0404,
   1.0465,
   1.0514,
   1.0561,
   1.0611};
   graph = new TGraph(7,Graph4_fx6,Graph4_fy6);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Graph",100,0.17,0.53);
   Graph_Graph46->SetMinimum(0.99741);
   Graph_Graph46->SetMaximum(1.06689);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph46->SetLineColor(ci);
   Graph_Graph46->GetXaxis()->SetLabelFont(22);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph46->GetXaxis()->SetTitleFont(22);
   Graph_Graph46->GetYaxis()->SetLabelFont(22);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph46->GetYaxis()->SetTitleOffset(0);
   Graph_Graph46->GetYaxis()->SetTitleFont(22);
   Graph_Graph46->GetZaxis()->SetLabelFont(22);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph46);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.4,0.73,0.919,0.9182,NULL,"brNDC");
   leg->SetNColumns(2);
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
