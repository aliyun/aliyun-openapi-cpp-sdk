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

#include <alibabacloud/mse/model/ListNacosHistoryConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListNacosHistoryConfigsResult::ListNacosHistoryConfigsResult() :
	ServiceResult()
{}

ListNacosHistoryConfigsResult::ListNacosHistoryConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNacosHistoryConfigsResult::~ListNacosHistoryConfigsResult()
{}

void ListNacosHistoryConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHistoryItemsNode = value["HistoryItems"]["HistoryItem"];
	for (auto valueHistoryItemsHistoryItem : allHistoryItemsNode)
	{
		HistoryItem historyItemsObject;
		if(!valueHistoryItemsHistoryItem["AppName"].isNull())
			historyItemsObject.appName = valueHistoryItemsHistoryItem["AppName"].asString();
		if(!valueHistoryItemsHistoryItem["DataId"].isNull())
			historyItemsObject.dataId = valueHistoryItemsHistoryItem["DataId"].asString();
		if(!valueHistoryItemsHistoryItem["Group"].isNull())
			historyItemsObject.group = valueHistoryItemsHistoryItem["Group"].asString();
		if(!valueHistoryItemsHistoryItem["LastModifiedTime"].isNull())
			historyItemsObject.lastModifiedTime = std::stol(valueHistoryItemsHistoryItem["LastModifiedTime"].asString());
		if(!valueHistoryItemsHistoryItem["Id"].isNull())
			historyItemsObject.id = std::stol(valueHistoryItemsHistoryItem["Id"].asString());
		if(!valueHistoryItemsHistoryItem["OpType"].isNull())
			historyItemsObject.opType = valueHistoryItemsHistoryItem["OpType"].asString();
		historyItems_.push_back(historyItemsObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListNacosHistoryConfigsResult::getHttpCode()const
{
	return httpCode_;
}

int ListNacosHistoryConfigsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNacosHistoryConfigsResult::getMessage()const
{
	return message_;
}

int ListNacosHistoryConfigsResult::getPageSize()const
{
	return pageSize_;
}

int ListNacosHistoryConfigsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListNacosHistoryConfigsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListNacosHistoryConfigsResult::HistoryItem> ListNacosHistoryConfigsResult::getHistoryItems()const
{
	return historyItems_;
}

bool ListNacosHistoryConfigsResult::getSuccess()const
{
	return success_;
}

