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
	auto allEipAddresses = value["EipAddresses"]["EipAddress"];
	for (auto value : allEipAddresses)
	{
		EipAddress eipAddressObject;
		eipAddressObject.regionId = value["RegionId"].asString();
		eipAddressObject.ipAddress = value["IpAddress"].asString();
		eipAddressObject.allocationId = value["AllocationId"].asString();
		eipAddressObject.status = value["Status"].asString();
		eipAddressObject.instanceId = value["InstanceId"].asString();
		eipAddressObject.bandwidth = value["Bandwidth"].asString();
		eipAddressObject.eipBandwidth = value["EipBandwidth"].asString();
		eipAddressObject.internetChargeType = value["InternetChargeType"].asString();
		eipAddressObject.allocationTime = value["AllocationTime"].asString();
		eipAddressObject.instanceType = value["InstanceType"].asString();
		eipAddressObject.chargeType = value["ChargeType"].asString();
		eipAddressObject.expiredTime = value["ExpiredTime"].asString();
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			EipAddress::LockReason lockReasonObject;
			lockReasonObject.lockReason = value["LockReason"].asString();
			eipAddressObject.operationLocks.push_back(lockReasonObject);
		}
		eipAddresses_.push_back(eipAddressObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeEipAddressesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeEipAddressesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeEipAddressesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeEipAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEipAddressesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

