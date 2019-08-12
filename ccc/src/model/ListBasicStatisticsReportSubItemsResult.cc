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

#include <alibabacloud/ccc/model/ListBasicStatisticsReportSubItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto subItemsNode = value["SubItems"];
	if(!subItemsNode["TotalCount"].isNull())
		subItems_.totalCount = std::stoi(subItemsNode["TotalCount"].asString());
	if(!subItemsNode["PageNumber"].isNull())
		subItems_.pageNumber = std::stoi(subItemsNode["PageNumber"].asString());
	if(!subItemsNode["PageSize"].isNull())
		subItems_.pageSize = std::stoi(subItemsNode["PageSize"].asString());
	auto allList = value["List"]["BasicStatisticsReportSubItem"];
	for (auto value : allList)
	{
		SubItems::BasicStatisticsReportSubItem basicStatisticsReportSubItemObject;
		if(!value["BasicStatisticsReportSubItemName"].isNull())
			basicStatisticsReportSubItemObject.basicStatisticsReportSubItemName = value["BasicStatisticsReportSubItemName"].asString();
		if(!value["Value"].isNull())
			basicStatisticsReportSubItemObject.value = value["Value"].asString();
		if(!value["Count"].isNull())
			basicStatisticsReportSubItemObject.count = std::stoi(value["Count"].asString());
		if(!value["Percentage"].isNull())
			basicStatisticsReportSubItemObject.percentage = std::stoi(value["Percentage"].asString());
		auto allRow = value["Row"]["KeyValuePair"];
		for (auto value : allRow)
		{
			SubItems::BasicStatisticsReportSubItem::KeyValuePair rowObject;
			if(!value["Key"].isNull())
				rowObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				rowObject.value = value["Value"].asString();
			basicStatisticsReportSubItemObject.row.push_back(rowObject);
		}
		subItems_.list.push_back(basicStatisticsReportSubItemObject);
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

ListBasicStatisticsReportSubItemsResult::SubItems ListBasicStatisticsReportSubItemsResult::getSubItems()const
{
	return subItems_;
}

std::string ListBasicStatisticsReportSubItemsResult::getMessage()const
{
	return message_;
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

