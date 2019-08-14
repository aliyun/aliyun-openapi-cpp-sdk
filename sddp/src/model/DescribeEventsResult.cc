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

#include <alibabacloud/sddp/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Event"];
	for (auto value : allItems)
	{
		Event itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["UserId"].isNull())
			itemsObject.userId = std::stol(value["UserId"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["DisplayName"].isNull())
			itemsObject.displayName = value["DisplayName"].asString();
		if(!value["ProductCode"].isNull())
			itemsObject.productCode = value["ProductCode"].asString();
		if(!value["TargetProductCode"].isNull())
			itemsObject.targetProductCode = value["TargetProductCode"].asString();
		if(!value["TypeCode"].isNull())
			itemsObject.typeCode = value["TypeCode"].asString();
		if(!value["TypeName"].isNull())
			itemsObject.typeName = value["TypeName"].asString();
		if(!value["TelephoneNum"].isNull())
			itemsObject.telephoneNum = value["TelephoneNum"].asString();
		if(!value["SubTypeCode"].isNull())
			itemsObject.subTypeCode = value["SubTypeCode"].asString();
		if(!value["SubTypeName"].isNull())
			itemsObject.subTypeName = value["SubTypeName"].asString();
		if(!value["AlertTime"].isNull())
			itemsObject.alertTime = std::stol(value["AlertTime"].asString());
		if(!value["EventTime"].isNull())
			itemsObject.eventTime = std::stol(value["EventTime"].asString());
		if(!value["Status"].isNull())
			itemsObject.status = std::stoi(value["Status"].asString());
		if(!value["StatusName"].isNull())
			itemsObject.statusName = value["StatusName"].asString();
		if(!value["DealUserId"].isNull())
			itemsObject.dealUserId = std::stol(value["DealUserId"].asString());
		if(!value["DealLoginName"].isNull())
			itemsObject.dealLoginName = value["DealLoginName"].asString();
		if(!value["DealDisplayName"].isNull())
			itemsObject.dealDisplayName = value["DealDisplayName"].asString();
		if(!value["DealTime"].isNull())
			itemsObject.dealTime = std::stol(value["DealTime"].asString());
		if(!value["DepartName"].isNull())
			itemsObject.departName = value["DepartName"].asString();
		if(!value["Backed"].isNull())
			itemsObject.backed = value["Backed"].asString() == "true";
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

