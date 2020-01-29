void ALU_ratioInc_t_shortscenrario()
{
//=========Macro generated from canvas: Can_R_t/
//=========  (Fri Jul 19 14:29:29 2019) by ROOT version 6.14/04
   TCanvas *Can_R_t = new TCanvas("Can_R_t", "",63,57,600,450);
   gStyle->SetOptFit(1);
   Can_R_t->SetHighLightColor(2);
   Can_R_t->Range(-0.2337662,-0.512987,1.324675,2.24026);
   Can_R_t->SetFillColor(0);
   Can_R_t->SetBorderMode(0);
   Can_R_t->SetBorderSize(2);
   Can_R_t->SetLeftMargin(0.15);
   Can_R_t->SetRightMargin(0.08);
   Can_R_t->SetTopMargin(0.08);
   Can_R_t->SetBottomMargin(0.15);
   Can_R_t->SetFrameBorderMode(0);
   Can_R_t->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_t__6 = new TH2F("HALU_RATIO_t__6","",100,0,1.18,100,0.23,1.8);
   HALU_RATIO_t__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_t__6->SetLineColor(ci);
   HALU_RATIO_t__6->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_RATIO_t__6->GetXaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetXaxis()->SetLabelFont(42);
   HALU_RATIO_t__6->GetXaxis()->SetLabelSize(0.045);
   HALU_RATIO_t__6->GetXaxis()->SetTitleSize(0.06);
   HALU_RATIO_t__6->GetXaxis()->SetTitleOffset(0.9);
   HALU_RATIO_t__6->GetXaxis()->SetTitleFont(42);
   HALU_RATIO_t__6->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p} (90#circ)");
   HALU_RATIO_t__6->GetYaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetYaxis()->SetLabelFont(42);
   HALU_RATIO_t__6->GetYaxis()->SetLabelSize(0.045);
   HALU_RATIO_t__6->GetYaxis()->SetTitleSize(0.06);
   HALU_RATIO_t__6->GetYaxis()->SetTitleOffset(0.9);
   HALU_RATIO_t__6->GetYaxis()->SetTitleFont(42);
   HALU_RATIO_t__6->Draw("");
   
   Double_t _fx14[8] = {
   0.06,
   0.06,
   0.143,
   0.284,
   0.485,
   1.083,
   2,
   2};
   Double_t _fy14[8] = {
   0.3+0,
   0.3+0.1079675,
   0.3+0.1079675,
   0.3+0.2892436,
   0.3+0.1463935,
   0.3+0.4630972,
   0.3+0.4630972,
   0.3+0};
   TGraph *graph = new TGraph(8,_fx14,_fy14);
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
 
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,0,2.194);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("f");

   Double_t Graph0_fx1013[4] = {
   0.143,
   0.284,
   0.489,
   1.083};
   Double_t Graph0_fy1013[4] = {
   0.742178,
   0.62312,
   0.60736,
   1.09783};
   Double_t Graph0_fex1013[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1013[4] = {
   0.141263,
   0.130671,
   0.153175,
   0.573514};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Graph",100,0.049,1.177);

   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("p");
   
   Double_t _sx1[4] = {
   0.136,
   0.281,
   0.492,
   1.09};
   Double_t _sy1[4] = {
   1.03,
   1.00,
   0.987,
   0.987};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   Double_t Graph1_fx1014[1] = {
   0.2};
   Double_t Graph1_fy1014[1] = {
   0.93};
   Double_t Graph1_fex1014[1] = {
   0};
   Double_t Graph1_fey1014[1] = {
   0.23};
   gre = new TGraphErrors(1,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetLineColor(8);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,0.1,1.3);
   ci = TColor::GetColor("#000099");
   Graph_Graph11014->SetLineColor(ci);
   gre->SetHistogram(Graph_Graph11014);
   
   gre->Draw("p");
   
   Double_t Graph2_fx15[16] = {
   0.0026,
   0.0139,
   0.0336,
   0.0611,
   0.0955,
   0.1355,
   0.1796,
   0.2262,
   0.2738,
   0.3204,
   0.3645,
   0.4045,
   0.4389,
   0.4664,
   0.4861,
   0.4974};
   Double_t Graph2_fy15[16] = {
   1.05799,
   1.06129,
   1.06763,
   1.0764,
   1.08933,
   1.10515,
   1.12332,
   1.14398,
   1.16641,
   1.18841,
   1.21017,
   1.23061,
   1.24803,
   1.26249,
   1.27342,
   1.27951};
   graph = new TGraph(16,Graph2_fx15,Graph2_fy15);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph215 = new TH1F("Graph_Graph215","Graph",100,0,0.54688);
   ci = TColor::GetColor("#000099");
   Graph_Graph215->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph215);
   
   graph->Draw("c");
   
   Double_t Graph3_fx16[16] = {
   0.0026,
   0.0139,
   0.0336,
   0.0611,
   0.0955,
   0.1355,
   0.1796,
   0.2262,
   0.2738,
   0.3204,
   0.3645,
   0.4045,
   0.4389,
   0.4664,
   0.4861,
   0.4974};
   Double_t Graph3_fy16[16] = {
   1.02687,
   1.02679,
   1.02752,
   1.02864,
   1.03022,
   1.03309,
   1.03687,
   1.04199,
   1.04809,
   1.05433,
   1.06066,
   1.06709,
   1.07271,
   1.07785,
   1.08121,
   1.08359};
   graph = new TGraph(16,Graph3_fx16,Graph3_fy16);
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph316 = new TH1F("Graph_Graph316","Graph",100,0,0.54688);
   ci = TColor::GetColor("#000099");
   Graph_Graph316->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph316);
   
   graph->Draw("c");
   
   Double_t Graph4_fx17[13] = {
   0.05,
   0.06,
   0.07,
   0.08,
   0.09,
   0.1,
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.8};
   Double_t Graph4_fy17[13] = {
   0.9484,
   0.9598,
   0.9653,
   0.9687,
   0.9712,
   0.9731,
   0.9855,
   0.9953,
   1.0032,
   1.0094,
   1.0141,
   1.0175,
   1.02};
   graph = new TGraph(13,Graph4_fx17,Graph4_fy17);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph417 = new TH1F("Graph_Graph417","Graph",100,0,0.875);
   ci = TColor::GetColor("#000099");
   Graph_Graph417->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph417);
   
   graph->Draw("c");
   
   Double_t Graph5_fx18[7] = {
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.8};
   Double_t Graph5_fy18[7] = {
   1.0278,
   1.0352,
   1.0404,
   1.0443,
   1.0474,
   1.0499,
   1.052};
   graph = new TGraph(7,Graph5_fx18,Graph5_fy18);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph518 = new TH1F("Graph_Graph518","Graph",100,0.14,0.86);
   Graph_Graph518->SetMinimum(1.02538);
   Graph_Graph518->SetMaximum(1.05442);
   Graph_Graph518->SetDirectory(0);
   Graph_Graph518->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph518->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph518);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.15,0.71,0.82,0.92,NULL,"brNDC");
   leg->SetNColumns(2);
   leg->SetBorderSize(1);
   TLegendEntry *entry=leg->AddEntry("gre","CLAS (This work)","P");
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","HERMES [x]","P");
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Liuti et al. (low x) [x]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Guzey et al. (low x) [x]","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Liuti et al. (high x) [x]","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Guzey et al. (high x) [x]","L");
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
   Can_R_t->Modified();
   Can_R_t->cd();
   Can_R_t->SetSelected(Can_R_t);
}
