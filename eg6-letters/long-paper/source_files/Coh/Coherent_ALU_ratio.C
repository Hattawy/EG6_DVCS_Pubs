void Coherent_ALU_ratio()
{
//=========Macro generated from canvas: Can_r/Helium DVCS
//=========  (Wed Jan  8 16:10:15 2020) by ROOT version 6.14/04
   TCanvas *Can_r = new TCanvas("Can_r", "Helium DVCS",63,57,1200,450);
   gStyle->SetOptFit(1);
   Can_r->Range(0,0,1,1);
   Can_r->SetFillColor(0);
   Can_r->SetBorderMode(0);
   Can_r->SetBorderSize(2);
   Can_r->SetLeftMargin(0.22);
   Can_r->SetTopMargin(0.02);
   Can_r->SetBottomMargin(0.2);
   Can_r->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Can_r_1
   TPad *Can_r_1 = new TPad("Can_r_1", "Can_r_1",0.01,0.01,0.3233333,0.99);
   Can_r_1->Draw();
   Can_r_1->cd();
   Can_r_1->Range(-0.3411765,-0.7487179,3.482353,3.994872);
   Can_r_1->SetFillColor(0);
   Can_r_1->SetBorderMode(0);
   Can_r_1->SetBorderSize(2);
   Can_r_1->SetLeftMargin(0.22);
   Can_r_1->SetTopMargin(0.02);
   Can_r_1->SetBottomMargin(0.2);
   Can_r_1->SetFrameBorderMode(0);
   Can_r_1->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_Q2__4 = new TH2F("HALU_RATIO_Q2__4","",100,0.5,3.1,100,0.2,3.9);
   HALU_RATIO_Q2__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_RATIO_Q2__4->SetLineColor(ci);
   HALU_RATIO_Q2__4->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_RATIO_Q2__4->GetXaxis()->CenterTitle(true);
   HALU_RATIO_Q2__4->GetXaxis()->SetNdivisions(205);
   HALU_RATIO_Q2__4->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__4->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__4->GetXaxis()->SetTitleSize(0.14);
   HALU_RATIO_Q2__4->GetXaxis()->SetTitleOffset(1.5);
   HALU_RATIO_Q2__4->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__4->GetYaxis()->SetTitle("A_{LU}^{^{4}He}/A_{LU}^{p}(90^{#circ})");
   HALU_RATIO_Q2__4->GetYaxis()->CenterTitle(true);
   HALU_RATIO_Q2__4->GetYaxis()->SetNdivisions(511);
   HALU_RATIO_Q2__4->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__4->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_Q2__4->GetYaxis()->SetTitleSize(0.14);
   HALU_RATIO_Q2__4->GetYaxis()->SetTitleOffset(1.5);
   HALU_RATIO_Q2__4->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__4->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_Q2__4->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_Q2__4->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_Q2__4->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_Q2__4->Draw("");
   
   Double_t This Work (x_{B} = 0.177_fx1092[3] = {
   1.144,
   1.422,
   1.892};
   Double_t This Work (x_{B} = 0.177_fy1092[3] = {
   1.55242,
   2.13761,
   1.62405};
   Double_t This Work (x_{B} = 0.177_fex1092[3] = {
   0,
   0,
   0};
   Double_t This Work (x_{B} = 0.177_fey1092[3] = {
   0.857011,
   0.431313,
   0.808316};
   TGraphErrors *gre = new TGraphErrors(3,This Work (x_{B} = 0.177_fx1092,This Work (x_{B} = 0.177_fy1092,This Work (x_{B} = 0.177_fex1092,This Work (x_{B} = 0.177_fey1092);
   gre->SetName("This Work (x_{B} = 0.177");
   gre->SetTitle("This Work (x_{B} = 0.177");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092 = new TH1F("Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092","This Work (x_{B} = 0.177",100,1.0692,1.9668);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->SetMinimum(0.5080576);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->SetMaximum(2.756274);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->SetDirectory(0);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->SetLineColor(ci);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetXaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetXaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetXaxis()->SetTitleSize(0.9);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetXaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetYaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetYaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetYaxis()->SetTitleSize(0.06);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetYaxis()->SetTitleOffset(0);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetYaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetZaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetZaxis()->SetLabelSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetZaxis()->SetTitleSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771092->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_This Work (x_{B} = 0.1771092);
   
   gre->Draw("p");
   TLine *line = new TLine(0.5,1,3.1,1);
   line->SetLineStyle(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.45,0.92,0.96,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("This Work (x_{B} = 0.177","CLAS-EG6: x_{B}= 0.18, -t= 0.10 [GeV^{2}]","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.6);
   entry->SetTextFont(42);
   leg->Draw();
   Can_r_1->Modified();
   Can_r->cd();
  
// ------------>Primitives in pad: Can_r_2
   TPad *Can_r_2 = new TPad("Can_r_2", "Can_r_2",0.3433333,0.01,0.6566667,0.99);
   Can_r_2->Draw();
   Can_r_2->cd();
   Can_r_2->Range(-0.295,-0.7487179,0.955,3.994872);
   Can_r_2->SetFillColor(0);
   Can_r_2->SetBorderMode(0);
   Can_r_2->SetBorderSize(2);
   Can_r_2->SetLeftMargin(0.22);
   Can_r_2->SetTopMargin(0.02);
   Can_r_2->SetBottomMargin(0.2);
   Can_r_2->SetFrameBorderMode(0);
   Can_r_2->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_x__5 = new TH2F("HALU_RATIO_x__5","",100,-0.02,0.83,100,0.2,3.9);
   HALU_RATIO_x__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_RATIO_x__5->SetLineColor(ci);
   HALU_RATIO_x__5->GetXaxis()->SetTitle("x_{B}");
   HALU_RATIO_x__5->GetXaxis()->CenterTitle(true);
   HALU_RATIO_x__5->GetXaxis()->SetNdivisions(205);
   HALU_RATIO_x__5->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_x__5->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__5->GetXaxis()->SetTitleSize(0.14);
   HALU_RATIO_x__5->GetXaxis()->SetTitleOffset(1.5);
   HALU_RATIO_x__5->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_x__5->GetYaxis()->SetTitle("A_{LU}^{^{4}He}/A_{LU}^{p} (90^{#circ})");
   HALU_RATIO_x__5->GetYaxis()->CenterTitle(true);
   HALU_RATIO_x__5->GetYaxis()->SetNdivisions(511);
   HALU_RATIO_x__5->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_x__5->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_x__5->GetYaxis()->SetTitleSize(0.14);
   HALU_RATIO_x__5->GetYaxis()->SetTitleOffset(1.5);
   HALU_RATIO_x__5->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_x__5->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_x__5->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_x__5->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_x__5->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_x__5->Draw("");
   
   Double_t This Work (-t = 0.10_fx1093[3] = {
   0.132,
   0.17,
   0.227};
   Double_t This Work (-t = 0.10_fy1093[3] = {
   1.63394,
   1.67078,
   1.78805};
   Double_t This Work (-t = 0.10_fex1093[3] = {
   0,
   0,
   0};
   Double_t This Work (-t = 0.10_fey1093[3] = {
   0.888503,
   0.518536,
   1.23573};
   gre = new TGraphErrors(3,This Work (-t = 0.10_fx1093,This Work (-t = 0.10_fy1093,This Work (-t = 0.10_fex1093,This Work (-t = 0.10_fey1093);
   gre->SetName("This Work (-t = 0.10");
   gre->SetTitle("This Work (-t = 0.10");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_ThissPWorksPoPmItsPeQsP0dO101093 = new TH1F("Graph_ThissPWorksPoPmItsPeQsP0dO101093","This Work (-t = 0.10",100,0.1225,0.2365);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->SetMinimum(0.305174);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->SetMaximum(3.270926);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->SetDirectory(0);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->SetLineColor(ci);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetXaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetXaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetXaxis()->SetTitleSize(0.9);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetXaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetYaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetYaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetYaxis()->SetTitleSize(0.06);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetYaxis()->SetTitleOffset(0);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetYaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetZaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetZaxis()->SetLabelSize(0.035);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetZaxis()->SetTitleSize(0.035);
   Graph_ThissPWorksPoPmItsPeQsP0dO101093->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_This Work (-t = 0.101093);
   
   gre->Draw("p");
   
   Double_t HERMES (-t = 0.018)_fx1094[1] = {
   0.072};
   Double_t HERMES (-t = 0.018)_fy1094[1] = {
   0.91};
   Double_t HERMES (-t = 0.018)_fex1094[1] = {
   0};
   Double_t HERMES (-t = 0.018)_fey1094[1] = {
   0.19};
   gre = new TGraphErrors(1,HERMES (-t = 0.018)_fx1094,HERMES (-t = 0.018)_fy1094,HERMES (-t = 0.018)_fex1094,HERMES (-t = 0.018)_fey1094);
   gre->SetName("HERMES (-t = 0.018)");
   gre->SetTitle("HERMES (-t = 0.018)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_HERMESsPoPmItsPeQsP0dO018cP1094 = new TH1F("Graph_HERMESsPoPmItsPeQsP0dO018cP1094","HERMES (-t = 0.018)",100,0,1.172);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->SetMinimum(0.682);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->SetMaximum(1.138);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->SetDirectory(0);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->SetLineColor(ci);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetXaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetXaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetXaxis()->SetTitleSize(0.9);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetXaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetYaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetYaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetYaxis()->SetTitleSize(0.06);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetYaxis()->SetTitleOffset(0);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetYaxis()->SetTitleFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetZaxis()->SetLabelFont(22);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetZaxis()->SetLabelSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetZaxis()->SetTitleSize(0.035);
   Graph_HERMESsPoPmItsPeQsP0dO018cP1094->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_HERMES (-t = 0.018)1094);
   
   gre->Draw("p");
   
   Double_t Graph0_fx27[16] = {
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
   Double_t Graph0_fy27[16] = {
   1.03844,
   1.11211,
   1.11531,
   1.07369,
   1.0049,
   0.927646,
   0.860616,
   0.822943,
   0.839245,
   0.960647,
   1.34325,
   2.60307,
   8.3076,
   57.7025,
   1542.62,
   1248250};
   TGraph *graph = new TGraph(16,Graph0_fx27,Graph0_fy27);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph027 = new TH1F("Graph_Graph027","Graph",100,0,1.09364);
   Graph_Graph027->SetMinimum(0.7406487);
   Graph_Graph027->SetMaximum(1373075);
   Graph_Graph027->SetDirectory(0);
   Graph_Graph027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph027->SetLineColor(ci);
   Graph_Graph027->GetXaxis()->SetLabelFont(22);
   Graph_Graph027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph027->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph027->GetXaxis()->SetTitleFont(22);
   Graph_Graph027->GetYaxis()->SetLabelFont(22);
   Graph_Graph027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph027->GetYaxis()->SetTitleFont(22);
   Graph_Graph027->GetZaxis()->SetLabelFont(22);
   Graph_Graph027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph027->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph027);
   
   graph->Draw("c");
   
   Double_t Graph1_fx28[16] = {
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
   Double_t Graph1_fy28[16] = {
   1.15609,
   1.21547,
   1.18441,
   1.09922,
   0.993413,
   0.890928,
   0.81447,
   0.790692,
   0.843083,
   1.03601,
   1.57371,
   3.27383,
   10.938,
   77.9969,
   2100.63,
   1703650};
   graph = new TGraph(16,Graph1_fx28,Graph1_fy28);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph128 = new TH1F("Graph_Graph128","Graph",100,0,1.09364);
   Graph_Graph128->SetMinimum(0.7116228);
   Graph_Graph128->SetMaximum(1874015);
   Graph_Graph128->SetDirectory(0);
   Graph_Graph128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph128->SetLineColor(ci);
   Graph_Graph128->GetXaxis()->SetLabelFont(22);
   Graph_Graph128->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph128->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph128->GetXaxis()->SetTitleFont(22);
   Graph_Graph128->GetYaxis()->SetLabelFont(22);
   Graph_Graph128->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph128->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph128->GetYaxis()->SetTitleOffset(0);
   Graph_Graph128->GetYaxis()->SetTitleFont(22);
   Graph_Graph128->GetZaxis()->SetLabelFont(22);
   Graph_Graph128->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph128->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph128->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph128);
   
   graph->Draw("c");
   
   Double_t GS (-t=0.1)_fx1095[8] = {
   0.14,
   0.16,
   0.18,
   0.2,
   0.22,
   0.24,
   0.26,
   0.28};
   Double_t GS (-t=0.1)_fy1095[8] = {
   1.7478,
   1.655,
   1.5601,
   1.5012,
   1.4306,
   1.3943,
   1.3855,
   1.4723};
   Double_t GS (-t=0.1)_fex1095[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t GS (-t=0.1)_fey1095[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(8,GS (-t=0.1)_fx1095,GS (-t=0.1)_fy1095,GS (-t=0.1)_fex1095,GS (-t=0.1)_fey1095);
   gre->SetName("GS (-t=0.1)");
   gre->SetTitle("GS (-t=0.1)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_GSsPoPmIteQ0dO1cP1095 = new TH1F("Graph_GSsPoPmIteQ0dO1cP1095","GS (-t=0.1)",100,0.126,0.294);
   Graph_GSsPoPmIteQ0dO1cP1095->SetMinimum(1.34927);
   Graph_GSsPoPmIteQ0dO1cP1095->SetMaximum(1.78403);
   Graph_GSsPoPmIteQ0dO1cP1095->SetDirectory(0);
   Graph_GSsPoPmIteQ0dO1cP1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GSsPoPmIteQ0dO1cP1095->SetLineColor(ci);
   Graph_GSsPoPmIteQ0dO1cP1095->GetXaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO1cP1095->GetXaxis()->SetLabelSize(0.05);
   Graph_GSsPoPmIteQ0dO1cP1095->GetXaxis()->SetTitleSize(0.9);
   Graph_GSsPoPmIteQ0dO1cP1095->GetXaxis()->SetTitleFont(22);
   Graph_GSsPoPmIteQ0dO1cP1095->GetYaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO1cP1095->GetYaxis()->SetLabelSize(0.05);
   Graph_GSsPoPmIteQ0dO1cP1095->GetYaxis()->SetTitleSize(0.06);
   Graph_GSsPoPmIteQ0dO1cP1095->GetYaxis()->SetTitleOffset(0);
   Graph_GSsPoPmIteQ0dO1cP1095->GetYaxis()->SetTitleFont(22);
   Graph_GSsPoPmIteQ0dO1cP1095->GetZaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO1cP1095->GetZaxis()->SetLabelSize(0.035);
   Graph_GSsPoPmIteQ0dO1cP1095->GetZaxis()->SetTitleSize(0.035);
   Graph_GSsPoPmIteQ0dO1cP1095->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_GS (-t=0.1)1095);
   
   gre->Draw("c");
   
   Double_t GS (-t=0.2)_fx1096[14] = {
   0.14,
   0.16,
   0.18,
   0.2,
   0.22,
   0.24,
   0.26,
   0.28,
   0.3,
   0.32,
   0.34,
   0.36,
   0.38,
   0.4};
   Double_t GS (-t=0.2)_fy1096[14] = {
   1.4312,
   1.3556,
   1.2792,
   1.2317,
   1.1778,
   1.1427,
   1.1124,
   1.0821,
   1.0598,
   1.03,
   1.0104,
   1.008,
   1.0648,
   1.4436};
   Double_t GS (-t=0.2)_fex1096[14] = {
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
   Double_t GS (-t=0.2)_fey1096[14] = {
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
   gre = new TGraphErrors(14,GS (-t=0.2)_fx1096,GS (-t=0.2)_fy1096,GS (-t=0.2)_fex1096,GS (-t=0.2)_fey1096);
   gre->SetName("GS (-t=0.2)");
   gre->SetTitle("GS (-t=0.2)");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_GSsPoPmIteQ0dO2cP1096 = new TH1F("Graph_GSsPoPmIteQ0dO2cP1096","GS (-t=0.2)",100,0.114,0.426);
   Graph_GSsPoPmIteQ0dO2cP1096->SetMinimum(0.96444);
   Graph_GSsPoPmIteQ0dO2cP1096->SetMaximum(1.48716);
   Graph_GSsPoPmIteQ0dO2cP1096->SetDirectory(0);
   Graph_GSsPoPmIteQ0dO2cP1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GSsPoPmIteQ0dO2cP1096->SetLineColor(ci);
   Graph_GSsPoPmIteQ0dO2cP1096->GetXaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO2cP1096->GetXaxis()->SetLabelSize(0.05);
   Graph_GSsPoPmIteQ0dO2cP1096->GetXaxis()->SetTitleSize(0.9);
   Graph_GSsPoPmIteQ0dO2cP1096->GetXaxis()->SetTitleFont(22);
   Graph_GSsPoPmIteQ0dO2cP1096->GetYaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO2cP1096->GetYaxis()->SetLabelSize(0.05);
   Graph_GSsPoPmIteQ0dO2cP1096->GetYaxis()->SetTitleSize(0.06);
   Graph_GSsPoPmIteQ0dO2cP1096->GetYaxis()->SetTitleOffset(0);
   Graph_GSsPoPmIteQ0dO2cP1096->GetYaxis()->SetTitleFont(22);
   Graph_GSsPoPmIteQ0dO2cP1096->GetZaxis()->SetLabelFont(22);
   Graph_GSsPoPmIteQ0dO2cP1096->GetZaxis()->SetLabelSize(0.035);
   Graph_GSsPoPmIteQ0dO2cP1096->GetZaxis()->SetTitleSize(0.035);
   Graph_GSsPoPmIteQ0dO2cP1096->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_GS (-t=0.2)1096);
   
   gre->Draw("c");
   line = new TLine(-0.05,1,0.83,1);
   line->SetLineStyle(4);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.32,0.79,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("This Work (-t = 0.10","CLAS-EG6: -t= 0.10","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.6);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HERMES (-t = 0.018)","HERMES: -t = 0.018","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Off-shell cal.: -t=0.10","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Off-shell cal.: -t=0.20","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GS (-t=0.1)","On-shell cal.: -t = 0.10","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GS (-t=0.2)","On-shell cal.: -t = 0.20","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Can_r_2->Modified();
   Can_r->cd();
  
// ------------>Primitives in pad: Can_r_3
   TPad *Can_r_3 = new TPad("Can_r_3", "Can_r_3",0.6766667,0.01,0.99,0.99);
   Can_r_3->Draw();
   Can_r_3->cd();
   Can_r_3->Range(-0.1914706,-0.7487179,0.5879412,3.994872);
   Can_r_3->SetFillColor(0);
   Can_r_3->SetBorderMode(0);
   Can_r_3->SetBorderSize(2);
   Can_r_3->SetLeftMargin(0.22);
   Can_r_3->SetTopMargin(0.02);
   Can_r_3->SetBottomMargin(0.2);
   Can_r_3->SetFrameBorderMode(0);
   Can_r_3->SetFrameBorderMode(0);
   
   TH2F *HALU_RATIO_t__6 = new TH2F("HALU_RATIO_t__6","",100,-0.02,0.51,100,0.2,3.9);
   HALU_RATIO_t__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_RATIO_t__6->SetLineColor(ci);
   HALU_RATIO_t__6->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_RATIO_t__6->GetXaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetXaxis()->SetNdivisions(205);
   HALU_RATIO_t__6->GetXaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetXaxis()->SetLabelSize(0.05);
   HALU_RATIO_t__6->GetXaxis()->SetTitleSize(0.14);
   HALU_RATIO_t__6->GetXaxis()->SetTitleOffset(1.5);
   HALU_RATIO_t__6->GetXaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->GetYaxis()->SetTitle("A_{LU}^{^{4}He}/A_{LU}^{p} (90^{#circ})");
   HALU_RATIO_t__6->GetYaxis()->CenterTitle(true);
   HALU_RATIO_t__6->GetYaxis()->SetNdivisions(511);
   HALU_RATIO_t__6->GetYaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetYaxis()->SetLabelSize(0.05);
   HALU_RATIO_t__6->GetYaxis()->SetTitleSize(0.14);
   HALU_RATIO_t__6->GetYaxis()->SetTitleOffset(1.5);
   HALU_RATIO_t__6->GetYaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelFont(22);
   HALU_RATIO_t__6->GetZaxis()->SetLabelSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleSize(0.035);
   HALU_RATIO_t__6->GetZaxis()->SetTitleFont(22);
   HALU_RATIO_t__6->Draw("");
   
   Double_t HERMES (x_{B} = 0.072)_fx1097[1] = {
   0.018};
   Double_t HERMES (x_{B} = 0.072)_fy1097[1] = {
   0.91};
   Double_t HERMES (x_{B} = 0.072)_fex1097[1] = {
   0};
   Double_t HERMES (x_{B} = 0.072)_fey1097[1] = {
   0.19};
   gre = new TGraphErrors(1,HERMES (x_{B} = 0.072)_fx1097,HERMES (x_{B} = 0.072)_fy1097,HERMES (x_{B} = 0.072)_fex1097,HERMES (x_{B} = 0.072)_fey1097);
   gre->SetName("HERMES (x_{B} = 0.072)");
   gre->SetTitle("HERMES (x_{B} = 0.072)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097 = new TH1F("Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097","HERMES (x_{B} = 0.072)",100,0,1.118);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->SetMinimum(0.682);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->SetMaximum(1.138);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->SetDirectory(0);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->SetLineColor(ci);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetXaxis()->SetLabelFont(22);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetXaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetXaxis()->SetTitleSize(0.9);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetXaxis()->SetTitleFont(22);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetYaxis()->SetLabelFont(22);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetYaxis()->SetLabelSize(0.05);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetYaxis()->SetTitleSize(0.06);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetYaxis()->SetTitleOffset(0);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetYaxis()->SetTitleFont(22);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetZaxis()->SetLabelFont(22);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetZaxis()->SetLabelSize(0.035);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetZaxis()->SetTitleSize(0.035);
   Graph_HERMESsPoPx_{B}sPeQsP0dO072cP1097->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_HERMES (x_{B} = 0.072)1097);
   
   gre->Draw("p");
   
   Double_t Guzey (x_{B}=0.137)_fx29[25] = {
   0.077,
   0.094,
   0.111,
   0.128,
   0.145,
   0.162,
   0.179,
   0.196,
   0.213,
   0.23,
   0.247,
   0.264,
   0.281,
   0.298,
   0.315,
   0.332,
   0.349,
   0.366,
   0.383,
   0.4,
   0.417,
   0.434,
   0.451,
   0.468,
   0.485};
   Double_t Guzey (x_{B}=0.137)_fy29[25] = {
   1.6778,
   1.5977,
   1.5296,
   1.4705,
   1.4184,
   1.3729,
   1.3324,
   1.2967,
   1.2649,
   1.2364,
   1.2108,
   1.1893,
   1.1702,
   1.1534,
   1.1377,
   1.1235,
   1.1104,
   1.1018,
   1.0931,
   1.0856,
   1.0779,
   1.0707,
   1.0652,
   1.0613,
   1.0581};
   graph = new TGraph(25,Guzey (x_{B}=0.137)_fx29,Guzey (x_{B}=0.137)_fy29);
   graph->SetName("Guzey (x_{B}=0.137)");
   graph->SetTitle("Guzey (x_{B}=0.137)");
   graph->SetFillStyle(1000);
   graph->SetLineColor(6);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_GuzeysPoPx_{B}eQ0dO137cP29 = new TH1F("Graph_GuzeysPoPx_{B}eQ0dO137cP29","Guzey (x_{B}=0.137)",100,0.0362,0.5258);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->SetMinimum(0.99613);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->SetMaximum(1.73977);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->SetDirectory(0);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->SetLineColor(ci);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetXaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetXaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetXaxis()->SetTitleSize(0.9);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetXaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetYaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetYaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetYaxis()->SetTitleSize(0.06);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetYaxis()->SetTitleOffset(0);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetYaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetZaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetZaxis()->SetLabelSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetZaxis()->SetTitleSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO137cP29->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Guzey (x_{B}=0.137)29);
   
   graph->Draw("c");
   
   Double_t Guzey (x_{B}=0.177)_fx30[25] = {
   0.077,
   0.094,
   0.111,
   0.128,
   0.145,
   0.162,
   0.179,
   0.196,
   0.213,
   0.23,
   0.247,
   0.264,
   0.281,
   0.298,
   0.315,
   0.332,
   0.349,
   0.366,
   0.383,
   0.4,
   0.417,
   0.434,
   0.451,
   0.468,
   0.485};
   Double_t Guzey (x_{B}=0.177)_fy30[25] = {
   1.8461,
   1.78,
   1.7159,
   1.654,
   1.5949,
   1.5415,
   1.4916,
   1.4448,
   1.3998,
   1.3572,
   1.3173,
   1.2844,
   1.2527,
   1.2235,
   1.195,
   1.1681,
   1.1429,
   1.1237,
   1.1048,
   1.0872,
   1.0694,
   1.0524,
   1.0382,
   1.026,
   1.0147};
   graph = new TGraph(25,Guzey (x_{B}=0.177)_fx30,Guzey (x_{B}=0.177)_fy30);
   graph->SetName("Guzey (x_{B}=0.177)");
   graph->SetTitle("Guzey (x_{B}=0.177)");
   graph->SetFillColor(28);
   graph->SetFillStyle(1000);
   graph->SetLineColor(28);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_GuzeysPoPx_{B}eQ0dO177cP30 = new TH1F("Graph_GuzeysPoPx_{B}eQ0dO177cP30","Guzey (x_{B}=0.177)",100,0.0362,0.5258);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->SetMinimum(0.93156);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->SetMaximum(1.92924);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->SetDirectory(0);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->SetLineColor(ci);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetXaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetXaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetXaxis()->SetTitleSize(0.9);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetXaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetYaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetYaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetYaxis()->SetTitleSize(0.06);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetYaxis()->SetTitleOffset(0);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetYaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetZaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetZaxis()->SetLabelSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetZaxis()->SetTitleSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO177cP30->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Guzey (x_{B}=0.177)30);
   
   graph->Draw("c");
   
   Double_t Guzey (x_{B}=0.177)_fx31[25] = {
   0.077,
   0.094,
   0.111,
   0.128,
   0.145,
   0.162,
   0.179,
   0.196,
   0.213,
   0.23,
   0.247,
   0.264,
   0.281,
   0.298,
   0.315,
   0.332,
   0.349,
   0.366,
   0.383,
   0.4,
   0.417,
   0.434,
   0.451,
   0.468,
   0.485};
   Double_t Guzey (x_{B}=0.177)_fy31[25] = {
   1.7699,
   1.4384,
   1.3341,
   1.2712,
   1.2253,
   1.1892,
   1.16,
   1.1363,
   1.1166,
   1.1001,
   1.0861,
   1.0753,
   1.0663,
   1.0589,
   1.0524,
   1.0469,
   1.0423,
   1.0403,
   1.0387,
   1.0377,
   1.0364,
   1.0355,
   1.0357,
   1.037,
   1.0387};
   graph = new TGraph(25,Guzey (x_{B}=0.177)_fx31,Guzey (x_{B}=0.177)_fy31);
   graph->SetName("Guzey (x_{B}=0.177)");
   graph->SetTitle("Guzey (x_{B}=0.177)");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_GuzeysPoPx_{B}eQ0dO177cP31 = new TH1F("Graph_GuzeysPoPx_{B}eQ0dO177cP31","Guzey (x_{B}=0.177)",100,0.0362,0.5258);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->SetMinimum(0.96206);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->SetMaximum(1.84334);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->SetDirectory(0);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->SetLineColor(ci);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetXaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetXaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetXaxis()->SetTitleSize(0.9);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetXaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetYaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetYaxis()->SetLabelSize(0.05);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetYaxis()->SetTitleSize(0.06);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetYaxis()->SetTitleOffset(0);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetYaxis()->SetTitleFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetZaxis()->SetLabelFont(22);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetZaxis()->SetLabelSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetZaxis()->SetTitleSize(0.035);
   Graph_GuzeysPoPx_{B}eQ0dO177cP31->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Guzey (x_{B}=0.177)31);
   
   graph->Draw("c");
   
   Double_t LT (x_{B}=0.137)_fx32[16] = {
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
   Double_t LT (x_{B}=0.137)_fy32[16] = {
   1.06064,
   1.06662,
   1.07201,
   1.07401,
   1.07369,
   1.07567,
   1.08403,
   1.09922,
   1.11897,
   1.13984,
   1.15933,
   1.17837,
   1.19453,
   1.20748,
   1.21789,
   1.22326};
   graph = new TGraph(16,LT (x_{B}=0.137)_fx32,LT (x_{B}=0.137)_fy32);
   graph->SetName("LT (x_{B}=0.137)");
   graph->SetTitle("LT (x_{B}=0.137)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_LTsPoPx_{B}eQ0dO137cP32 = new TH1F("Graph_LTsPoPx_{B}eQ0dO137cP32","LT (x_{B}=0.137)",100,0,0.54688);
   Graph_LTsPoPx_{B}eQ0dO137cP32->SetMinimum(1.044378);
   Graph_LTsPoPx_{B}eQ0dO137cP32->SetMaximum(1.239522);
   Graph_LTsPoPx_{B}eQ0dO137cP32->SetDirectory(0);
   Graph_LTsPoPx_{B}eQ0dO137cP32->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_LTsPoPx_{B}eQ0dO137cP32->SetLineColor(ci);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetXaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetXaxis()->SetLabelSize(0.05);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetXaxis()->SetTitleSize(0.9);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetXaxis()->SetTitleFont(22);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetYaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetYaxis()->SetLabelSize(0.05);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetYaxis()->SetTitleSize(0.06);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetYaxis()->SetTitleOffset(0);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetYaxis()->SetTitleFont(22);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetZaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetZaxis()->SetLabelSize(0.035);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetZaxis()->SetTitleSize(0.035);
   Graph_LTsPoPx_{B}eQ0dO137cP32->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_LT (x_{B}=0.137)32);
   
   graph->Draw("c");
   
   Double_t LT (x_{B}=0.307)_fx33[16] = {
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
   Double_t LT (x_{B}=0.307)_fy33[16] = {
   0.909493,
   0.896561,
   0.882353,
   0.870668,
   0.860616,
   0.847944,
   0.833209,
   0.81447,
   0.798337,
   0.782492,
   0.768573,
   0.756931,
   0.746667,
   0.739485,
   0.734579,
   0.731844};
   graph = new TGraph(16,LT (x_{B}=0.307)_fx33,LT (x_{B}=0.307)_fy33);
   graph->SetName("LT (x_{B}=0.307)");
   graph->SetTitle("LT (x_{B}=0.307)");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_LTsPoPx_{B}eQ0dO307cP33 = new TH1F("Graph_LTsPoPx_{B}eQ0dO307cP33","LT (x_{B}=0.307)",100,0,0.54688);
   Graph_LTsPoPx_{B}eQ0dO307cP33->SetMinimum(0.7140791);
   Graph_LTsPoPx_{B}eQ0dO307cP33->SetMaximum(0.9272579);
   Graph_LTsPoPx_{B}eQ0dO307cP33->SetDirectory(0);
   Graph_LTsPoPx_{B}eQ0dO307cP33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_LTsPoPx_{B}eQ0dO307cP33->SetLineColor(ci);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetXaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetXaxis()->SetLabelSize(0.05);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetXaxis()->SetTitleSize(0.9);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetXaxis()->SetTitleFont(22);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetYaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetYaxis()->SetLabelSize(0.05);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetYaxis()->SetTitleSize(0.06);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetYaxis()->SetTitleOffset(0);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetYaxis()->SetTitleFont(22);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetZaxis()->SetLabelFont(22);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetZaxis()->SetLabelSize(0.035);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetZaxis()->SetTitleSize(0.035);
   Graph_LTsPoPx_{B}eQ0dO307cP33->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_LT (x_{B}=0.307)33);
   
   graph->Draw("c");
   
   Double_t This Work (x_{B} = 0.177_fx1098[1] = {
   0.1};
   Double_t This Work (x_{B} = 0.177_fy1098[1] = {
   2.214};
   Double_t This Work (x_{B} = 0.177_fex1098[1] = {
   0};
   Double_t This Work (x_{B} = 0.177_fey1098[1] = {
   0.515789};
   gre = new TGraphErrors(1,This Work (x_{B} = 0.177_fx1098,This Work (x_{B} = 0.177_fy1098,This Work (x_{B} = 0.177_fex1098,This Work (x_{B} = 0.177_fey1098);
   gre->SetName("This Work (x_{B} = 0.177");
   gre->SetTitle("This Work (x_{B} = 0.177");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098 = new TH1F("Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098","This Work (x_{B} = 0.177",100,0,1.2);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->SetMinimum(1.595053);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->SetMaximum(2.832947);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->SetDirectory(0);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->SetLineColor(ci);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetXaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetXaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetXaxis()->SetTitleSize(0.9);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetXaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetYaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetYaxis()->SetLabelSize(0.05);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetYaxis()->SetTitleSize(0.06);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetYaxis()->SetTitleOffset(0);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetYaxis()->SetTitleFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetZaxis()->SetLabelFont(22);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetZaxis()->SetLabelSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetZaxis()->SetTitleSize(0.035);
   Graph_ThissPWorksPoPx_{B}sPeQsP0dO1771098->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_This Work (x_{B} = 0.1771098);
   
   gre->Draw("p");
   line = new TLine(-0.02,1,0.5,1);
   line->SetLineStyle(4);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.26,0.75,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("This Work (x_{B} = 0.177","CLAS-EG6: <x_{B}> = 0.177","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.6);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HERMES (x_{B} = 0.072)","HERMES: <x_{B}> = 0.072","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("LT (x_{B}=0.137)","Off-shell cal.: x_{B}=0.137","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("LT (x_{B}=0.307)","Off-shell cal.: x_{B}=0.307","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Guzey (x_{B}=0.137)","On-shell cal.: x_{B} = 0.137","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Guzey (x_{B}=0.177)","On-shell cal.: x_{B} = 0.177","L");
   entry->SetLineColor(28);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Guzey (x_{B}=0.177)","On-shell cal.: x_{B} = 0.25","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Can_r_3->Modified();
   Can_r->cd();
   Can_r->Modified();
   Can_r->cd();
   Can_r->SetSelected(Can_r);
}
