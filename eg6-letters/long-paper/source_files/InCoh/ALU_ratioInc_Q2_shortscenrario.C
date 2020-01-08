void ALU_ratioInc_Q2_shortscenrario()
{
//=========Macro generated from canvas: Can/DVCS Helium BoNuS
//=========  (Fri Jul 19 14:29:28 2019) by ROOT version 6.14/04
   TCanvas *Can = new TCanvas("Can", "DVCS Helium BoNuS",63,57,600,450);
   gStyle->SetOptFit(1);
   Can->SetHighLightColor(2);
   Can->Range(-0.1818182,-0.4506493,4.363636,1.887013);
   Can->SetFillColor(0);
   Can->SetBorderMode(0);
   Can->SetBorderSize(2);
   Can->SetLeftMargin(0.15);
   Can->SetRightMargin(0.08);
   Can->SetTopMargin(0.08);
   Can->SetBottomMargin(0.15);
   Can->SetFrameBorderMode(0);
   Can->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_Q2__1 = new TH2F("HALU_RATIO_Q2__1","",100,0.5,4,100,-0.1,1.7);
   HALU_RATIO_Q2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_Q2__1->SetLineColor(ci);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_RATIO_Q2__1->GetXaxis()->CenterTitle(true);
   HALU_RATIO_Q2__1->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__1->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__1->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitleSize(0.07);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p}(90#circ)");
   HALU_RATIO_Q2__1->GetYaxis()->CenterTitle(true);
   HALU_RATIO_Q2__1->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__1->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__1->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleSize(0.07);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleOffset(0);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__1->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__1->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_Q2__1->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_Q2__1->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__1->Draw("");
   
   Double_t _fx1[8] = {
   1,
   1,
   1.395,
   1.886,
   2.338,
   3.098,
   4.5,
   4.5};
   Double_t _fy1[8] = {
   0,
   0.1833544,
   0.1833544,
   0.07582082,
   0.2892318,
   0.3451997,
   0.3451997,
   0};
   TGraph *graph = new TGraph(8,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.65,4.85);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(0.3797196);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(22);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(22);
   Graph_Graph1->GetYaxis()->SetLabelFont(22);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1->GetYaxis()->SetTitleFont(22);
   Graph_Graph1->GetZaxis()->SetLabelFont(22);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   TLine *line = new TLine(0.5,0,4,0);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.44,0.83,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","x_{B}= 0.27, -t= 0.51 GeV^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   
   Double_t fx1001[4] = {
   1.395,
   1.886,
   2.339,
   3.092};
   Double_t fy1001[4] = {
   0.664014,
   0.697639,
   0.86544,
   0.605182};
   Double_t fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t fey1001[4] = {
   0.11227,
   0.181184,
   0.182746,
   0.297185};
   TGraphErrors *gre = new TGraphErrors(4,fx1001,fy1001,fex1001,fey1001);
   gre->SetName("This Work (x_{B} = 0.255");
   gre->SetTitle("This Work (x_{B} = 0.255");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_ThissPWorksPoPx_sPeQsP0dO2551001 = new TH1F("Graph_ThissPWorksPoPx_sPeQsP0dO2551001","",100,1.2253,3.2617);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->SetMinimum(0.2339781);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->SetMaximum(1.122205);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->SetDirectory(0);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->SetLineColor(ci);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetXaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetXaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetXaxis()->SetTitleSize(0.9);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetXaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetYaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetYaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetYaxis()->SetTitleSize(0.06);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetYaxis()->SetTitleOffset(0);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetYaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetZaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetZaxis()->SetLabelSize(0.035);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetZaxis()->SetTitleSize(0.035);
   Graph_ThissPWorksPoPx_sPeQsP0dO2551001->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_ThissPWorksPoPx_sPeQsP0dO2551001);
   
   gre->Draw("p");
   Can->Modified();
   Can->cd();
   Can->SetSelected(Can);
}
