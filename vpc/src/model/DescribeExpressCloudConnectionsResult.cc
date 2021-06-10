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
	auto allExpressCloudConnectionSetNode = value["ExpressCloudConnectionSet"]["ExpressCloudConnectionType"];
	for (auto valueExpressCloudConnectionSetExpressCloudConnectionType : allExpressCloudConnectionSetNode)
	{
		ExpressCloudConnectionType expressCloudConnectionSetObject;
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["InstanceId"].isNull())
			expressCloudConnectionSetObject.instanceId = valueExpressCloudConnectionSetExpressCloudConnectionType["InstanceId"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Status"].isNull())
			expressCloudConnectionSetObject.status = valueExpressCloudConnectionSetExpressCloudConnectionType["Status"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Name"].isNull())
			expressCloudConnectionSetObject.name = valueExpressCloudConnectionSetExpressCloudConnectionType["Name"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Description"].isNull())
			expressCloudConnectionSetObject.description = valueExpressCloudConnectionSetExpressCloudConnectionType["Description"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["GmtCreate"].isNull())
			expressCloudConnectionSetObject.gmtCreate = valueExpressCloudConnectionSetExpressCloudConnectionType["GmtCreate"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["GmtModify"].isNull())
			expressCloudConnectionSetObject.gmtModify = valueExpressCloudConnectionSetExpressCloudConnectionType["GmtModify"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["PeerCity"].isNull())
			expressCloudConnectionSetObject.peerCity = valueExpressCloudConnectionSetExpressCloudConnectionType["PeerCity"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["PeerLocation"].isNull())
			expressCloudConnectionSetObject.peerLocation = valueExpressCloudConnectionSetExpressCloudConnectionType["PeerLocation"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["PortType"].isNull())
			expressCloudConnectionSetObject.portType = valueExpressCloudConnectionSetExpressCloudConnectionType["PortType"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Bandwidth"].isNull())
			expressCloudConnectionSetObject.bandwidth = std::stoi(valueExpressCloudConnectionSetExpressCloudConnectionType["Bandwidth"].asString());
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Distance"].isNull())
			expressCloudConnectionSetObject.distance = std::stoi(valueExpressCloudConnectionSetExpressCloudConnectionType["Distance"].asString());
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["RedundantEccId"].isNull())
			expressCloudConnectionSetObject.redundantEccId = valueExpressCloudConnectionSetExpressCloudConnectionType["RedundantEccId"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["CircuitCode"].isNull())
			expressCloudConnectionSetObject.circuitCode = valueExpressCloudConnectionSetExpressCloudConnectionType["CircuitCode"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Isp"].isNull())
			expressCloudConnectionSetObject.isp = valueExpressCloudConnectionSetExpressCloudConnectionType["Isp"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["Type"].isNull())
			expressCloudConnectionSetObject.type = valueExpressCloudConnectionSetExpressCloudConnectionType["Type"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["IdcSP"].isNull())
			expressCloudConnectionSetObject.idcSP = valueExpressCloudConnectionSetExpressCloudConnectionType["IdcSP"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["BusinessStatus"].isNull())
			expressCloudConnectionSetObject.businessStatus = valueExpressCloudConnectionSetExpressCloudConnectionType["BusinessStatus"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["HasReservationData"].isNull())
			expressCloudConnectionSetObject.hasReservationData = valueExpressCloudConnectionSetExpressCloudConnectionType["HasReservationData"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationBandwidth"].isNull())
			expressCloudConnectionSetObject.reservationBandwidth = valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationBandwidth"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationInternetChargeType"].isNull())
			expressCloudConnectionSetObject.reservationInternetChargeType = valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationInternetChargeType"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationActiveTime"].isNull())
			expressCloudConnectionSetObject.reservationActiveTime = valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationActiveTime"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationOrderType"].isNull())
			expressCloudConnectionSetObject.reservationOrderType = valueExpressCloudConnectionSetExpressCloudConnectionType["ReservationOrderType"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationType"].isNull())
			expressCloudConnectionSetObject.applicationType = valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationType"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationId"].isNull())
			expressCloudConnectionSetObject.applicationId = valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationId"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationStatus"].isNull())
			expressCloudConnectionSetObject.applicationStatus = valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationStatus"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationBandwidth"].isNull())
			expressCloudConnectionSetObject.applicationBandwidth = valueExpressCloudConnectionSetExpressCloudConnectionType["ApplicationBandwidth"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["EndTime"].isNull())
			expressCloudConnectionSetObject.endTime = valueExpressCloudConnectionSetExpressCloudConnectionType["EndTime"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ChargeType"].isNull())
			expressCloudConnectionSetObject.chargeType = valueExpressCloudConnectionSetExpressCloudConnectionType["ChargeType"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ContactTel"].isNull())
			expressCloudConnectionSetObject.contactTel = valueExpressCloudConnectionSetExpressCloudConnectionType["ContactTel"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ContactMail"].isNull())
			expressCloudConnectionSetObject.contactMail = valueExpressCloudConnectionSetExpressCloudConnectionType["ContactMail"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["IDCardNo"].isNull())
			expressCloudConnectionSetObject.iDCardNo = valueExpressCloudConnectionSetExpressCloudConnectionType["IDCardNo"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["EstimatedTime"].isNull())
			expressCloudConnectionSetObject.estimatedTime = valueExpressCloudConnectionSetExpressCloudConnectionType["EstimatedTime"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["BgpAs"].isNull())
			expressCloudConnectionSetObject.bgpAs = valueExpressCloudConnectionSetExpressCloudConnectionType["BgpAs"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["PeIp"].isNull())
			expressCloudConnectionSetObject.peIp = valueExpressCloudConnectionSetExpressCloudConnectionType["PeIp"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["CeIp"].isNull())
			expressCloudConnectionSetObject.ceIp = valueExpressCloudConnectionSetExpressCloudConnectionType["CeIp"].asString();
		if(!valueExpressCloudConnectionSetExpressCloudConnectionType["ConstructionPeriod"].isNull())
			expressCloudConnectionSetObject.constructionPeriod = valueExpressCloudConnectionSetExpressCloudConnectionType["ConstructionPeriod"].asString();
		auto allVirtualBorderRouterModelsNode = valueExpressCloudConnectionSetExpressCloudConnectionType["VirtualBorderRouterModels"]["VirtualBorderRouterModel"];
		for (auto valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel : allVirtualBorderRouterModelsNode)
		{
			ExpressCloudConnectionType::VirtualBorderRouterModel virtualBorderRouterModelsObject;
			if(!valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["InstanceId"].isNull())
				virtualBorderRouterModelsObject.instanceId = valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["InstanceId"].asString();
			if(!valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["AccessPointId"].isNull())
				virtualBorderRouterModelsObject.accessPointId = valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["AccessPointId"].asString();
			if(!valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["PhysicalConnectionId"].isNull())
				virtualBorderRouterModelsObject.physicalConnectionId = valueExpressCloudConnectionSetExpressCloudConnectionTypeVirtualBorderRouterModelsVirtualBorderRouterModel["PhysicalConnectionId"].asString();
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

