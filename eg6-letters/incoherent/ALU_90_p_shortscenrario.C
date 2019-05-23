void ALU_90_p_shortscenrario()
{
//=========Macro generated from canvas: Cann/
//=========  (Thu May 23 15:02:43 2019) by ROOT version 6.14/04
   TCanvas *Cann = new TCanvas("Cann", "",0,0,1000,400);
   gStyle->SetOptFit(1);
   Cann->Range(0,0,1,1);
   Cann->SetFillColor(0);
   Cann->SetBorderMode(0);
   Cann->SetBorderSize(2);
   Cann->SetLeftMargin(0.08527131);
   Cann->SetRightMargin(0.02680798);
   Cann->SetBottomMargin(0.255814);
   Cann->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Cann_1
   TPad *Cann_1 = new TPad("Cann_1", "_1",0,0,0.3812449,0.9029345);
   Cann_1->Draw();
   Cann_1->cd();
   Cann_1->Range(-0.875,-0.30625,4.5,0.5);
   Cann_1->SetFillColor(0);
   Cann_1->SetBorderMode(0);
   Cann_1->SetBorderSize(2);
   Cann_1->SetLeftMargin(0.255814);
   Cann_1->SetRightMargin(0);
   Cann_1->SetTopMargin(0);
   Cann_1->SetBottomMargin(0.255814);
   Cann_1->SetFrameBorderMode(0);
   Cann_1->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_Q2__3 = new TH2F("HALU_p_vs_Q2__3","",100,0.5,4.5,100,-0.1,0.5);
   HALU_p_vs_Q2__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_p_vs_Q2__3->SetLineColor(ci);
   HALU_p_vs_Q2__3->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_p_vs_Q2__3->GetXaxis()->CenterTitle(true);
   HALU_p_vs_Q2__3->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_Q2__3->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__3->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_Q2__3->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_Q2__3->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__3->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_Q2__3->GetYaxis()->CenterTitle(true);
   HALU_p_vs_Q2__3->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_Q2__3->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__3->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_Q2__3->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_Q2__3->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_Q2__3->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__3->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__3->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_Q2__3->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_Q2__3->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__3->Draw("");
   
   Double_t Graph0_fx1004[4] = {
   1.395,
   1.886,
   2.339,
   3.092};
   Double_t Graph0_fy1004[4] = {
   0.1369125,
   0.1529735,
   0.1902217,
   0.1297463};
   Double_t Graph0_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[4] = {
   0.02231351,
   0.02669034,
   0.02997842,
   0.04134271};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","Graph",100,1.2253,3.2617);
   Graph_Graph01004->SetMinimum(0.07522398);
   Graph_Graph01004->SetMaximum(0.2333798);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetLabelFont(22);
   Graph_Graph01004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01004->GetXaxis()->SetTitleFont(22);
   Graph_Graph01004->GetYaxis()->SetLabelFont(22);
   Graph_Graph01004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01004->GetYaxis()->SetTitleFont(22);
   Graph_Graph01004->GetZaxis()->SetLabelFont(22);
   Graph_Graph01004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01004->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("p");
   
   Double_t _fx7[8] = {
   1,
   1,
   1.395,
   1.886,
   2.338,
   3.098,
   4.5,
   4.5};
   Double_t _fy7[8] = {
   0,
   0.01361147,
   0.01361147,
   0.01693127,
   0.014933,
   0.01559423,
   0.01559423,
   0};
   TGraph *graph = new TGraph(8,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.65,4.85);
   Graph_Graph7->SetMinimum(0);
   Graph_Graph7->SetMaximum(0.01862439);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(22);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(22);
   Graph_Graph7->GetYaxis()->SetLabelFont(22);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(0);
   Graph_Graph7->GetYaxis()->SetTitleFont(22);
   Graph_Graph7->GetZaxis()->SetLabelFont(22);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("f");
   
   TLegend *leg = new TLegend(0.55,0.88,0.99,0.99,NULL,"brNDC");
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
   TLine *line = new TLine(0.5,0,4.5,0);
   line->SetLineStyle(7);
   line->Draw();
   Cann_1->Modified();
   Cann->cd();
  
// ------------>Primitives in pad: Cann_2
   TPad *Cann_2 = new TPad("Cann_2", "_2",0.3812449,0,0.6772185,0.9029345);
   Cann_2->Draw();
   Cann_2->cd();
   Cann_2->Range(-0.02,-0.30625,0.7,0.5);
   Cann_2->SetFillColor(0);
   Cann_2->SetBorderMode(0);
   Cann_2->SetBorderSize(2);
   Cann_2->SetLeftMargin(0);
   Cann_2->SetRightMargin(0);
   Cann_2->SetTopMargin(0);
   Cann_2->SetBottomMargin(0.255814);
   Cann_2->SetFrameBorderMode(0);
   Cann_2->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_x__4 = new TH2F("HALU_p_vs_x__4","",100,-0.02,0.7,100,-0.1,0.5);
   HALU_p_vs_x__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_p_vs_x__4->SetLineColor(ci);
   HALU_p_vs_x__4->GetXaxis()->SetTitle("x_{B}");
   HALU_p_vs_x__4->GetXaxis()->CenterTitle(true);
   HALU_p_vs_x__4->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_x__4->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_x__4->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_x__4->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_x__4->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_x__4->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_x__4->GetYaxis()->CenterTitle(true);
   HALU_p_vs_x__4->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_x__4->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_x__4->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_x__4->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_x__4->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_x__4->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_x__4->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_x__4->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_x__4->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_x__4->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_x__4->Draw("");
   
   Double_t Graph0_fx1005[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1005[4] = {
   0.1173831,
   0.1772283,
   0.1777536,
   0.1603706};
   Double_t Graph0_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1005[4] = {
   0.02119542,
   0.02375443,
   0.03084218,
   0.04804572};
   gre = new TGraphErrors(4,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<-t>= 0.506, <Q^{2}>= 2.180)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","This Work (<-t>= 0.506, <Q^{2}>= 2.180)",100,0.1392,0.4128);
   Graph_Graph01005->SetMinimum(0.08494681);
   Graph_Graph01005->SetMaximum(0.2198366);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetLabelFont(22);
   Graph_Graph01005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01005->GetXaxis()->SetTitleFont(22);
   Graph_Graph01005->GetYaxis()->SetLabelFont(22);
   Graph_Graph01005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01005->GetYaxis()->SetTitleFont(22);
   Graph_Graph01005->GetZaxis()->SetLabelFont(22);
   Graph_Graph01005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01005->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("p");
   
   Double_t _fx8[8] = {
   0.1,
   0.1,
   0.162,
   0.227,
   0.287,
   0.39,
   0.55,
   0.55};
   Double_t _fy8[8] = {
   0,
   0.01180498,
   0.01180498,
   0.01831726,
   0.01537348,
   0.01447262,
   0.01447262,
   0};
   graph = new TGraph(8,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,0.055,0.595);
   Graph_Graph8->SetMinimum(0);
   Graph_Graph8->SetMaximum(0.02014898);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(22);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(22);
   Graph_Graph8->GetYaxis()->SetLabelFont(22);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(0);
   Graph_Graph8->GetYaxis()->SetTitleFont(22);
   Graph_Graph8->GetZaxis()->SetLabelFont(22);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("f");
   
   Double_t Graph1_fx9[16] = {
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
   Double_t Graph1_fy9[16] = {
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
   graph = new TGraph(16,Graph1_fx9,Graph1_fy9);
   graph->SetName("Graph1");
   graph->SetTitle("LT (-t=0.095, Q^{2}= 1.2)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","LT (-t=0.095, Q^{2}= 1.2)",100,0,1.09364);
   Graph_Graph19->SetMinimum(0.01584945);
   Graph_Graph19->SetMaximum(1404.577);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(22);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph19->GetXaxis()->SetTitleFont(22);
   Graph_Graph19->GetYaxis()->SetLabelFont(22);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph19->GetYaxis()->SetTitleOffset(0);
   Graph_Graph19->GetYaxis()->SetTitleFont(22);
   Graph_Graph19->GetZaxis()->SetLabelFont(22);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("c");
   
   Double_t Graph2_fx10[16] = {
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
   Double_t Graph2_fy10[16] = {
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
   graph = new TGraph(16,Graph2_fx10,Graph2_fy10);
   graph->SetName("Graph2");
   graph->SetTitle("LT (-t=0.329, Q^{2}= 2.1)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","LT (-t=0.329, Q^{2}= 2.1)",100,0,1.09364);
   Graph_Graph210->SetMinimum(0.01233036);
   Graph_Graph210->SetMaximum(1078.466);
   Graph_Graph210->SetDirectory(0);
   Graph_Graph210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph210->SetLineColor(ci);
   Graph_Graph210->GetXaxis()->SetLabelFont(22);
   Graph_Graph210->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph210->GetXaxis()->SetTitleFont(22);
   Graph_Graph210->GetYaxis()->SetLabelFont(22);
   Graph_Graph210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph210->GetYaxis()->SetTitleOffset(0);
   Graph_Graph210->GetYaxis()->SetTitleFont(22);
   Graph_Graph210->GetZaxis()->SetLabelFont(22);
   Graph_Graph210->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph210->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph210->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph210);
   
   graph->Draw("c");
   line = new TLine(0,0,0.7,0);
   line->SetLineStyle(7);
   line->Draw();
   
   leg = new TLegend(0.35,0.7,0.99,0.99,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","-t= 0.51, Q^{2}= 2.2","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","-t=0.10, Q^{2}= 1.2","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","-t=0.33, Q^{2}= 2.1","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Cann_2->Modified();
   Cann->cd();
  
// ------------>Primitives in pad: Cann_3
   TPad *Cann_3 = new TPad("Cann_3", "_3",0.6772185,0,0.973192,0.9029345);
   Cann_3->Draw();
   Cann_3->cd();
   Cann_3->Range(-0.03,-0.30625,1.2,0.5);
   Cann_3->SetFillColor(0);
   Cann_3->SetBorderMode(0);
   Cann_3->SetBorderSize(2);
   Cann_3->SetLeftMargin(0);
   Cann_3->SetRightMargin(0);
   Cann_3->SetTopMargin(0);
   Cann_3->SetBottomMargin(0.255814);
   Cann_3->SetFrameBorderMode(0);
   Cann_3->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_t__5 = new TH2F("HALU_p_vs_t__5","",100,-0.03,1.2,100,-0.1,0.5);
   HALU_p_vs_t__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_p_vs_t__5->SetLineColor(ci);
   HALU_p_vs_t__5->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_p_vs_t__5->GetXaxis()->CenterTitle(true);
   HALU_p_vs_t__5->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_t__5->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_t__5->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_t__5->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_t__5->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_t__5->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_t__5->GetYaxis()->CenterTitle(true);
   HALU_p_vs_t__5->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_t__5->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_t__5->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_t__5->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_t__5->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_t__5->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_t__5->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_t__5->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_t__5->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_t__5->GetZaxis()->SetTitleFont(22);
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
   gre = new TGraphErrors(4,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)",100,0.049,1.177);
   Graph_Graph01006->SetMinimum(0.06442723);
   Graph_Graph01006->SetMaximum(0.2160666);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetLabelFont(22);
   Graph_Graph01006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01006->GetXaxis()->SetTitleFont(22);
   Graph_Graph01006->GetYaxis()->SetLabelFont(22);
   Graph_Graph01006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01006->GetYaxis()->SetTitleFont(22);
   Graph_Graph01006->GetZaxis()->SetLabelFont(22);
   Graph_Graph01006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01006->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01006);
   
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
   graph = new TGraph(8,_fx11,_fy11);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,0,1.314);
   Graph_Graph11->SetMinimum(0);
   Graph_Graph11->SetMaximum(0.02689398);
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
   Graph_Graph11->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11->GetYaxis()->SetTitleFont(22);
   Graph_Graph11->GetZaxis()->SetLabelFont(22);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("f");
   
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
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11007 = new TH1F("Graph_Graph11007","Graph",100,0.1793,0.4397);
   Graph_Graph11007->SetMinimum(-0.3258);
   Graph_Graph11007->SetMaximum(0.3078);
   Graph_Graph11007->SetDirectory(0);
   Graph_Graph11007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11007->SetLineColor(ci);
   Graph_Graph11007->GetXaxis()->SetLabelFont(22);
   Graph_Graph11007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11007->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11007->GetXaxis()->SetTitleFont(22);
   Graph_Graph11007->GetYaxis()->SetLabelFont(22);
   Graph_Graph11007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11007->GetYaxis()->SetTitleFont(22);
   Graph_Graph11007->GetZaxis()->SetLabelFont(22);
   Graph_Graph11007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11007->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11007);
   
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
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(4);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph21008 = new TH1F("Graph_Graph21008","Graph",100,0.0204,0.0996);
   Graph_Graph21008->SetMinimum(0.1015);
   Graph_Graph21008->SetMaximum(0.4555);
   Graph_Graph21008->SetDirectory(0);
   Graph_Graph21008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21008->SetLineColor(ci);
   Graph_Graph21008->GetXaxis()->SetLabelFont(22);
   Graph_Graph21008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21008->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph21008->GetXaxis()->SetTitleFont(22);
   Graph_Graph21008->GetYaxis()->SetLabelFont(22);
   Graph_Graph21008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph21008->GetYaxis()->SetTitleFont(22);
   Graph_Graph21008->GetZaxis()->SetLabelFont(22);
   Graph_Graph21008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21008->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph21008);
   
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
   graph->SetLineWidth(3);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph312 = new TH1F("Graph_Graph312","LT (x_{B}=0.132, Q^{2}= 1.2)",100,0,0.54688);
   Graph_Graph312->SetMinimum(0.07948045);
   Graph_Graph312->SetMaximum(0.319481);
   Graph_Graph312->SetDirectory(0);
   Graph_Graph312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph312->SetLineColor(ci);
   Graph_Graph312->GetXaxis()->SetLabelFont(22);
   Graph_Graph312->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph312->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph312->GetXaxis()->SetTitleFont(22);
   Graph_Graph312->GetYaxis()->SetLabelFont(22);
   Graph_Graph312->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph312->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph312->GetYaxis()->SetTitleOffset(0);
   Graph_Graph312->GetYaxis()->SetTitleFont(22);
   Graph_Graph312->GetZaxis()->SetLabelFont(22);
   Graph_Graph312->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph312->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph312->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph312);
   
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
   gre->SetLineWidth(3);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph41009 = new TH1F("Graph_Graph41009","LT (x_{B}=0.238, Q^{2}= 2.1)",100,0,0.54688);
   Graph_Graph41009->SetMinimum(0.07461739);
   Graph_Graph41009->SetMaximum(0.2738475);
   Graph_Graph41009->SetDirectory(0);
   Graph_Graph41009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41009->SetLineColor(ci);
   Graph_Graph41009->GetXaxis()->SetLabelFont(22);
   Graph_Graph41009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph41009->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph41009->GetXaxis()->SetTitleFont(22);
   Graph_Graph41009->GetYaxis()->SetLabelFont(22);
   Graph_Graph41009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph41009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph41009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph41009->GetYaxis()->SetTitleFont(22);
   Graph_Graph41009->GetZaxis()->SetLabelFont(22);
   Graph_Graph41009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph41009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph41009->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph41009);
   
   gre->Draw("c");
   line = new TLine(0,0,1.2,0);
   line->SetLineStyle(7);
   line->Draw();
   
   leg = new TLegend(0.45,0.62,0.99,0.99,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","x_{B}=0.27, Q^{2}= 2.2","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","x_{B}=0.11, Q^{2}= 2.8","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","x_{B}=0.11, Q^{2}= 2.8","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","x_{B}=0.13, Q^{2}= 1.2","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","x_{B}=0.24, Q^{2}= 2.1","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Cann_3->Modified();
   Cann->cd();
   Cann->Modified();
   Cann->cd();
   Cann->SetSelected(Cann);
}
