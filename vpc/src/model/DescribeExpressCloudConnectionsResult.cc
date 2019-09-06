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

#include <alibabacloud/vpc/model/DescribeExpressCloudConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeExpressCloudConnectionsResult::DescribeExpressCloudConnectionsResult() :
	ServiceResult()
{}

DescribeExpressCloudConnectionsResult::DescribeExpressCloudConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressCloudConnectionsResult::~DescribeExpressCloudConnectionsResult()
{}

void DescribeExpressCloudConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExpressCloudConnectionSet = value["ExpressCloudConnectionSet"]["ExpressCloudConnectionType"];
	for (auto value : allExpressCloudConnectionSet)
	{
		ExpressCloudConnectionType expressCloudConnectionSetObject;
		if(!value["InstanceId"].isNull())
			expressCloudConnectionSetObject.instanceId = value["InstanceId"].asString();
		if(!value["Status"].isNull())
			expressCloudConnectionSetObject.status = value["Status"].asString();
		if(!value["Name"].isNull())
			expressCloudConnectionSetObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			expressCloudConnectionSetObject.description = value["Description"].asString();
		if(!value["GmtCreate"].isNull())
			expressCloudConnectionSetObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModify"].isNull())
			expressCloudConnectionSetObject.gmtModify = value["GmtModify"].asString();
		if(!value["PeerCity"].isNull())
			expressCloudConnectionSetObject.peerCity = value["PeerCity"].asString();
		if(!value["PeerLocation"].isNull())
			expressCloudConnectionSetObject.peerLocation = value["PeerLocation"].asString();
		if(!value["PortType"].isNull())
			expressCloudConnectionSetObject.portType = value["PortType"].asString();
		if(!value["Bandwidth"].isNull())
			expressCloudConnectionSetObject.bandwidth = std::stoi(value["Bandwidth"].asString());
		if(!value["Distance"].isNull())
			expressCloudConnectionSetObject.distance = std::stoi(value["Distance"].asString());
		if(!value["RedundantEccId"].isNull())
			expressCloudConnectionSetObject.redundantEccId = value["RedundantEccId"].asString();
		if(!value["CircuitCode"].isNull())
			expressCloudConnectionSetObject.circuitCode = value["CircuitCode"].asString();
		if(!value["Isp"].isNull())
			expressCloudConnectionSetObject.isp = value["Isp"].asString();
		if(!value["Type"].isNull())
			expressCloudConnectionSetObject.type = value["Type"].asString();
		if(!value["IdcSP"].isNull())
			expressCloudConnectionSetObject.idcSP = value["IdcSP"].asString();
		if(!value["BusinessStatus"].isNull())
			expressCloudConnectionSetObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["HasReservationData"].isNull())
			expressCloudConnectionSetObject.hasReservationData = value["HasReservationData"].asString();
		if(!value["ReservationBandwidth"].isNull())
			expressCloudConnectionSetObject.reservationBandwidth = value["ReservationBandwidth"].asString();
		if(!value["ReservationInternetChargeType"].isNull())
			expressCloudConnectionSetObject.reservationInternetChargeType = value["ReservationInternetChargeType"].asString();
		if(!value["ReservationActiveTime"].isNull())
			expressCloudConnectionSetObject.reservationActiveTime = value["ReservationActiveTime"].asString();
		if(!value["ReservationOrderType"].isNull())
			expressCloudConnectionSetObject.reservationOrderType = value["ReservationOrderType"].asString();
		if(!value["ApplicationType"].isNull())
			expressCloudConnectionSetObject.applicationType = value["ApplicationType"].asString();
		if(!value["ApplicationId"].isNull())
			expressCloudConnectionSetObject.applicationId = value["ApplicationId"].asString();
		if(!value["ApplicationStatus"].isNull())
			expressCloudConnectionSetObject.applicationStatus = value["ApplicationStatus"].asString();
		if(!value["ApplicationBandwidth"].isNull())
			expressCloudConnectionSetObject.applicationBandwidth = value["ApplicationBandwidth"].asString();
		if(!value["ContactTel"].isNull())
			expressCloudConnectionSetObject.contactTel = value["ContactTel"].asString();
		if(!value["ContactMail"].isNull())
			expressCloudConnectionSetObject.contactMail = value["ContactMail"].asString();
		if(!value["IDCardNo"].isNull())
			expressCloudConnectionSetObject.iDCardNo = value["IDCardNo"].asString();
		if(!value["EndTime"].isNull())
			expressCloudConnectionSetObject.endTime = value["EndTime"].asString();
		if(!value["ChargeType"].isNull())
			expressCloudConnectionSetObject.chargeType = value["ChargeType"].asString();
		auto allVirtualBorderRouterModels = value["VirtualBorderRouterModels"]["VirtualBorderRouterModel"];
		for (auto value : allVirtualBorderRouterModels)
		{
			ExpressCloudConnectionType::VirtualBorderRouterModel virtualBorderRouterModelsObject;
			if(!value["InstanceId"].isNull())
				virtualBorderRouterModelsObject.instanceId = value["InstanceId"].asString();
			if(!value["AccessPointId"].isNull())
				virtualBorderRouterModelsObject.accessPointId = value["AccessPointId"].asString();
			if(!value["PhysicalConnectionId"].isNull())
				virtualBorderRouterModelsObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
			expressCloudConnectionSetObject.virtualBorderRouterModels.push_back(virtualBorderRouterModelsObject);
		}
		expressCloudConnectionSet_.push_back(expressCloudConnectionSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeExpressCloudConnectionsResult::ExpressCloudConnectionType> DescribeExpressCloudConnectionsResult::getExpressCloudConnectionSet()const
{
	return expressCloudConnectionSet_;
}

int DescribeExpressCloudConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeExpressCloudConnectionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeExpressCloudConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

