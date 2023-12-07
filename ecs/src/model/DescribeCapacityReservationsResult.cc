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

#include <alibabacloud/ecs/model/DescribeCapacityReservationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeCapacityReservationsResult::DescribeCapacityReservationsResult() :
	ServiceResult()
{}

DescribeCapacityReservationsResult::DescribeCapacityReservationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCapacityReservationsResult::~DescribeCapacityReservationsResult()
{}

void DescribeCapacityReservationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCapacityReservationSetNode = value["CapacityReservationSet"]["CapacityReservationItem"];
	for (auto valueCapacityReservationSetCapacityReservationItem : allCapacityReservationSetNode)
	{
		CapacityReservationItem capacityReservationSetObject;
		if(!valueCapacityReservationSetCapacityReservationItem["Status"].isNull())
			capacityReservationSetObject.status = valueCapacityReservationSetCapacityReservationItem["Status"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["TimeSlot"].isNull())
			capacityReservationSetObject.timeSlot = valueCapacityReservationSetCapacityReservationItem["TimeSlot"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsMatchCriteria"].isNull())
			capacityReservationSetObject.privatePoolOptionsMatchCriteria = valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsMatchCriteria"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsId"].isNull())
			capacityReservationSetObject.privatePoolOptionsId = valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsId"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsName"].isNull())
			capacityReservationSetObject.privatePoolOptionsName = valueCapacityReservationSetCapacityReservationItem["PrivatePoolOptionsName"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["RegionId"].isNull())
			capacityReservationSetObject.regionId = valueCapacityReservationSetCapacityReservationItem["RegionId"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["InstanceChargeType"].isNull())
			capacityReservationSetObject.instanceChargeType = valueCapacityReservationSetCapacityReservationItem["InstanceChargeType"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["EndTime"].isNull())
			capacityReservationSetObject.endTime = valueCapacityReservationSetCapacityReservationItem["EndTime"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["StartTime"].isNull())
			capacityReservationSetObject.startTime = valueCapacityReservationSetCapacityReservationItem["StartTime"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["Description"].isNull())
			capacityReservationSetObject.description = valueCapacityReservationSetCapacityReservationItem["Description"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["EndTimeType"].isNull())
			capacityReservationSetObject.endTimeType = valueCapacityReservationSetCapacityReservationItem["EndTimeType"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["ResourceGroupId"].isNull())
			capacityReservationSetObject.resourceGroupId = valueCapacityReservationSetCapacityReservationItem["ResourceGroupId"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["Platform"].isNull())
			capacityReservationSetObject.platform = valueCapacityReservationSetCapacityReservationItem["Platform"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["StartTimeType"].isNull())
			capacityReservationSetObject.startTimeType = valueCapacityReservationSetCapacityReservationItem["StartTimeType"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["SavingPlanId"].isNull())
			capacityReservationSetObject.savingPlanId = valueCapacityReservationSetCapacityReservationItem["SavingPlanId"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["ReservedInstanceId"].isNull())
			capacityReservationSetObject.reservedInstanceId = valueCapacityReservationSetCapacityReservationItem["ReservedInstanceId"].asString();
		if(!valueCapacityReservationSetCapacityReservationItem["CapacityReservationOwnerId"].isNull())
			capacityReservationSetObject.capacityReservationOwnerId = valueCapacityReservationSetCapacityReservationItem["CapacityReservationOwnerId"].asString();
		auto allAllocatedResourcesNode = valueCapacityReservationSetCapacityReservationItem["AllocatedResources"]["AllocatedResource"];
		for (auto valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource : allAllocatedResourcesNode)
		{
			CapacityReservationItem::AllocatedResource allocatedResourcesObject;
			if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["UsedAmount"].isNull())
				allocatedResourcesObject.usedAmount = std::stoi(valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["UsedAmount"].asString());
			if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["TotalAmount"].isNull())
				allocatedResourcesObject.totalAmount = std::stoi(valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["TotalAmount"].asString());
			if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["AvailableAmount"].isNull())
				allocatedResourcesObject.availableAmount = std::stoi(valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["AvailableAmount"].asString());
			if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["zoneId"].isNull())
				allocatedResourcesObject.zoneId = valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["zoneId"].asString();
			if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["InstanceType"].isNull())
				allocatedResourcesObject.instanceType = valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["InstanceType"].asString();
			auto allCapacityReservationUsagesNode = valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource["CapacityReservationUsages"]["CapacityReservationUsage"];
			for (auto valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage : allCapacityReservationUsagesNode)
			{
				CapacityReservationItem::AllocatedResource::CapacityReservationUsage capacityReservationUsagesObject;
				if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["AccountId"].isNull())
					capacityReservationUsagesObject.accountId = valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["AccountId"].asString();
				if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["ServiceName"].isNull())
					capacityReservationUsagesObject.serviceName = valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["ServiceName"].asString();
				if(!valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["UsedAmount"].isNull())
					capacityReservationUsagesObject.usedAmount = std::stoi(valueCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResourceCapacityReservationUsagesCapacityReservationUsage["UsedAmount"].asString());
				allocatedResourcesObject.capacityReservationUsages.push_back(capacityReservationUsagesObject);
			}
			capacityReservationSetObject.allocatedResources.push_back(allocatedResourcesObject);
		}
		auto allTagsNode = valueCapacityReservationSetCapacityReservationItem["Tags"]["Tag"];
		for (auto valueCapacityReservationSetCapacityReservationItemTagsTag : allTagsNode)
		{
			CapacityReservationItem::Tag tagsObject;
			if(!valueCapacityReservationSetCapacityReservationItemTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueCapacityReservationSetCapacityReservationItemTagsTag["TagValue"].asString();
			if(!valueCapacityReservationSetCapacityReservationItemTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueCapacityReservationSetCapacityReservationItemTagsTag["TagKey"].asString();
			capacityReservationSetObject.tags.push_back(tagsObject);
		}
		capacityReservationSet_.push_back(capacityReservationSetObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeCapacityReservationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeCapacityReservationsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeCapacityReservationsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeCapacityReservationsResult::CapacityReservationItem> DescribeCapacityReservationsResult::getCapacityReservationSet()const
{
	return capacityReservationSet_;
}

