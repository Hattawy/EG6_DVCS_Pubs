void ALU_90_p_vs_t_shortscenrario()
{
//=========Macro generated from canvas: Can_p_t/DVCS Helium BoNuS
//=========  (Thu May 23 14:35:04 2019) by ROOT version 6.14/04
   TCanvas *Can_p_t = new TCanvas("Can_p_t", "DVCS Helium BoNuS",63,57,600,450);
   gStyle->SetOptFit(1);
   Can_p_t->SetHighLightColor(2);
   Can_p_t->Range(-0.2337662,-0.2168831,1.324675,0.5623377);
   Can_p_t->SetFillColor(0);
   Can_p_t->SetBorderMode(0);
   Can_p_t->SetBorderSize(2);
   Can_p_t->SetLeftMargin(0.15);
   Can_p_t->SetRightMargin(0.08);
   Can_p_t->SetTopMargin(0.08);
   Can_p_t->SetBottomMargin(0.15);
   Can_p_t->SetFrameBorderMode(0);
   Can_p_t->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_t__5 = new TH2F("HALU_p_vs_t__5","",100,0,1.3,100,-0.1,0.45);
   HALU_p_vs_t__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_p_vs_t__5->SetLineColor(ci);
   HALU_p_vs_t__5->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_p_vs_t__5->GetXaxis()->CenterTitle(true);
   HALU_p_vs_t__5->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_t__5->GetXaxis()->SetLabelFont(42);
   HALU_p_vs_t__5->GetXaxis()->SetLabelSize(0.045);
   HALU_p_vs_t__5->GetXaxis()->SetTitleSize(0.06);
   HALU_p_vs_t__5->GetXaxis()->SetTitleFont(42);
   HALU_p_vs_t__5->GetXaxis()->SetTitleOffset(.9);
   HALU_p_vs_t__5->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_t__5->GetYaxis()->CenterTitle(true);
   HALU_p_vs_t__5->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_t__5->GetYaxis()->SetLabelFont(42);
   HALU_p_vs_t__5->GetYaxis()->SetLabelSize(0.045);
   HALU_p_vs_t__5->GetYaxis()->SetTitleSize(0.06);
   HALU_p_vs_t__5->GetYaxis()->SetTitleOffset(.9);
   HALU_p_vs_t__5->GetYaxis()->SetTitleFont(42);
   HALU_p_vs_t__5->Draw("");
   
   Double_t Graph0_fx1006[4] = {
   0.143,
   0.284,
   0.489,
   1.083};
   Double_t Graph0_fy1006[4] = {
   0.1828399,
   0.1408025,
   0.1371302,
   0.1389324};
   Double_t Graph0_fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1006[4] = {
   0.02059014,
   0.02724702,
   0.02901969,
   0.0618686};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetMarkerStyle(21);
   gre->SetLineWidth(2);
   gre->SetMarkerSize(1.5);
   gre->Draw("p");
   
   Double_t _fx11[8] = {
   0.06,
   0.06,
   0.145,
   0.282,
   0.49,
   0.9,
   1.2,
   1.2};
   Double_t _fy11[8] = {
   0,
   0.01437639,
   0.01437639,
   0.02000183,
   0.02444908,
   0.02394077,
   0.02394077,
   0};
   TGraph *graph = new TGraph(8,_fx11,_fy11);
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->Draw("f");
   
   Double_t _sx1[4] = {
   0.145,
   0.282,
   0.490,
   1.11 };
   Double_t _sy1[4] = {
   0.1455,
   0.1644,
   0.1902,
   0.1728};
// 0.140,
// 0.155,
// 0.173,
// 0.165};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   Double_t Graph1_fx1007[2] = {
   0.201,
   0.418};
   Double_t Graph1_fy1007[2] = {
   0.055,
   -0.009};
   Double_t Graph1_fex1007[2] = {
   0,
   0};
   Double_t Graph1_fey1007[2] = {
   0.186,
   0.264};
   gre = new TGraphErrors(2,Graph1_fx1007,Graph1_fy1007,Graph1_fex1007,Graph1_fey1007);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   gre->Draw("p");
   
   Double_t Graph2_fx1008[2] = {
   0.027,
   0.093};
   Double_t Graph2_fy1008[2] = {
   0.249,
   0.28};
   Double_t Graph2_fex1008[2] = {
   0,
   0};
   Double_t Graph2_fey1008[2] = {
   0.118,
   0.146};
   gre = new TGraphErrors(2,Graph2_fx1008,Graph2_fy1008,Graph2_fex1008,Graph2_fey1008);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   gre->Draw("p");
   
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
   0.0994805,
   0.0997915,
   0.1352,
   0.199169,
   0.243986,
   0.273819,
   0.29121,
   0.298917,
   0.299481,
   0.29498,
   0.287772,
   0.279512,
   0.271342,
   0.264424,
   0.259372,
   0.25637};
   graph = new TGraph(16,Graph3_fx12,Graph3_fy12);
   graph->SetName("Graph3");
   graph->SetTitle("LT (x_{B}=0.132, Q^{2}= 1.2)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(1.5);
   graph->Draw("c");
   
   Double_t Graph4_fx1009[16] = {
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
   Double_t Graph4_fy1009[16] = {
   0.0912268,
   0.0912199,
   0.0912841,
   0.136111,
   0.195691,
   0.230674,
   0.249617,
   0.257245,
   0.257045,
   0.251795,
   0.243898,
   0.235208,
   0.226898,
   0.220005,
   0.214854,
   0.211947};
   Double_t Graph4_fex1009[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1009[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(16,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("LT (x_{B}=0.238, Q^{2}= 2.1)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetLineWidth(2);
   gre->SetLineStyle(7);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   gre->Draw("c");

   TLine *line = new TLine(0,0,1.3,0);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.46,0.64,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","CLAS (This work)","P");
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","HERMES [10]","P");
   entry=leg->AddEntry("Graph3","Liuti et al. (low x_{B}) [29]","L");
   entry=leg->AddEntry("Graph4","Liuti et al. (high x_{B}) [29]","L");
   entry=leg->AddEntry("GraphS","Fucini et al. [37]","L");
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetLineColor(6);
   entry->SetTextFont(42);
   leg->Draw();
   Can_p_t->Modified();
   Can_p_t->cd();
   Can_p_t->SetSelected(Can_p_t);
}
