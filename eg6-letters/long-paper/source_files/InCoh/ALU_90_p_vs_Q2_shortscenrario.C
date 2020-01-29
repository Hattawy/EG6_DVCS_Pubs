void ALU_90_p_vs_Q2_shortscenrario()
{
//=========Macro generated from canvas: Can_p_Q2/DVCS Helium BoNuS
//=========  (Thu May 23 14:35:03 2019) by ROOT version 6.14/04
   TCanvas *Can_p_Q2 = new TCanvas("Can_p_Q2", "DVCS Helium BoNuS",63,57,600,450);
   gStyle->SetOptFit(1);
   Can_p_Q2->SetHighLightColor(2);
   Can_p_Q2->Range(-0.2792208,-0.2168831,4.915584,0.5623377);
   Can_p_Q2->SetFillColor(0);
   Can_p_Q2->SetBorderMode(0);
   Can_p_Q2->SetBorderSize(2);
   Can_p_Q2->SetLeftMargin(0.15);
   Can_p_Q2->SetRightMargin(0.08);
   Can_p_Q2->SetTopMargin(0.08);
   Can_p_Q2->SetBottomMargin(0.15);
   Can_p_Q2->SetFrameBorderMode(0);
   Can_p_Q2->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_Q2__1 = new TH2F("HALU_p_vs_Q2__1","",100,0.8,3.8,100,-0.1,0.45);
   HALU_p_vs_Q2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_p_vs_Q2__1->SetLineColor(ci);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_p_vs_Q2__1->GetXaxis()->CenterTitle(true);
   HALU_p_vs_Q2__1->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__1->GetXaxis()->SetLabelSize(0.045);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitleSize(0.06);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitleOffset(0.9);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_Q2__1->GetYaxis()->CenterTitle(true);
   HALU_p_vs_Q2__1->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__1->GetYaxis()->SetLabelSize(0.045);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleSize(0.06);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleOffset(0.9);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__1->Draw("");
   
   Double_t Graph0_fx1001[4] = {
   1.395,
   1.886,
   2.339,
   3.092};
   Double_t Graph0_fy1001[4] = {
   0.1369125,
   0.1529735,
   0.1902217,
   0.1297463};
   Double_t Graph0_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[4] = {
   0.02231351,
   0.02669034,
   0.02997842,
   0.04134271};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,1.2253,3.2617);
   Graph_Graph01001->SetMinimum(0.07522398);
   Graph_Graph01001->SetMaximum(0.2333798);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("p");
   
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
   0.01361147,
   0.01361147,
   0.01693127,
   0.014933,
   0.01559423,
   0.01559423,
   0};
   TGraph *graph = new TGraph(8,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.65,4.85);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(0.01862439);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");

   Double_t _sx1[4] = {
   1.40,
   1.89,
   2.34,
   3.10};
   Double_t _sy1[4] = {
   0.233,
   0.198,
   0.174,
   0.136};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   TLegend *leg = new TLegend(0.5,0.76,0.919,0.9182,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry;
   entry=leg->AddEntry("clas","CLAS (this work)","p");
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Scope","Fucini et al. [x]","l");
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetLineColor(6);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0.8,0,3.8,0);
   line->SetLineStyle(7);
   line->Draw();
   Can_p_Q2->Modified();
   Can_p_Q2->cd();
   Can_p_Q2->SetSelected(Can_p_Q2);
}
