void ALU_90_p_vs_x_shortscenrario()
{
//=========Macro generated from canvas: Can_p_x/DVCS Helium BoNuS
//=========  (Thu May 23 14:35:04 2019) by ROOT version 6.14/04
   TCanvas *Can_p_x = new TCanvas("Can_p_x", "DVCS Helium BoNuS",63,57,600,450);
   gStyle->SetOptFit(1);
   Can_p_x->SetHighLightColor(2);
   Can_p_x->Range(-0.1363636,-0.2168831,0.7727273,0.5623377);
   Can_p_x->SetFillColor(0);
   Can_p_x->SetBorderMode(0);
   Can_p_x->SetBorderSize(2);
   Can_p_x->SetLeftMargin(0.15);
   Can_p_x->SetRightMargin(0.08);
   Can_p_x->SetTopMargin(0.08);
   Can_p_x->SetBottomMargin(0.15);
   Can_p_x->SetFrameBorderMode(0);
   Can_p_x->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_x__3 = new TH2F("HALU_p_vs_x__3","",100,0,0.55,100,-0.1,0.45);
   HALU_p_vs_x__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_p_vs_x__3->SetLineColor(ci);
   HALU_p_vs_x__3->GetXaxis()->SetTitle("x_{B}");
   HALU_p_vs_x__3->GetXaxis()->CenterTitle(true);
   HALU_p_vs_x__3->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_x__3->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_x__3->GetXaxis()->SetLabelSize(0.045);
   HALU_p_vs_x__3->GetXaxis()->SetTitleSize(0.06);
   HALU_p_vs_x__3->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_x__3->GetXaxis()->SetTitleOffset(0.9);
   HALU_p_vs_x__3->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_x__3->GetYaxis()->CenterTitle(true);
   HALU_p_vs_x__3->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_x__3->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_x__3->GetYaxis()->SetLabelSize(0.045);
   HALU_p_vs_x__3->GetYaxis()->SetTitleSize(0.06);
   HALU_p_vs_x__3->GetYaxis()->SetTitleOffset(0.9);
   HALU_p_vs_x__3->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_x__3->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_x__3->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_x__3->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_x__3->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_x__3->Draw("");
   
   Double_t Graph0_fx1003[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1003[4] = {
   0.1173831,
   0.1772283,
   0.1777536,
   0.1603706};
   Double_t Graph0_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[4] = {
   0.02119542,
   0.02375443,
   0.03084218,
   0.04804572};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<-t>= 0.506, <Q^{2}>= 2.180)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","This Work (<-t>= 0.506, <Q^{2}>= 2.180)",100,0.1392,0.4128);
   Graph_Graph01003->SetMinimum(0.08494681);
   Graph_Graph01003->SetMaximum(0.2198366);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetLabelFont(22);
   Graph_Graph01003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01003->GetXaxis()->SetTitleFont(22);
   Graph_Graph01003->GetYaxis()->SetLabelFont(22);
   Graph_Graph01003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01003->GetYaxis()->SetTitleFont(22);
   Graph_Graph01003->GetZaxis()->SetLabelFont(22);
   Graph_Graph01003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("p");
   
   Double_t _fx3[8] = {
   0.1,
   0.1,
   0.162,
   0.227,
   0.287,
   0.39,
   0.55,
   0.55};
   Double_t _fy3[8] = {
   0,
   0.01180498,
   0.01180498,
   0.01831726,
   0.01537348,
   0.01447262,
   0.01447262,
   0};
   TGraph *graph = new TGraph(8,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.055,0.595);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(0.02014898);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(22);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(22);
   Graph_Graph3->GetYaxis()->SetLabelFont(22);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3->GetYaxis()->SetTitleFont(22);
   Graph_Graph3->GetZaxis()->SetLabelFont(22);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("f");
   
   Double_t Graph1_fx4[16] = {
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
   Double_t Graph1_fy4[16] = {
   0.211805,
   0.226428,
   0.224055,
   0.199169,
   0.136111,
   0.0770942,
   0.0607636,
   0.0452097,
   0.0324596,
   0.0233797,
   0.0181954,
   0.0176105,
   0.027575,
   0.106062,
   1.9227,
   1276.89};
   graph = new TGraph(16,Graph1_fx4,Graph1_fy4);
   graph->SetName("Graph1");
   graph->SetTitle("LT (-t=0.095, Q^{2}= 1.2)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","LT (-t=0.095, Q^{2}= 1.2)",100,0,1.09364);
   Graph_Graph14->SetMinimum(0.01584945);
   Graph_Graph14->SetMaximum(1404.577);
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
   
   graph->Draw("c");
   
   Double_t _sx1[4] = {
   0.163,
   0.225,
   0.283,
   0.389};
   Double_t _sy1[4] = {
   0.199,
   0.178,
   0.169,
   0.149};
   TGraph *graphS = new TGraph(4,_sx1,_sy1);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   Double_t Graph2_fx5[16] = {
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
   Double_t Graph2_fy5[16] = {
   0.322607,
   0.336461,
   0.324975,
   0.29498,
   0.251795,
   0.201831,
   0.149847,
   0.0944183,
   0.026507,
   0.0186697,
   0.0142994,
   0.0137004,
   0.0212789,
   0.0820404,
   1.47835,
   980.425};
   graph = new TGraph(16,Graph2_fx5,Graph2_fy5);
   graph->SetName("Graph2");
   graph->SetTitle("LT (-t=0.329, Q^{2}= 2.1)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","LT (-t=0.329, Q^{2}= 2.1)",100,0,1.09364);
   Graph_Graph25->SetMinimum(0.01233036);
   Graph_Graph25->SetMaximum(1078.466);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(22);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph25->GetXaxis()->SetTitleFont(22);
   Graph_Graph25->GetYaxis()->SetLabelFont(22);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetYaxis()->SetTitleOffset(0);
   Graph_Graph25->GetYaxis()->SetTitleFont(22);
   Graph_Graph25->GetZaxis()->SetLabelFont(22);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("c");
   TLine *line = new TLine(0,0,0.55,0);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.4,0.7,0.919,0.9182,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","CLAS (This work)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Liuti et al. (low -t) [x]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Liuti et al. (high -t) [x]","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GraphS","Fucini et al. [x]","L");
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetLineColor(6);
   entry->SetTextFont(42);
   leg->Draw();
   Can_p_x->Modified();
   Can_p_x->cd();
   Can_p_x->SetSelected(Can_p_x);
}
