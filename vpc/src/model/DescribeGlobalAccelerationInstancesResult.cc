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
		GlobalAccelerationInstance globalAccelerationInstancesObject;
		if(!value["RegionId"].isNull())
			globalAccelerationInstancesObject.regionId = value["RegionId"].asString();
		if(!value["GlobalAccelerationInstanceId"].isNull())
			globalAccelerationInstancesObject.globalAccelerationInstanceId = value["GlobalAccelerationInstanceId"].asString();
		if(!value["IpAddress"].isNull())
			globalAccelerationInstancesObject.ipAddress = value["IpAddress"].asString();
		if(!value["Status"].isNull())
			globalAccelerationInstancesObject.status = value["Status"].asString();
		if(!value["Bandwidth"].isNull())
			globalAccelerationInstancesObject.bandwidth = value["Bandwidth"].asString();
		if(!value["InternetChargeType"].isNull())
			globalAccelerationInstancesObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["ChargeType"].isNull())
			globalAccelerationInstancesObject.chargeType = value["ChargeType"].asString();
		if(!value["BandwidthType"].isNull())
			globalAccelerationInstancesObject.bandwidthType = value["BandwidthType"].asString();
		if(!value["AccelerationLocation"].isNull())
			globalAccelerationInstancesObject.accelerationLocation = value["AccelerationLocation"].asString();
		if(!value["ServiceLocation"].isNull())
			globalAccelerationInstancesObject.serviceLocation = value["ServiceLocation"].asString();
		if(!value["Name"].isNull())
			globalAccelerationInstancesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			globalAccelerationInstancesObject.description = value["Description"].asString();
		if(!value["ExpiredTime"].isNull())
			globalAccelerationInstancesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["CreationTime"].isNull())
			globalAccelerationInstancesObject.creationTime = value["CreationTime"].asString();
		if(!value["HasReservationData"].isNull())
			globalAccelerationInstancesObject.hasReservationData = value["HasReservationData"].asString();
		if(!value["ReservationBandwidth"].isNull())
			globalAccelerationInstancesObject.reservationBandwidth = value["ReservationBandwidth"].asString();
		if(!value["ReservationInternetChargeType"].isNull())
			globalAccelerationInstancesObject.reservationInternetChargeType = value["ReservationInternetChargeType"].asString();
		if(!value["ReservationActiveTime"].isNull())
			globalAccelerationInstancesObject.reservationActiveTime = value["ReservationActiveTime"].asString();
		if(!value["ReservationOrderType"].isNull())
			globalAccelerationInstancesObject.reservationOrderType = value["ReservationOrderType"].asString();
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			GlobalAccelerationInstance::LockReason operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			globalAccelerationInstancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allBackendServers = value["BackendServers"]["BackendServer"];
		for (auto value : allBackendServers)
		{
			GlobalAccelerationInstance::BackendServer backendServersObject;
			if(!value["RegionId"].isNull())
				backendServersObject.regionId = value["RegionId"].asString();
			if(!value["ServerId"].isNull())
				backendServersObject.serverId = value["ServerId"].asString();
			if(!value["ServerIpAddress"].isNull())
				backendServersObject.serverIpAddress = value["ServerIpAddress"].asString();
			if(!value["ServerType"].isNull())
				backendServersObject.serverType = value["ServerType"].asString();
			globalAccelerationInstancesObject.backendServers.push_back(backendServersObject);
		}
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddress"];
		for (auto value : allPublicIpAddresses)
		{
			GlobalAccelerationInstance::PublicIpAddress publicIpAddressesObject;
			if(!value["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = value["AllocationId"].asString();
			if(!value["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = value["IpAddress"].asString();
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

