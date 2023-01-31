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
	auto allGlobalAccelerationInstancesNode = value["GlobalAccelerationInstances"]["GlobalAccelerationInstance"];
	for (auto valueGlobalAccelerationInstancesGlobalAccelerationInstance : allGlobalAccelerationInstancesNode)
	{
		GlobalAccelerationInstance globalAccelerationInstancesObject;
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationActiveTime"].isNull())
			globalAccelerationInstancesObject.reservationActiveTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationActiveTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["CreationTime"].isNull())
			globalAccelerationInstancesObject.creationTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["CreationTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Status"].isNull())
			globalAccelerationInstancesObject.status = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Status"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationOrderType"].isNull())
			globalAccelerationInstancesObject.reservationOrderType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationOrderType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["BandwidthType"].isNull())
			globalAccelerationInstancesObject.bandwidthType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["BandwidthType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ChargeType"].isNull())
			globalAccelerationInstancesObject.chargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].isNull())
			globalAccelerationInstancesObject.globalAccelerationInstanceId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServiceLocation"].isNull())
			globalAccelerationInstancesObject.serviceLocation = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServiceLocation"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationInternetChargeType"].isNull())
			globalAccelerationInstancesObject.reservationInternetChargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationInternetChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].isNull())
			globalAccelerationInstancesObject.regionId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["AccelerationLocation"].isNull())
			globalAccelerationInstancesObject.accelerationLocation = valueGlobalAccelerationInstancesGlobalAccelerationInstance["AccelerationLocation"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].isNull())
			globalAccelerationInstancesObject.ipAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Description"].isNull())
			globalAccelerationInstancesObject.description = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Description"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Bandwidth"].isNull())
			globalAccelerationInstancesObject.bandwidth = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Bandwidth"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ExpiredTime"].isNull())
			globalAccelerationInstancesObject.expiredTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ExpiredTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationBandwidth"].isNull())
			globalAccelerationInstancesObject.reservationBandwidth = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationBandwidth"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["InternetChargeType"].isNull())
			globalAccelerationInstancesObject.internetChargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["InternetChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Name"].isNull())
			globalAccelerationInstancesObject.name = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Name"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["HasReservationData"].isNull())
			globalAccelerationInstancesObject.hasReservationData = valueGlobalAccelerationInstancesGlobalAccelerationInstance["HasReservationData"].asString();
		auto allOperationLocksNode = valueGlobalAccelerationInstancesGlobalAccelerationInstance["OperationLocks"]["LockReason"];
		for (auto valueGlobalAccelerationInstancesGlobalAccelerationInstanceOperationLocksLockReason : allOperationLocksNode)
		{
			GlobalAccelerationInstance::LockReason operationLocksObject;
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstanceOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = valueGlobalAccelerationInstancesGlobalAccelerationInstanceOperationLocksLockReason["LockReason"].asString();
			globalAccelerationInstancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allBackendServersNode = valueGlobalAccelerationInstancesGlobalAccelerationInstance["BackendServers"]["BackendServer"];
		for (auto valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer : allBackendServersNode)
		{
			GlobalAccelerationInstance::BackendServer backendServersObject;
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerIpAddress"].isNull())
				backendServersObject.serverIpAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerIpAddress"].asString();
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerId"].isNull())
				backendServersObject.serverId = valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerId"].asString();
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerType"].isNull())
				backendServersObject.serverType = valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["ServerType"].asString();
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["RegionId"].isNull())
				backendServersObject.regionId = valueGlobalAccelerationInstancesGlobalAccelerationInstanceBackendServersBackendServer["RegionId"].asString();
			globalAccelerationInstancesObject.backendServers.push_back(backendServersObject);
		}
		auto allPublicIpAddressesNode = valueGlobalAccelerationInstancesGlobalAccelerationInstance["PublicIpAddresses"]["PublicIpAddress"];
		for (auto valueGlobalAccelerationInstancesGlobalAccelerationInstancePublicIpAddressesPublicIpAddress : allPublicIpAddressesNode)
		{
			GlobalAccelerationInstance::PublicIpAddress publicIpAddressesObject;
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstancePublicIpAddressesPublicIpAddress["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstancePublicIpAddressesPublicIpAddress["IpAddress"].asString();
			if(!valueGlobalAccelerationInstancesGlobalAccelerationInstancePublicIpAddressesPublicIpAddress["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = valueGlobalAccelerationInstancesGlobalAccelerationInstancePublicIpAddressesPublicIpAddress["AllocationId"].asString();
			globalAccelerationInstancesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		globalAccelerationInstances_.push_back(globalAccelerationInstancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeGlobalAccelerationInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeGlobalAccelerationInstancesResult::GlobalAccelerationInstance> DescribeGlobalAccelerationInstancesResult::getGlobalAccelerationInstances()const
{
	return globalAccelerationInstances_;
}

int DescribeGlobalAccelerationInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGlobalAccelerationInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

