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

#include <alibabacloud/outboundbot/model/ListBasicStatisticsReportSubItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListBasicStatisticsReportSubItemsResult::ListBasicStatisticsReportSubItemsResult() :
	ServiceResult()
{}

ListBasicStatisticsReportSubItemsResult::ListBasicStatisticsReportSubItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBasicStatisticsReportSubItemsResult::~ListBasicStatisticsReportSubItemsResult()
{}

void ListBasicStatisticsReportSubItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto basicStatisticsReportSubItemsNode = value["BasicStatisticsReportSubItems"];
	if(!basicStatisticsReportSubItemsNode["TotalCount"].isNull())
		basicStatisticsReportSubItems_.totalCount = std::stoi(basicStatisticsReportSubItemsNode["TotalCount"].asString());
	if(!basicStatisticsReportSubItemsNode["PageNumber"].isNull())
		basicStatisticsReportSubItems_.pageNumber = std::stoi(basicStatisticsReportSubItemsNode["PageNumber"].asString());
	if(!basicStatisticsReportSubItemsNode["PageSize"].isNull())
		basicStatisticsReportSubItems_.pageSize = std::stoi(basicStatisticsReportSubItemsNode["PageSize"].asString());
	auto allListNode = basicStatisticsReportSubItemsNode["List"]["BasicStatisticsReportSubItem"];
	for (auto basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem : allListNode)
	{
		BasicStatisticsReportSubItems::BasicStatisticsReportSubItem basicStatisticsReportSubItemObject;
		if(!basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["BasicStatisticsReportSubItemName"].isNull())
			basicStatisticsReportSubItemObject.basicStatisticsReportSubItemName = basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["BasicStatisticsReportSubItemName"].asString();
		if(!basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Value"].isNull())
			basicStatisticsReportSubItemObject.value = basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Value"].asString();
		if(!basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Count"].isNull())
			basicStatisticsReportSubItemObject.count = std::stoi(basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Count"].asString());
		if(!basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Percentage"].isNull())
			basicStatisticsReportSubItemObject.percentage = std::stoi(basicStatisticsReportSubItemsNodeListBasicStatisticsReportSubItem["Percentage"].asString());
		auto allRowNode = allListNode["Row"]["KeyValuePair"];
		for (auto allListNodeRowKeyValuePair : allRowNode)
		{
			BasicStatisticsReportSubItems::BasicStatisticsReportSubItem::KeyValuePair rowObject;
			if(!allListNodeRowKeyValuePair["Key"].isNull())
				rowObject.key = allListNodeRowKeyValuePair["Key"].asString();
			if(!allListNodeRowKeyValuePair["Value"].isNull())
				rowObject.value = allListNodeRowKeyValuePair["Value"].asString();
			basicStatisticsReportSubItemObject.row.push_back(rowObject);
		}
		basicStatisticsReportSubItems_.list.push_back(basicStatisticsReportSubItemObject);
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

std::string ListBasicStatisticsReportSubItemsResult::getMessage()const
{
	return message_;
}

ListBasicStatisticsReportSubItemsResult::BasicStatisticsReportSubItems ListBasicStatisticsReportSubItemsResult::getBasicStatisticsReportSubItems()const
{
	return basicStatisticsReportSubItems_;
}

int ListBasicStatisticsReportSubItemsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListBasicStatisticsReportSubItemsResult::getCode()const
{
	return code_;
}

bool ListBasicStatisticsReportSubItemsResult::getSuccess()const
{
	return success_;
}

