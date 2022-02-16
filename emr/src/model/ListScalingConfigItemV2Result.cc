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

#include <alibabacloud/emr/model/ListScalingConfigItemV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingConfigItemV2Result::ListScalingConfigItemV2Result() :
	ServiceResult()
{}

ListScalingConfigItemV2Result::ListScalingConfigItemV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingConfigItemV2Result::~ListScalingConfigItemV2Result()
{}

void ListScalingConfigItemV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["ConfigItemType"].isNull())
			itemsObject.configItemType = valueItemsItem["ConfigItemType"].asString();
		if(!valueItemsItem["ScalingGroupBizId"].isNull())
			itemsObject.scalingGroupBizId = valueItemsItem["ScalingGroupBizId"].asString();
		if(!valueItemsItem["ScalingConfigItemBizId"].isNull())
			itemsObject.scalingConfigItemBizId = valueItemsItem["ScalingConfigItemBizId"].asString();
		if(!valueItemsItem["ConfigItemInformation"].isNull())
			itemsObject.configItemInformation = valueItemsItem["ConfigItemInformation"].asString();
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

int ListScalingConfigItemV2Result::getTotalCount()const
{
	return totalCount_;
}

int ListScalingConfigItemV2Result::getPageSize()const
{
	return pageSize_;
}

std::string ListScalingConfigItemV2Result::getNextToken()const
{
	return nextToken_;
}

int ListScalingConfigItemV2Result::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListScalingConfigItemV2Result::Item> ListScalingConfigItemV2Result::getItems()const
{
	return items_;
}

