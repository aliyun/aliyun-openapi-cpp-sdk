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

#include <alibabacloud/ecs/model/DescribeEipAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeEipAddressesResult::DescribeEipAddressesResult() :
	ServiceResult()
{}

DescribeEipAddressesResult::DescribeEipAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipAddressesResult::~DescribeEipAddressesResult()
{}

void DescribeEipAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipAddressesNode = value["EipAddresses"]["EipAddress"];
	for (auto valueEipAddressesEipAddress : allEipAddressesNode)
	{
		EipAddress eipAddressesObject;
		if(!valueEipAddressesEipAddress["Status"].isNull())
			eipAddressesObject.status = valueEipAddressesEipAddress["Status"].asString();
		if(!valueEipAddressesEipAddress["AllocationTime"].isNull())
			eipAddressesObject.allocationTime = valueEipAddressesEipAddress["AllocationTime"].asString();
		if(!valueEipAddressesEipAddress["ChargeType"].isNull())
			eipAddressesObject.chargeType = valueEipAddressesEipAddress["ChargeType"].asString();
		if(!valueEipAddressesEipAddress["InstanceId"].isNull())
			eipAddressesObject.instanceId = valueEipAddressesEipAddress["InstanceId"].asString();
		if(!valueEipAddressesEipAddress["InstanceType"].isNull())
			eipAddressesObject.instanceType = valueEipAddressesEipAddress["InstanceType"].asString();
		if(!valueEipAddressesEipAddress["RegionId"].isNull())
			eipAddressesObject.regionId = valueEipAddressesEipAddress["RegionId"].asString();
		if(!valueEipAddressesEipAddress["IpAddress"].isNull())
			eipAddressesObject.ipAddress = valueEipAddressesEipAddress["IpAddress"].asString();
		if(!valueEipAddressesEipAddress["Bandwidth"].isNull())
			eipAddressesObject.bandwidth = valueEipAddressesEipAddress["Bandwidth"].asString();
		if(!valueEipAddressesEipAddress["ExpiredTime"].isNull())
			eipAddressesObject.expiredTime = valueEipAddressesEipAddress["ExpiredTime"].asString();
		if(!valueEipAddressesEipAddress["AllocationId"].isNull())
			eipAddressesObject.allocationId = valueEipAddressesEipAddress["AllocationId"].asString();
		if(!valueEipAddressesEipAddress["InternetChargeType"].isNull())
			eipAddressesObject.internetChargeType = valueEipAddressesEipAddress["InternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["EipBandwidth"].isNull())
			eipAddressesObject.eipBandwidth = valueEipAddressesEipAddress["EipBandwidth"].asString();
		auto allOperationLocksNode = valueEipAddressesEipAddress["OperationLocks"]["LockReason"];
		for (auto valueEipAddressesEipAddressOperationLocksLockReason : allOperationLocksNode)
		{
			EipAddress::LockReason operationLocksObject;
			if(!valueEipAddressesEipAddressOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = valueEipAddressesEipAddressOperationLocksLockReason["LockReason"].asString();
			eipAddressesObject.operationLocks.push_back(operationLocksObject);
		}
		eipAddresses_.push_back(eipAddressesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEipAddressesResult::EipAddress> DescribeEipAddressesResult::getEipAddresses()const
{
	return eipAddresses_;
}

int DescribeEipAddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEipAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

