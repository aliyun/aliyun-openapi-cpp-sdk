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
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].isNull())
			globalAccelerationInstancesObject.regionId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].isNull())
			globalAccelerationInstancesObject.globalAccelerationInstanceId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].isNull())
			globalAccelerationInstancesObject.ipAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Status"].isNull())
			globalAccelerationInstancesObject.status = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Status"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Bandwidth"].isNull())
			globalAccelerationInstancesObject.bandwidth = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Bandwidth"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["InternetChargeType"].isNull())
			globalAccelerationInstancesObject.internetChargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["InternetChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ChargeType"].isNull())
			globalAccelerationInstancesObject.chargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["BandwidthType"].isNull())
			globalAccelerationInstancesObject.bandwidthType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["BandwidthType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["AccelerationLocation"].isNull())
			globalAccelerationInstancesObject.accelerationLocation = valueGlobalAccelerationInstancesGlobalAccelerationInstance["AccelerationLocation"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServiceLocation"].isNull())
			globalAccelerationInstancesObject.serviceLocation = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServiceLocation"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Name"].isNull())
			globalAccelerationInstancesObject.name = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Name"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["Description"].isNull())
			globalAccelerationInstancesObject.description = valueGlobalAccelerationInstancesGlobalAccelerationInstance["Description"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ExpiredTime"].isNull())
			globalAccelerationInstancesObject.expiredTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ExpiredTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["CreationTime"].isNull())
			globalAccelerationInstancesObject.creationTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["CreationTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["HasReservationData"].isNull())
			globalAccelerationInstancesObject.hasReservationData = valueGlobalAccelerationInstancesGlobalAccelerationInstance["HasReservationData"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationBandwidth"].isNull())
			globalAccelerationInstancesObject.reservationBandwidth = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationBandwidth"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationInternetChargeType"].isNull())
			globalAccelerationInstancesObject.reservationInternetChargeType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationInternetChargeType"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationActiveTime"].isNull())
			globalAccelerationInstancesObject.reservationActiveTime = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationActiveTime"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationOrderType"].isNull())
			globalAccelerationInstancesObject.reservationOrderType = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ReservationOrderType"].asString();
		auto allOperationLocksNode = allGlobalAccelerationInstancesNode["OperationLocks"]["LockReason"];
		for (auto allGlobalAccelerationInstancesNodeOperationLocksLockReason : allOperationLocksNode)
		{
			GlobalAccelerationInstance::LockReason operationLocksObject;
			if(!allGlobalAccelerationInstancesNodeOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = allGlobalAccelerationInstancesNodeOperationLocksLockReason["LockReason"].asString();
			globalAccelerationInstancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allBackendServersNode = allGlobalAccelerationInstancesNode["BackendServers"]["BackendServer"];
		for (auto allGlobalAccelerationInstancesNodeBackendServersBackendServer : allBackendServersNode)
		{
			GlobalAccelerationInstance::BackendServer backendServersObject;
			if(!allGlobalAccelerationInstancesNodeBackendServersBackendServer["RegionId"].isNull())
				backendServersObject.regionId = allGlobalAccelerationInstancesNodeBackendServersBackendServer["RegionId"].asString();
			if(!allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerId"].isNull())
				backendServersObject.serverId = allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerId"].asString();
			if(!allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerIpAddress"].isNull())
				backendServersObject.serverIpAddress = allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerIpAddress"].asString();
			if(!allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerType"].isNull())
				backendServersObject.serverType = allGlobalAccelerationInstancesNodeBackendServersBackendServer["ServerType"].asString();
			globalAccelerationInstancesObject.backendServers.push_back(backendServersObject);
		}
		auto allPublicIpAddressesNode = allGlobalAccelerationInstancesNode["PublicIpAddresses"]["PublicIpAddress"];
		for (auto allGlobalAccelerationInstancesNodePublicIpAddressesPublicIpAddress : allPublicIpAddressesNode)
		{
			GlobalAccelerationInstance::PublicIpAddress publicIpAddressesObject;
			if(!allGlobalAccelerationInstancesNodePublicIpAddressesPublicIpAddress["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = allGlobalAccelerationInstancesNodePublicIpAddressesPublicIpAddress["AllocationId"].asString();
			if(!allGlobalAccelerationInstancesNodePublicIpAddressesPublicIpAddress["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = allGlobalAccelerationInstancesNodePublicIpAddressesPublicIpAddress["IpAddress"].asString();
			globalAccelerationInstancesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		globalAccelerationInstances_.push_back(globalAccelerationInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

