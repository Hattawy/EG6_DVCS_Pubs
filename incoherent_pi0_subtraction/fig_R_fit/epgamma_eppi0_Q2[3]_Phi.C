{
//=========Macro generated from canvas: c1/
//=========  (Fri Dec 18 09:59:47 2015) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "",1,1,700,476);
   c1->Range(-80.8421,0.01578948,424.421,0.5421053);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(18);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,10,0.2620474);
   gre->SetPointError(0,0,0.01249124);
   gre->SetPoint(1,30,0.2338724);
   gre->SetPointError(1,0,0.009671807);
   gre->SetPoint(2,50,0.2185522);
   gre->SetPointError(2,0,0.01138208);
   gre->SetPoint(3,70,0.2140152);
   gre->SetPointError(3,0,0.01316895);
   gre->SetPoint(4,90,0.2124378);
   gre->SetPointError(4,0,0.01501901);
   gre->SetPoint(5,110,0.2120452);
   gre->SetPointError(5,0,0.02382219);
   gre->SetPoint(6,130,0.1842105);
   gre->SetPointError(6,0,0.02872546);
   gre->SetPoint(7,150,0.1983914);
   gre->SetPointError(7,0,0.03333485);
   gre->SetPoint(8,170,0.2159091);
   gre->SetPointError(8,0,0.05129984);
   gre->SetPoint(9,190,0.1782609);
   gre->SetPointError(9,0,0.03959385);
   gre->SetPoint(10,210,0.2048193);
   gre->SetPointError(10,0,0.04166033);
   gre->SetPoint(11,230,0.2358079);
   gre->SetPointError(11,0,0.0337092);
   gre->SetPoint(12,250,0.2073643);
   gre->SetPointError(12,0,0.0206301);
   gre->SetPoint(13,270,0.1983594);
   gre->SetPointError(13,0,0.01757894);
   gre->SetPoint(14,290,0.217405);
   gre->SetPointError(14,0,0.01211796);
   gre->SetPoint(15,310,0.219134);
   gre->SetPointError(15,0,0.009449939);
   gre->SetPoint(16,330,0.2150845);
   gre->SetPointError(16,0,0.01094788);
   gre->SetPoint(17,350,0.2300816);
   gre->SetPointError(17,0,0.01399218);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0,384);
   Graph_Graph10->SetMinimum(0.1);
   Graph_Graph10->SetMaximum(0.5);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph10->GetXaxis()->SetLabelFont(22);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleFont(22);
   Graph_Graph10->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph10->GetYaxis()->SetLabelFont(22);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph10->GetYaxis()->SetTitleFont(22);
   Graph_Graph10->GetZaxis()->SetLabelFont(22);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph10);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4397126,0.9339831,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
