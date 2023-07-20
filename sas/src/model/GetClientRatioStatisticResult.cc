/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/sas/model/GetClientRatioStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetClientRatioStatisticResult::GetClientRatioStatisticResult() :
	ServiceResult()
{}

GetClientRatioStatisticResult::GetClientRatioStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClientRatioStatisticResult::~GetClientRatioStatisticResult()
{}

void GetClientRatioStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clientInstallRatioNode = value["ClientInstallRatio"];
	auto allHistoryItemsNode = clientInstallRatioNode["HistoryItems"]["historyItemsItem"];
	for (auto clientInstallRatioNodeHistoryItemshistoryItemsItem : allHistoryItemsNode)
	{
		ClientInstallRatio::HistoryItemsItem historyItemsItemObject;
		if(!clientInstallRatioNodeHistoryItemshistoryItemsItem["Vendor"].isNull())
			historyItemsItemObject.vendor = std::stol(clientInstallRatioNodeHistoryItemshistoryItemsItem["Vendor"].asString());
		auto allItemsNode = clientInstallRatioNodeHistoryItemshistoryItemsItem["Items"]["historyItem"];
		for (auto clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem : allItemsNode)
		{
			ClientInstallRatio::HistoryItemsItem::HistoryItem itemsObject;
			if(!clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["CalculateTime"].isNull())
				itemsObject.calculateTime = std::stol(clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["CalculateTime"].asString());
			if(!clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["AssetTotalCount"].isNull())
				itemsObject.assetTotalCount = std::stoi(clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["AssetTotalCount"].asString());
			if(!clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["InstallRatio"].isNull())
				itemsObject.installRatio = clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["InstallRatio"].asString();
			if(!clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["InstalledAssetCount"].isNull())
				itemsObject.installedAssetCount = std::stoi(clientInstallRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["InstalledAssetCount"].asString());
			historyItemsItemObject.items.push_back(itemsObject);
		}
		clientInstallRatio_.historyItems.push_back(historyItemsItemObject);
	}
	auto allCurrentItemsNode = clientInstallRatioNode["CurrentItems"]["currentItemsItem"];
	for (auto clientInstallRatioNodeCurrentItemscurrentItemsItem : allCurrentItemsNode)
	{
		ClientInstallRatio::CurrentItemsItem currentItemsItemObject;
		if(!clientInstallRatioNodeCurrentItemscurrentItemsItem["Vendor"].isNull())
			currentItemsItemObject.vendor = std::stol(clientInstallRatioNodeCurrentItemscurrentItemsItem["Vendor"].asString());
		auto allItems1Node = clientInstallRatioNodeCurrentItemscurrentItemsItem["Items"]["itemsItem"];
		for (auto clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem : allItems1Node)
		{
			ClientInstallRatio::CurrentItemsItem::ItemsItem items1Object;
			if(!clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["CalculateTime"].isNull())
				items1Object.calculateTime = std::stol(clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["CalculateTime"].asString());
			if(!clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["AssetTotalCount"].isNull())
				items1Object.assetTotalCount = std::stoi(clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["AssetTotalCount"].asString());
			if(!clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["InstallRatio"].isNull())
				items1Object.installRatio = clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["InstallRatio"].asString();
			if(!clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["InstalledAssetCount"].isNull())
				items1Object.installedAssetCount = std::stoi(clientInstallRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["InstalledAssetCount"].asString());
			currentItemsItemObject.items1.push_back(items1Object);
		}
		clientInstallRatio_.currentItems.push_back(currentItemsItemObject);
	}
	auto clientOnlineRatioNode = value["ClientOnlineRatio"];
	auto allHistoryItems2Node = clientOnlineRatioNode["HistoryItems"]["historyItemsItem"];
	for (auto clientOnlineRatioNodeHistoryItemshistoryItemsItem : allHistoryItems2Node)
	{
		ClientOnlineRatio::HistoryItemsItem4 historyItemsItem4Object;
		if(!clientOnlineRatioNodeHistoryItemshistoryItemsItem["Vendor"].isNull())
			historyItemsItem4Object.vendor = std::stol(clientOnlineRatioNodeHistoryItemshistoryItemsItem["Vendor"].asString());
		auto allItems5Node = clientOnlineRatioNodeHistoryItemshistoryItemsItem["Items"]["historyItem"];
		for (auto clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem : allItems5Node)
		{
			ClientOnlineRatio::HistoryItemsItem4::HistoryItem6 items5Object;
			if(!clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["CalculateTime"].isNull())
				items5Object.calculateTime = std::stol(clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["CalculateTime"].asString());
			if(!clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["AssetInstallCount"].isNull())
				items5Object.assetInstallCount = std::stoi(clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["AssetInstallCount"].asString());
			if(!clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["OnlineRatio"].isNull())
				items5Object.onlineRatio = clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["OnlineRatio"].asString();
			if(!clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["OnlineAssetCount"].isNull())
				items5Object.onlineAssetCount = std::stoi(clientOnlineRatioNodeHistoryItemshistoryItemsItemItemshistoryItem["OnlineAssetCount"].asString());
			historyItemsItem4Object.items5.push_back(items5Object);
		}
		clientOnlineRatio_.historyItems2.push_back(historyItemsItem4Object);
	}
	auto allCurrentItems3Node = clientOnlineRatioNode["CurrentItems"]["currentItemsItem"];
	for (auto clientOnlineRatioNodeCurrentItemscurrentItemsItem : allCurrentItems3Node)
	{
		ClientOnlineRatio::CurrentItemsItem7 currentItemsItem7Object;
		if(!clientOnlineRatioNodeCurrentItemscurrentItemsItem["Vendor"].isNull())
			currentItemsItem7Object.vendor = std::stol(clientOnlineRatioNodeCurrentItemscurrentItemsItem["Vendor"].asString());
		auto allItems8Node = clientOnlineRatioNodeCurrentItemscurrentItemsItem["Items"]["itemsItem"];
		for (auto clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem : allItems8Node)
		{
			ClientOnlineRatio::CurrentItemsItem7::ItemsItem9 items8Object;
			if(!clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["CalculateTime"].isNull())
				items8Object.calculateTime = std::stol(clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["CalculateTime"].asString());
			if(!clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["AssetInstallCount"].isNull())
				items8Object.assetInstallCount = std::stoi(clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["AssetInstallCount"].asString());
			if(!clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["OnlineRatio"].isNull())
				items8Object.onlineRatio = clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["OnlineRatio"].asString();
			if(!clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["OnlineAssetCount"].isNull())
				items8Object.onlineAssetCount = std::stoi(clientOnlineRatioNodeCurrentItemscurrentItemsItemItemsitemsItem["OnlineAssetCount"].asString());
			currentItemsItem7Object.items8.push_back(items8Object);
		}
		clientOnlineRatio_.currentItems3.push_back(currentItemsItem7Object);
	}
	auto allDates = value["Dates"]["dates"];
	for (const auto &item : allDates)
		dates_.push_back(item.asString());

}

GetClientRatioStatisticResult::ClientOnlineRatio GetClientRatioStatisticResult::getClientOnlineRatio()const
{
	return clientOnlineRatio_;
}

std::vector<std::string> GetClientRatioStatisticResult::getDates()const
{
	return dates_;
}

GetClientRatioStatisticResult::ClientInstallRatio GetClientRatioStatisticResult::getClientInstallRatio()const
{
	return clientInstallRatio_;
}

