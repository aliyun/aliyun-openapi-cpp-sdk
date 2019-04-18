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
	auto allReservedInstances = value["ReservedInstances"]["ReservedInstance"];
	for (auto value : allReservedInstances)
	{
		ReservedInstance reservedInstancesObject;
		if(!value["ReservedInstanceId"].isNull())
			reservedInstancesObject.reservedInstanceId = value["ReservedInstanceId"].asString();
		if(!value["RegionId"].isNull())
			reservedInstancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			reservedInstancesObject.zoneId = value["ZoneId"].asString();
		if(!value["ReservedInstanceName"].isNull())
			reservedInstancesObject.reservedInstanceName = value["ReservedInstanceName"].asString();
		if(!value["Description"].isNull())
			reservedInstancesObject.description = value["Description"].asString();
		if(!value["InstanceType"].isNull())
			reservedInstancesObject.instanceType = value["InstanceType"].asString();
		if(!value["Scope"].isNull())
			reservedInstancesObject.scope = value["Scope"].asString();
		if(!value["OfferingType"].isNull())
			reservedInstancesObject.offeringType = value["OfferingType"].asString();
		if(!value["InstanceAmount"].isNull())
			reservedInstancesObject.instanceAmount = std::stoi(value["InstanceAmount"].asString());
		if(!value["Status"].isNull())
			reservedInstancesObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			reservedInstancesObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpiredTime"].isNull())
			reservedInstancesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["StartTime"].isNull())
			reservedInstancesObject.startTime = value["StartTime"].asString();
		if(!value["ResourceGroupId"].isNull())
			reservedInstancesObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allOperationLocks = value["OperationLocks"]["OperationLock"];
		for (auto value : allOperationLocks)
		{
			ReservedInstance::OperationLock operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
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

