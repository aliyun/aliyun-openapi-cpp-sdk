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

#include <alibabacloud/ess/model/DescribeCapacityHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeCapacityHistoryResult::DescribeCapacityHistoryResult() :
	ServiceResult()
{}

DescribeCapacityHistoryResult::DescribeCapacityHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCapacityHistoryResult::~DescribeCapacityHistoryResult()
{}

void DescribeCapacityHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCapacityHistoryItems = value["CapacityHistoryItems"]["CapacityHistoryModel"];
	for (auto value : allCapacityHistoryItems)
	{
		CapacityHistoryModel capacityHistoryItemsObject;
		if(!value["ScalingGroupId"].isNull())
			capacityHistoryItemsObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["TotalCapacity"].isNull())
			capacityHistoryItemsObject.totalCapacity = std::stoi(value["TotalCapacity"].asString());
		if(!value["AttachedCapacity"].isNull())
			capacityHistoryItemsObject.attachedCapacity = std::stoi(value["AttachedCapacity"].asString());
		if(!value["AutoCreatedCapacity"].isNull())
			capacityHistoryItemsObject.autoCreatedCapacity = std::stoi(value["AutoCreatedCapacity"].asString());
		if(!value["Timestamp"].isNull())
			capacityHistoryItemsObject.timestamp = value["Timestamp"].asString();
		capacityHistoryItems_.push_back(capacityHistoryItemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCapacityHistoryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCapacityHistoryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCapacityHistoryResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCapacityHistoryResult::CapacityHistoryModel> DescribeCapacityHistoryResult::getCapacityHistoryItems()const
{
	return capacityHistoryItems_;
}

