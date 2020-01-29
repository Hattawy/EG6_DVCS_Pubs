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
   
   TH2F *HALU_RATIO_x__2 = new TH2F("HALU_RATIO_x__2","",100,0,0.55,100,0.2,1.8);
   HALU_RATIO_x__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_x__2->SetLineColor(ci);
   HALU_RATIO_x__2->GetXaxis()->SetTitle("x_{B}");
   HALU_RATIO_x__2->GetXaxis()->CenterTitle(true);
   HALU_RATIO_x__2->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_x__2->GetXaxis()->SetLabelSize(0.045);
   HALU_RATIO_x__2->GetXaxis()->SetTitleSize(0.06);
   HALU_RATIO_x__2->GetXaxis()->SetTitleOffset(0.9);
   HALU_RATIO_x__2->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_x__2->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p} (90#circ)");
   HALU_RATIO_x__2->GetYaxis()->CenterTitle(true);
   HALU_RATIO_x__2->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_x__2->GetYaxis()->SetLabelSize(0.045);
   HALU_RATIO_x__2->GetYaxis()->SetTitleSize(0.065);
   HALU_RATIO_x__2->GetYaxis()->SetTitleOffset(0.9);
   HALU_RATIO_x__2->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_x__2->Draw("");
   
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
   0.3+0,
   0.3+0.08175153,
   0.3+0.08175153,
   0.3+0.1452546,
   0.3+0.3263205,
   0.3+0.1731762,
   0.3+0.1731762,
   0.3+0};
   TGraph *graph = new TGraph(8,_fx2,_fy2);
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.055,0.595);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("f");

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
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","Graph",100,0.1392,0.4128);

   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("p");
   
   Double_t _sx1[4] = {
   0.163,
   0.225,
   0.283,
   0.388};
   Double_t _sy1[4] = {
   0.972,
   0.994,
   0.989,
   0.971};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   Double_t fx1003[1] = {
   0.107};
   Double_t fy1003[1] = {
   0.93};
   Double_t fex1003[1] = {
   0};
   Double_t fey1003[1] = {
   0.23};
   gre = new TGraphErrors(1,fx1003,fy1003,fex1003,fey1003);
   gre->SetLineWidth(2);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_H = new TH1F("Graph_H","HERMES (-t = 0.2)",100,0.007,1.207);

   ci = TColor::GetColor("#000099");
   Graph_H->SetLineColor(ci);
   gre->SetHistogram(Graph_H);
   
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
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,1.09364);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
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
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,0,1.09364);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
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
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Graph",100,0.18,0.42);

   ci = TColor::GetColor("#000099");
   Graph_Graph35->SetLineColor(ci);
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
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Graph",100,0.17,0.53);

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
   
   TLegend *leg = new TLegend(0.32,0.67,0.92,0.92,NULL,"brNDC");
   leg->SetNColumns(2);
   leg->SetBorderSize(1);
   TLegendEntry *entry=leg->AddEntry("gre","CLAS (This work)","P");
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_H","HERMES [x]","P");
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Liuti et al. (low -t) [x]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Guzey et al. (low -t) [x]","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Liuti et al. (high -t) [x]","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Guzey et al. (high -t) [x]","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("graphS","Fucini et al. [x]","L");
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetLineColor(6);
   entry->SetTextFont(42);
   leg->Draw();
   Can_R_x->Modified();
   Can_R_x->cd();
   Can_R_x->SetSelected(Can_R_x);
}
