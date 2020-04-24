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
   
   TH2F *HALU_RATIO_Q2__1 = new TH2F("HALU_RATIO_Q2__1","",100,0.8,3.8,100,-0.1,1.5);
   HALU_RATIO_Q2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_Q2__1->SetLineColor(ci);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_RATIO_Q2__1->GetXaxis()->CenterTitle(true);
   HALU_RATIO_Q2__1->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__1->GetXaxis()->SetLabelFont(42);
   HALU_RATIO_Q2__1->GetXaxis()->SetLabelSize(0.045);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitleSize(0.06);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitleFont(42);
   HALU_RATIO_Q2__1->GetXaxis()->SetTitleOffset(0.9);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p}(90#circ)");
   HALU_RATIO_Q2__1->GetYaxis()->CenterTitle(true);
   HALU_RATIO_Q2__1->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__1->GetYaxis()->SetLabelFont(42);
   HALU_RATIO_Q2__1->GetYaxis()->SetLabelSize(0.045);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleSize(0.06);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleOffset(0.9);
   HALU_RATIO_Q2__1->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__1->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__1->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_Q2__1->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_Q2__1->GetZaxis()->SetTitleFont(42);
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
   graph->Draw("f");

   TLine *line = new TLine(0.8,0,3.8,0);
   line->SetLineStyle(7);
   line->Draw();
   
   Double_t _sx1[4] = {
   1.40,
   1.89,
   2.34,
   3.10};
   Double_t _sy1[4] = {
   0.9038,
   0.9687,
   0.9904,
   0.9759};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

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
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   gre->Draw("p");

   TLegend *leg = new TLegend(0.54,0.80,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gre","CLAS (This work)","P");
   entry->SetTextFont(42);
   entry=leg->AddEntry("graphS","Fucini et al. [40]","L");
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetLineColor(6);
   entry->SetTextFont(42);
   leg->Draw();
   
   Can->Modified();
   Can->cd();
   Can->SetSelected(Can);
}
