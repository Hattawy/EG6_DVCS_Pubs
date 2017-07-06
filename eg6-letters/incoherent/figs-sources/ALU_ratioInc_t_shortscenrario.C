void ALU_ratioInc_t_shortscenrario()
{
//=========Macro generated from canvas: Can_R_t/
//=========  (Thu Jul  6 14:04:34 2017) by ROOT version6.09/01
   TCanvas *Can_R_t = new TCanvas("Can_R_t", "",0,0,600,450);
   gStyle->SetOptFit(1);
   Can_R_t->SetHighLightColor(2);
   Can_R_t->Range(-0.2337662,0.1467533,1.324675,1.835065);
   Can_R_t->SetFillColor(0);
   Can_R_t->SetBorderMode(0);
   Can_R_t->SetBorderSize(2);
   Can_R_t->SetLeftMargin(0.15);
   Can_R_t->SetRightMargin(0.08);
   Can_R_t->SetTopMargin(0.08);
   Can_R_t->SetBottomMargin(0.15);
   Can_R_t->SetFrameBorderMode(0);
   Can_R_t->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_t__6 = new TH2F("HALU_RATIO_t__6","",100,0,1.2,100,0.4,1.7);
   HALU_RATIO_t__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_t__6->SetLineColor(ci);
   HALU_RATIO_t__6->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_RATIO_t__6->GetXaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_t__6->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_t__6->GetXaxis()->SetTitleSize(0.07);
   HALU_RATIO_t__6->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p} (90#circ)");
   HALU_RATIO_t__6->GetYaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_t__6->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_t__6->GetYaxis()->SetTitleSize(0.07);
   HALU_RATIO_t__6->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->Draw("");
   
   Double_t Graph0_fx1009[4] = {
   0.143,
   0.284,
   0.489,
   1.083};
   Double_t Graph0_fy1009[4] = {
   0.742178,
   0.62312,
   0.60736,
   1.09783};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.141263,
   0.130671,
   0.153175,
   0.573514};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,0.049,1.177);
   Graph_Graph1009->SetMinimum(0.3324691);
   Graph_Graph1009->SetMaximum(1.79306);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(22);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1009->GetXaxis()->SetTitleFont(22);
   Graph_Graph1009->GetYaxis()->SetLabelFont(22);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1009->GetYaxis()->SetTitleFont(22);
   Graph_Graph1009->GetZaxis()->SetLabelFont(22);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1010[1] = {
   0.2};
   Double_t Graph1_fy1010[1] = {
   0.93};
   Double_t Graph1_fex1010[1] = {
   0};
   Double_t Graph1_fey1010[1] = {
   0.23};
   gre = new TGraphErrors(1,Graph1_fx1010,Graph1_fy1010,Graph1_fex1010,Graph1_fey1010);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,0.1,1.3);
   Graph_Graph1010->SetMinimum(0.654);
   Graph_Graph1010->SetMaximum(1.206);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(22);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1010->GetXaxis()->SetTitleFont(22);
   Graph_Graph1010->GetYaxis()->SetLabelFont(22);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1010->GetYaxis()->SetTitleFont(22);
   Graph_Graph1010->GetZaxis()->SetLabelFont(22);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("p");
   
   Double_t Graph2_fx11[16] = {
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
   Double_t Graph2_fy11[16] = {
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
   graph = new TGraph(16,Graph2_fx11,Graph2_fy11);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0,0.54688);
   Graph_Graph11->SetMinimum(1.035838);
   Graph_Graph11->SetMaximum(1.301662);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(22);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(22);
   Graph_Graph11->GetYaxis()->SetLabelFont(22);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleFont(22);
   Graph_Graph11->GetZaxis()->SetLabelFont(22);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("c");
   
   Double_t Graph3_fx12[16] = {
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
   Double_t Graph3_fy12[16] = {
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
   graph = new TGraph(16,Graph3_fx12,Graph3_fy12);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0,0.54688);
   Graph_Graph12->SetMinimum(1.02111);
   Graph_Graph12->SetMaximum(1.08927);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(22);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph12->GetXaxis()->SetTitleFont(22);
   Graph_Graph12->GetYaxis()->SetLabelFont(22);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleFont(22);
   Graph_Graph12->GetZaxis()->SetLabelFont(22);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("c");
   
   Double_t Graph4_fx13[13] = {
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
   Double_t Graph4_fy13[13] = {
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
   graph = new TGraph(13,Graph4_fx13,Graph4_fy13);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,0.875);
   Graph_Graph13->SetMinimum(0.94124);
   Graph_Graph13->SetMaximum(1.02716);
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
   Graph_Graph13->GetYaxis()->SetTitleFont(22);
   Graph_Graph13->GetZaxis()->SetLabelFont(22);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("c");
   
   Double_t Graph5_fx14[7] = {
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.8};
   Double_t Graph5_fy14[7] = {
   1.0278,
   1.0352,
   1.0404,
   1.0443,
   1.0474,
   1.0499,
   1.052};
   graph = new TGraph(7,Graph5_fx14,Graph5_fy14);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,0.14,0.86);
   Graph_Graph14->SetMinimum(1.02538);
   Graph_Graph14->SetMaximum(1.05442);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(22);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph14->GetXaxis()->SetTitleFont(22);
   Graph_Graph14->GetYaxis()->SetLabelFont(22);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleFont(22);
   Graph_Graph14->GetZaxis()->SetLabelFont(22);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("c");
   
   Double_t Graph6_fx15[7] = {
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.8};
   Double_t Graph6_fy15[7] = {
   1.0408,
   1.0471,
   1.0514,
   1.0548,
   1.0575,
   1.0598,
   1.0618};
   graph = new TGraph(7,Graph6_fx15,Graph6_fy15);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(7);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,0.14,0.86);
   Graph_Graph15->SetMinimum(1.0387);
   Graph_Graph15->SetMaximum(1.0639);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(22);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph15->GetXaxis()->SetTitleFont(22);
   Graph_Graph15->GetYaxis()->SetLabelFont(22);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetYaxis()->SetTitleFont(22);
   Graph_Graph15->GetZaxis()->SetLabelFont(22);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.4,0.69,0.919,0.9182,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","x_{B}= 0.27","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","x_{B}= 0.11","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","x_{B}= 0.13","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","x_{B}= 0.24","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","x_{B}= 0.20","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","x_{B}= 0.30","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph6","x_{B}= 0.40","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(7);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Can_R_t->Modified();
   Can_R_t->cd();
   Can_R_t->SetSelected(Can_R_t);
}
