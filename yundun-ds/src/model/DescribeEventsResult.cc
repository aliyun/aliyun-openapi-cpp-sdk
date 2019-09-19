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

#include <alibabacloud/yundun-ds/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

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
	auto allItemsNode = value["Items"]["Event"];
	for (auto valueItemsEvent : allItemsNode)
	{
		Event itemsObject;
		if(!valueItemsEvent["Id"].isNull())
			itemsObject.id = std::stol(valueItemsEvent["Id"].asString());
		if(!valueItemsEvent["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsEvent["UserId"].asString());
		if(!valueItemsEvent["LoginName"].isNull())
			itemsObject.loginName = valueItemsEvent["LoginName"].asString();
		if(!valueItemsEvent["DisplayName"].isNull())
			itemsObject.displayName = valueItemsEvent["DisplayName"].asString();
		if(!valueItemsEvent["ProductCode"].isNull())
			itemsObject.productCode = valueItemsEvent["ProductCode"].asString();
		if(!valueItemsEvent["TypeCode"].isNull())
			itemsObject.typeCode = valueItemsEvent["TypeCode"].asString();
		if(!valueItemsEvent["TypeName"].isNull())
			itemsObject.typeName = valueItemsEvent["TypeName"].asString();
		if(!valueItemsEvent["TelephoneNum"].isNull())
			itemsObject.telephoneNum = valueItemsEvent["TelephoneNum"].asString();
		if(!valueItemsEvent["SubTypeCode"].isNull())
			itemsObject.subTypeCode = valueItemsEvent["SubTypeCode"].asString();
		if(!valueItemsEvent["SubTypeName"].isNull())
			itemsObject.subTypeName = valueItemsEvent["SubTypeName"].asString();
		if(!valueItemsEvent["AlertTime"].isNull())
			itemsObject.alertTime = std::stol(valueItemsEvent["AlertTime"].asString());
		if(!valueItemsEvent["DataInstance"].isNull())
			itemsObject.dataInstance = valueItemsEvent["DataInstance"].asString();
		if(!valueItemsEvent["EventTime"].isNull())
			itemsObject.eventTime = std::stol(valueItemsEvent["EventTime"].asString());
		if(!valueItemsEvent["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsEvent["Status"].asString());
		if(!valueItemsEvent["StatusName"].isNull())
			itemsObject.statusName = valueItemsEvent["StatusName"].asString();
		if(!valueItemsEvent["DealUserId"].isNull())
			itemsObject.dealUserId = std::stol(valueItemsEvent["DealUserId"].asString());
		if(!valueItemsEvent["DealLoginName"].isNull())
			itemsObject.dealLoginName = valueItemsEvent["DealLoginName"].asString();
		if(!valueItemsEvent["DealDisplayName"].isNull())
			itemsObject.dealDisplayName = valueItemsEvent["DealDisplayName"].asString();
		if(!valueItemsEvent["DealTime"].isNull())
			itemsObject.dealTime = std::stol(valueItemsEvent["DealTime"].asString());
		if(!valueItemsEvent["DepartName"].isNull())
			itemsObject.departName = valueItemsEvent["DepartName"].asString();
		if(!valueItemsEvent["Backed"].isNull())
			itemsObject.backed = valueItemsEvent["Backed"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEventsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeEventsResult::Event> DescribeEventsResult::getItems()const
{
	return items_;
}

