void ALU_ratioInc_Q2_shortscenrario()
{
//=========Macro generated from canvas: Can/DVCS Helium BoNuS
//=========  (Thu Jul  6 14:04:33 2017) by ROOT version6.09/01
   TCanvas *Can = new TCanvas("Can", "DVCS Helium BoNuS",0,0,600,450);
   gStyle->SetOptFit(1);
   Can->SetHighLightColor(2);
   Can->Range(-0.1818182,-0.09220779,4.363636,1.855844);
   Can->SetFillColor(0);
   Can->SetBorderMode(0);
   Can->SetBorderSize(2);
   Can->SetLeftMargin(0.15);
   Can->SetRightMargin(0.08);
   Can->SetTopMargin(0.08);
   Can->SetBottomMargin(0.15);
   Can->SetFrameBorderMode(0);
   Can->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_Q2__2 = new TH2F("HALU_RATIO_Q2__2","",100,0.5,4,100,0.2,1.7);
   HALU_RATIO_Q2__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_Q2__2->SetLineColor(ci);
   HALU_RATIO_Q2__2->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_RATIO_Q2__2->GetXaxis()->CenterTitle(true);
   HALU_RATIO_Q2__2->GetXaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__2->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__2->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__2->GetXaxis()->SetTitleSize(0.07);
   HALU_RATIO_Q2__2->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__2->GetYaxis()->SetTitle("A_{LU}^{Incoh}/A_{LU}^{p}(90#circ)");
   HALU_RATIO_Q2__2->GetYaxis()->CenterTitle(true);
   HALU_RATIO_Q2__2->GetYaxis()->SetNdivisions(605);
   HALU_RATIO_Q2__2->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__2->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__2->GetYaxis()->SetTitleSize(0.07);
   HALU_RATIO_Q2__2->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__2->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__2->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_Q2__2->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_Q2__2->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__2->Draw("");
   
   Double_t This Work (x_{B} = 0.255_fx1002[4] = {
   1.395,
   1.886,
   2.339,
   3.092};
   Double_t This Work (x_{B} = 0.255_fy1002[4] = {
   0.664014,
   0.697639,
   0.86544,
   0.605182};
   Double_t This Work (x_{B} = 0.255_fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t This Work (x_{B} = 0.255_fey1002[4] = {
   0.11227,
   0.181184,
   0.182746,
   0.297185};
   TGraphErrors *gre = new TGraphErrors(4,This Work (x_{B} = 0.255_fx1002,This Work (x_{B} = 0.255_fy1002,This Work (x_{B} = 0.255_fex1002,This Work (x_{B} = 0.255_fey1002);
   gre->SetName("This Work (x_{B} = 0.255");
   gre->SetTitle("This Work (x_{B} = 0.255");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002 = new TH1F("Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002","This Work (x_{B} = 0.255",100,1.2253,3.2617);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->SetMinimum(0.2339781);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->SetMaximum(1.122205);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->SetDirectory(0);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->SetLineColor(ci);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetXaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetXaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetXaxis()->SetTitleSize(0.9);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetXaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetYaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetYaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetYaxis()->SetTitleSize(0.06);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetYaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetZaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetZaxis()->SetLabelSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetZaxis()->SetTitleSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO2551002->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_This Work (x_{B} = 0.2551002);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.4,0.82,0.919,0.9182,NULL,"brNDC");
   leg->SetBorderSize(1);
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
   Can->Modified();
   Can->cd();
   Can->SetSelected(Can);
}
