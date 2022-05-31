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

#include <alibabacloud/cloudesl/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeEventsResult::DescribeEventsResult() :
	ServiceResult()
{}

DescribeEventsResult::DescribeEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventsResult::~DescribeEventsResult()
{}

void DescribeEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["EventInfoVO"];
	for (auto valueItemsEventInfoVO : allItemsNode)
	{
		EventInfoVO itemsObject;
		if(!valueItemsEventInfoVO["EventId"].isNull())
			itemsObject.eventId = valueItemsEventInfoVO["EventId"].asString();
		if(!valueItemsEventInfoVO["EventTime"].isNull())
			itemsObject.eventTime = valueItemsEventInfoVO["EventTime"].asString();
		if(!valueItemsEventInfoVO["Category"].isNull())
			itemsObject.category = valueItemsEventInfoVO["Category"].asString();
		if(!valueItemsEventInfoVO["EslBarCode"].isNull())
			itemsObject.eslBarCode = valueItemsEventInfoVO["EslBarCode"].asString();
		if(!valueItemsEventInfoVO["ApMac"].isNull())
			itemsObject.apMac = valueItemsEventInfoVO["ApMac"].asString();
		if(!valueItemsEventInfoVO["StoreId"].isNull())
			itemsObject.storeId = valueItemsEventInfoVO["StoreId"].asString();
		if(!valueItemsEventInfoVO["ItemBarCode"].isNull())
			itemsObject.itemBarCode = valueItemsEventInfoVO["ItemBarCode"].asString();
		if(!valueItemsEventInfoVO["ItemId"].isNull())
			itemsObject.itemId = valueItemsEventInfoVO["ItemId"].asString();
		if(!valueItemsEventInfoVO["ItemTitle"].isNull())
			itemsObject.itemTitle = valueItemsEventInfoVO["ItemTitle"].asString();
		if(!valueItemsEventInfoVO["Content"].isNull())
			itemsObject.content = valueItemsEventInfoVO["Content"].asString();
		if(!valueItemsEventInfoVO["Status"].isNull())
			itemsObject.status = valueItemsEventInfoVO["Status"].asString();
		if(!valueItemsEventInfoVO["Staff"].isNull())
			itemsObject.staff = valueItemsEventInfoVO["Staff"].asString();
		if(!valueItemsEventInfoVO["ProcessTime"].isNull())
			itemsObject.processTime = valueItemsEventInfoVO["ProcessTime"].asString();
		if(!valueItemsEventInfoVO["Reason"].isNull())
			itemsObject.reason = valueItemsEventInfoVO["Reason"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeEventsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeEventsResult::getMessage()const
{
	return message_;
}

int DescribeEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEventsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEventsResult::EventInfoVO> DescribeEventsResult::getItems()const
{
	return items_;
}

std::string DescribeEventsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeEventsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeEventsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeEventsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeEventsResult::getCode()const
{
	return code_;
}

bool DescribeEventsResult::getSuccess()const
{
	return success_;
}

