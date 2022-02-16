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

#include <alibabacloud/emr/model/ListScalingActivityV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingActivityV2Result::ListScalingActivityV2Result() :
	ServiceResult()
{}

ListScalingActivityV2Result::ListScalingActivityV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingActivityV2Result::~ListScalingActivityV2Result()
{}

void ListScalingActivityV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["BizId"].isNull())
			itemsObject.bizId = valueItemsItem["BizId"].asString();
		if(!valueItemsItem["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsItem["StartTime"].asString());
		if(!valueItemsItem["EndTime"].isNull())
			itemsObject.endTime = std::stol(valueItemsItem["EndTime"].asString());
		if(!valueItemsItem["ExpectNum"].isNull())
			itemsObject.expectNum = std::stoi(valueItemsItem["ExpectNum"].asString());
		if(!valueItemsItem["InstanceIds"].isNull())
			itemsObject.instanceIds = valueItemsItem["InstanceIds"].asString();
		if(!valueItemsItem["TotalCapacity"].isNull())
			itemsObject.totalCapacity = std::stoi(valueItemsItem["TotalCapacity"].asString());
		if(!valueItemsItem["Cause"].isNull())
			itemsObject.cause = valueItemsItem["Cause"].asString();
		if(!valueItemsItem["Description"].isNull())
			itemsObject.description = valueItemsItem["Description"].asString();
		if(!valueItemsItem["Transition"].isNull())
			itemsObject.transition = valueItemsItem["Transition"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["ScalingRuleId"].isNull())
			itemsObject.scalingRuleId = valueItemsItem["ScalingRuleId"].asString();
		if(!valueItemsItem["ScalingRuleName"].isNull())
			itemsObject.scalingRuleName = valueItemsItem["ScalingRuleName"].asString();
		if(!valueItemsItem["HostGroupBizId"].isNull())
			itemsObject.hostGroupBizId = valueItemsItem["HostGroupBizId"].asString();
		if(!valueItemsItem["HostGroupName"].isNull())
			itemsObject.hostGroupName = valueItemsItem["HostGroupName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListScalingActivityV2Result::getTotalCount()const
{
	return totalCount_;
}

int ListScalingActivityV2Result::getPageSize()const
{
	return pageSize_;
}

std::string ListScalingActivityV2Result::getNextToken()const
{
	return nextToken_;
}

int ListScalingActivityV2Result::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListScalingActivityV2Result::Item> ListScalingActivityV2Result::getItems()const
{
	return items_;
}

