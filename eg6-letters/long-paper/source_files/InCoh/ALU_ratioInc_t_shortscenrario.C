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
   
   TH2F *HALU_RATIO_t__6 = new TH2F("HALU_RATIO_t__6","",100,0,1.2,100,-0.1,2.02);
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
   HALU_RATIO_t__6->GetYaxis()->SetTitleOffset(0);
   HALU_RATIO_t__6->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->Draw("");
   
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
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Graph",100,0.049,1.177);
   Graph_Graph01013->SetMinimum(0.3324691);
   Graph_Graph01013->SetMaximum(1.79306);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetLabelFont(22);
   Graph_Graph01013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01013->GetXaxis()->SetTitleFont(22);
   Graph_Graph01013->GetYaxis()->SetLabelFont(22);
   Graph_Graph01013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01013->GetYaxis()->SetTitleFont(22);
   Graph_Graph01013->GetZaxis()->SetLabelFont(22);
   Graph_Graph01013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01013->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("p");
   
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
   0,
   0.1079675,
   0.1079675,
   0.2892436,
   0.1463935,
   0.4630972,
   0.4630972,
   0};
   TGraph *graph = new TGraph(8,_fx14,_fy14);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,0,2.194);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(0.5094069);
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
   Graph_Graph14->GetYaxis()->SetTitleOffset(0);
   Graph_Graph14->GetYaxis()->SetTitleFont(22);
   Graph_Graph14->GetZaxis()->SetLabelFont(22);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("f");
   TLine *line = new TLine(0,0,1.2,0);
   line->SetLineStyle(7);
   line->Draw();
   
   Double_t Graph1_fx1014[1] = {
   0.2};
   Double_t Graph1_fy1014[1] = {
   0.93};
   Double_t Graph1_fex1014[1] = {
   0};
   Double_t Graph1_fey1014[1] = {
   0.23};
   gre = new TGraphErrors(1,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,0.1,1.3);
   Graph_Graph11014->SetMinimum(0.654);
   Graph_Graph11014->SetMaximum(1.206);
   Graph_Graph11014->SetDirectory(0);
   Graph_Graph11014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11014->SetLineColor(ci);
   Graph_Graph11014->GetXaxis()->SetLabelFont(22);
   Graph_Graph11014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11014->GetXaxis()->SetTitleFont(22);
   Graph_Graph11014->GetYaxis()->SetLabelFont(22);
   Graph_Graph11014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11014->GetYaxis()->SetTitleFont(22);
   Graph_Graph11014->GetZaxis()->SetLabelFont(22);
   Graph_Graph11014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11014->GetZaxis()->SetTitleFont(22);
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
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph215 = new TH1F("Graph_Graph215","Graph",100,0,0.54688);
   Graph_Graph215->SetMinimum(1.035838);
   Graph_Graph215->SetMaximum(1.301662);
   Graph_Graph215->SetDirectory(0);
   Graph_Graph215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph215->SetLineColor(ci);
   Graph_Graph215->GetXaxis()->SetLabelFont(22);
   Graph_Graph215->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph215->GetXaxis()->SetTitleFont(22);
   Graph_Graph215->GetYaxis()->SetLabelFont(22);
   Graph_Graph215->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph215->GetYaxis()->SetTitleOffset(0);
   Graph_Graph215->GetYaxis()->SetTitleFont(22);
   Graph_Graph215->GetZaxis()->SetLabelFont(22);
   Graph_Graph215->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph215->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph215->GetZaxis()->SetTitleFont(22);
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
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph316 = new TH1F("Graph_Graph316","Graph",100,0,0.54688);
   Graph_Graph316->SetMinimum(1.02111);
   Graph_Graph316->SetMaximum(1.08927);
   Graph_Graph316->SetDirectory(0);
   Graph_Graph316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph316->SetLineColor(ci);
   Graph_Graph316->GetXaxis()->SetLabelFont(22);
   Graph_Graph316->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph316->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph316->GetXaxis()->SetTitleFont(22);
   Graph_Graph316->GetYaxis()->SetLabelFont(22);
   Graph_Graph316->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph316->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph316->GetYaxis()->SetTitleOffset(0);
   Graph_Graph316->GetYaxis()->SetTitleFont(22);
   Graph_Graph316->GetZaxis()->SetLabelFont(22);
   Graph_Graph316->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph316->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph316->GetZaxis()->SetTitleFont(22);
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
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph417 = new TH1F("Graph_Graph417","Graph",100,0,0.875);
   Graph_Graph417->SetMinimum(0.94124);
   Graph_Graph417->SetMaximum(1.02716);
   Graph_Graph417->SetDirectory(0);
   Graph_Graph417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph417->SetLineColor(ci);
   Graph_Graph417->GetXaxis()->SetLabelFont(22);
   Graph_Graph417->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph417->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph417->GetXaxis()->SetTitleFont(22);
   Graph_Graph417->GetYaxis()->SetLabelFont(22);
   Graph_Graph417->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph417->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph417->GetYaxis()->SetTitleFont(22);
   Graph_Graph417->GetZaxis()->SetLabelFont(22);
   Graph_Graph417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph417->GetZaxis()->SetTitleFont(22);
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
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph518 = new TH1F("Graph_Graph518","Graph",100,0.14,0.86);
   Graph_Graph518->SetMinimum(1.02538);
   Graph_Graph518->SetMaximum(1.05442);
   Graph_Graph518->SetDirectory(0);
   Graph_Graph518->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph518->SetLineColor(ci);
   Graph_Graph518->GetXaxis()->SetLabelFont(22);
   Graph_Graph518->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph518->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph518->GetXaxis()->SetTitleFont(22);
   Graph_Graph518->GetYaxis()->SetLabelFont(22);
   Graph_Graph518->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph518->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph518->GetYaxis()->SetTitleOffset(0);
   Graph_Graph518->GetYaxis()->SetTitleFont(22);
   Graph_Graph518->GetZaxis()->SetLabelFont(22);
   Graph_Graph518->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph518->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph518->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph518);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.3,0.73,0.82,0.9182,NULL,"brNDC");
   leg->SetNColumns(2);
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
   leg->Draw();
   Can_R_t->Modified();
   Can_R_t->cd();
   Can_R_t->SetSelected(Can_R_t);
}
