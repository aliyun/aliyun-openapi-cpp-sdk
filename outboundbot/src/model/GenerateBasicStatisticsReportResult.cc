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

#include <alibabacloud/outboundbot/model/GenerateBasicStatisticsReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GenerateBasicStatisticsReportResult::GenerateBasicStatisticsReportResult() :
	ServiceResult()
{}

GenerateBasicStatisticsReportResult::GenerateBasicStatisticsReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateBasicStatisticsReportResult::~GenerateBasicStatisticsReportResult()
{}

void GenerateBasicStatisticsReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto basicStatisticsReportNode = value["BasicStatisticsReport"];
	auto allItemsNode = basicStatisticsReportNode["Items"]["BasicStatisticsReportItem"];
	for (auto basicStatisticsReportNodeItemsBasicStatisticsReportItem : allItemsNode)
	{
		BasicStatisticsReport::BasicStatisticsReportItem basicStatisticsReportItemObject;
		if(!basicStatisticsReportNodeItemsBasicStatisticsReportItem["Title"].isNull())
			basicStatisticsReportItemObject.title = basicStatisticsReportNodeItemsBasicStatisticsReportItem["Title"].asString();
		if(!basicStatisticsReportNodeItemsBasicStatisticsReportItem["TotalCount"].isNull())
			basicStatisticsReportItemObject.totalCount = std::stoi(basicStatisticsReportNodeItemsBasicStatisticsReportItem["TotalCount"].asString());
		if(!basicStatisticsReportNodeItemsBasicStatisticsReportItem["GraphType"].isNull())
			basicStatisticsReportItemObject.graphType = basicStatisticsReportNodeItemsBasicStatisticsReportItem["GraphType"].asString();
		auto allSubItemsNode = allItemsNode["SubItems"]["BasicStatisticsReportSubItem"];
		for (auto allItemsNodeSubItemsBasicStatisticsReportSubItem : allSubItemsNode)
		{
			BasicStatisticsReport::BasicStatisticsReportItem::BasicStatisticsReportSubItem subItemsObject;
			if(!allItemsNodeSubItemsBasicStatisticsReportSubItem["BasicStatisticsReportSubItemName"].isNull())
				subItemsObject.basicStatisticsReportSubItemName = allItemsNodeSubItemsBasicStatisticsReportSubItem["BasicStatisticsReportSubItemName"].asString();
			if(!allItemsNodeSubItemsBasicStatisticsReportSubItem["Value"].isNull())
				subItemsObject.value = allItemsNodeSubItemsBasicStatisticsReportSubItem["Value"].asString();
			if(!allItemsNodeSubItemsBasicStatisticsReportSubItem["Count"].isNull())
				subItemsObject.count = std::stoi(allItemsNodeSubItemsBasicStatisticsReportSubItem["Count"].asString());
			if(!allItemsNodeSubItemsBasicStatisticsReportSubItem["Percentage"].isNull())
				subItemsObject.percentage = std::stoi(allItemsNodeSubItemsBasicStatisticsReportSubItem["Percentage"].asString());
			auto allDetailsNode = allSubItemsNode["Details"]["KeyValuePair"];
			for (auto allSubItemsNodeDetailsKeyValuePair : allDetailsNode)
			{
				BasicStatisticsReport::BasicStatisticsReportItem::BasicStatisticsReportSubItem::KeyValuePair detailsObject;
				if(!allSubItemsNodeDetailsKeyValuePair["Key"].isNull())
					detailsObject.key = allSubItemsNodeDetailsKeyValuePair["Key"].asString();
				if(!allSubItemsNodeDetailsKeyValuePair["Value"].isNull())
					detailsObject.value = allSubItemsNodeDetailsKeyValuePair["Value"].asString();
				subItemsObject.details.push_back(detailsObject);
			}
			basicStatisticsReportItemObject.subItems.push_back(subItemsObject);
		}
		basicStatisticsReport_.items.push_back(basicStatisticsReportItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GenerateBasicStatisticsReportResult::BasicStatisticsReport GenerateBasicStatisticsReportResult::getBasicStatisticsReport()const
{
	return basicStatisticsReport_;
}

std::string GenerateBasicStatisticsReportResult::getMessage()const
{
	return message_;
}

int GenerateBasicStatisticsReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GenerateBasicStatisticsReportResult::getCode()const
{
	return code_;
}

bool GenerateBasicStatisticsReportResult::getSuccess()const
{
	return success_;
}

