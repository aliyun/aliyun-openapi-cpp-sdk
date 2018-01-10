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

#include <alibabacloud/vpc/model/DescribeGlobalAccelerationInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeGlobalAccelerationInstancesResult::DescribeGlobalAccelerationInstancesResult() :
	ServiceResult()
{}

DescribeGlobalAccelerationInstancesResult::DescribeGlobalAccelerationInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalAccelerationInstancesResult::~DescribeGlobalAccelerationInstancesResult()
{}

void DescribeGlobalAccelerationInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allGlobalAccelerationInstances = value["GlobalAccelerationInstances"]["GlobalAccelerationInstance"];
	for (auto value : allGlobalAccelerationInstances)
	{
		GlobalAccelerationInstance globalAccelerationInstanceObject;
		globalAccelerationInstanceObject.regionId = value["RegionId"].asString();
		globalAccelerationInstanceObject.globalAccelerationInstanceId = value["GlobalAccelerationInstanceId"].asString();
		globalAccelerationInstanceObject.ipAddress = value["IpAddress"].asString();
		globalAccelerationInstanceObject.status = value["Status"].asString();
		globalAccelerationInstanceObject.bandwidth = value["Bandwidth"].asString();
		globalAccelerationInstanceObject.internetChargeType = value["InternetChargeType"].asString();
		globalAccelerationInstanceObject.chargeType = value["ChargeType"].asString();
		globalAccelerationInstanceObject.bandwidthType = value["BandwidthType"].asString();
		globalAccelerationInstanceObject.accelerationLocation = value["AccelerationLocation"].asString();
		globalAccelerationInstanceObject.serviceLocation = value["ServiceLocation"].asString();
		globalAccelerationInstanceObject.name = value["Name"].asString();
		globalAccelerationInstanceObject.description = value["Description"].asString();
		globalAccelerationInstanceObject.expiredTime = value["ExpiredTime"].asString();
		globalAccelerationInstanceObject.creationTime = value["CreationTime"].asString();
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			GlobalAccelerationInstance::LockReason lockReasonObject;
			lockReasonObject.lockReason = value["LockReason"].asString();
			globalAccelerationInstanceObject.operationLocks.push_back(lockReasonObject);
		}
		auto allBackendServers = value["BackendServers"]["BackendServer"];
		for (auto value : allBackendServers)
		{
			GlobalAccelerationInstance::BackendServer backendServerObject;
			backendServerObject.regionId = value["RegionId"].asString();
			backendServerObject.serverId = value["ServerId"].asString();
			backendServerObject.serverIpAddress = value["ServerIpAddress"].asString();
			backendServerObject.serverType = value["ServerType"].asString();
			globalAccelerationInstanceObject.backendServers.push_back(backendServerObject);
		}
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddress"];
		for (auto value : allPublicIpAddresses)
		{
			GlobalAccelerationInstance::PublicIpAddress publicIpAddressObject;
			publicIpAddressObject.allocationId = value["AllocationId"].asString();
			publicIpAddressObject.ipAddress = value["IpAddress"].asString();
			globalAccelerationInstanceObject.publicIpAddresses.push_back(publicIpAddressObject);
		}
		globalAccelerationInstances_.push_back(globalAccelerationInstanceObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGlobalAccelerationInstancesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeGlobalAccelerationInstancesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeGlobalAccelerationInstancesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeGlobalAccelerationInstancesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeGlobalAccelerationInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGlobalAccelerationInstancesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

