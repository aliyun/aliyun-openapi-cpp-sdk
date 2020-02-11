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

#include <alibabacloud/ecs/model/DescribeReservedInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeReservedInstancesResult::DescribeReservedInstancesResult() :
	ServiceResult()
{}

DescribeReservedInstancesResult::DescribeReservedInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReservedInstancesResult::~DescribeReservedInstancesResult()
{}

void DescribeReservedInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReservedInstancesNode = value["ReservedInstances"]["ReservedInstance"];
	for (auto valueReservedInstancesReservedInstance : allReservedInstancesNode)
	{
		ReservedInstance reservedInstancesObject;
		if(!valueReservedInstancesReservedInstance["ReservedInstanceId"].isNull())
			reservedInstancesObject.reservedInstanceId = valueReservedInstancesReservedInstance["ReservedInstanceId"].asString();
		if(!valueReservedInstancesReservedInstance["RegionId"].isNull())
			reservedInstancesObject.regionId = valueReservedInstancesReservedInstance["RegionId"].asString();
		if(!valueReservedInstancesReservedInstance["ZoneId"].isNull())
			reservedInstancesObject.zoneId = valueReservedInstancesReservedInstance["ZoneId"].asString();
		if(!valueReservedInstancesReservedInstance["ReservedInstanceName"].isNull())
			reservedInstancesObject.reservedInstanceName = valueReservedInstancesReservedInstance["ReservedInstanceName"].asString();
		if(!valueReservedInstancesReservedInstance["Description"].isNull())
			reservedInstancesObject.description = valueReservedInstancesReservedInstance["Description"].asString();
		if(!valueReservedInstancesReservedInstance["InstanceType"].isNull())
			reservedInstancesObject.instanceType = valueReservedInstancesReservedInstance["InstanceType"].asString();
		if(!valueReservedInstancesReservedInstance["Scope"].isNull())
			reservedInstancesObject.scope = valueReservedInstancesReservedInstance["Scope"].asString();
		if(!valueReservedInstancesReservedInstance["OfferingType"].isNull())
			reservedInstancesObject.offeringType = valueReservedInstancesReservedInstance["OfferingType"].asString();
		if(!valueReservedInstancesReservedInstance["Platform"].isNull())
			reservedInstancesObject.platform = valueReservedInstancesReservedInstance["Platform"].asString();
		if(!valueReservedInstancesReservedInstance["InstanceAmount"].isNull())
			reservedInstancesObject.instanceAmount = std::stoi(valueReservedInstancesReservedInstance["InstanceAmount"].asString());
		if(!valueReservedInstancesReservedInstance["Status"].isNull())
			reservedInstancesObject.status = valueReservedInstancesReservedInstance["Status"].asString();
		if(!valueReservedInstancesReservedInstance["CreationTime"].isNull())
			reservedInstancesObject.creationTime = valueReservedInstancesReservedInstance["CreationTime"].asString();
		if(!valueReservedInstancesReservedInstance["ExpiredTime"].isNull())
			reservedInstancesObject.expiredTime = valueReservedInstancesReservedInstance["ExpiredTime"].asString();
		if(!valueReservedInstancesReservedInstance["StartTime"].isNull())
			reservedInstancesObject.startTime = valueReservedInstancesReservedInstance["StartTime"].asString();
		if(!valueReservedInstancesReservedInstance["ResourceGroupId"].isNull())
			reservedInstancesObject.resourceGroupId = valueReservedInstancesReservedInstance["ResourceGroupId"].asString();
		if(!valueReservedInstancesReservedInstance["AllocationStatus"].isNull())
			reservedInstancesObject.allocationStatus = valueReservedInstancesReservedInstance["AllocationStatus"].asString();
		auto allOperationLocksNode = allReservedInstancesNode["OperationLocks"]["OperationLock"];
		for (auto allReservedInstancesNodeOperationLocksOperationLock : allOperationLocksNode)
		{
			ReservedInstance::OperationLock operationLocksObject;
			if(!allReservedInstancesNodeOperationLocksOperationLock["LockReason"].isNull())
				operationLocksObject.lockReason = allReservedInstancesNodeOperationLocksOperationLock["LockReason"].asString();
			reservedInstancesObject.operationLocks.push_back(operationLocksObject);
		}
		reservedInstances_.push_back(reservedInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeReservedInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeReservedInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeReservedInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeReservedInstancesResult::ReservedInstance> DescribeReservedInstancesResult::getReservedInstances()const
{
	return reservedInstances_;
}

