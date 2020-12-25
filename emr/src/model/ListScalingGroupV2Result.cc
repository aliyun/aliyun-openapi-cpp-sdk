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

#include <alibabacloud/emr/model/ListScalingGroupV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingGroupV2Result::ListScalingGroupV2Result() :
	ServiceResult()
{}

ListScalingGroupV2Result::ListScalingGroupV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingGroupV2Result::~ListScalingGroupV2Result()
{}

void ListScalingGroupV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["ScalingGroupId"].isNull())
			itemsObject.scalingGroupId = valueItemsItem["ScalingGroupId"].asString();
		if(!valueItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItem["Name"].asString();
		if(!valueItemsItem["Description"].isNull())
			itemsObject.description = valueItemsItem["Description"].asString();
		if(!valueItemsItem["ActiveStatus"].isNull())
			itemsObject.activeStatus = valueItemsItem["ActiveStatus"].asString();
		if(!valueItemsItem["HostGroupBizId"].isNull())
			itemsObject.hostGroupBizId = valueItemsItem["HostGroupBizId"].asString();
		if(!valueItemsItem["ScalingInMode"].isNull())
			itemsObject.scalingInMode = valueItemsItem["ScalingInMode"].asString();
		if(!valueItemsItem["ScalingMinSize"].isNull())
			itemsObject.scalingMinSize = std::stoi(valueItemsItem["ScalingMinSize"].asString());
		if(!valueItemsItem["ScalingMaxSize"].isNull())
			itemsObject.scalingMaxSize = std::stoi(valueItemsItem["ScalingMaxSize"].asString());
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

int ListScalingGroupV2Result::getTotalCount()const
{
	return totalCount_;
}

int ListScalingGroupV2Result::getPageSize()const
{
	return pageSize_;
}

std::string ListScalingGroupV2Result::getNextToken()const
{
	return nextToken_;
}

int ListScalingGroupV2Result::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListScalingGroupV2Result::Item> ListScalingGroupV2Result::getItems()const
{
	return items_;
}

