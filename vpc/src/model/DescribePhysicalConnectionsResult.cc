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

#include <alibabacloud/vpc/model/DescribePhysicalConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribePhysicalConnectionsResult::DescribePhysicalConnectionsResult() :
	ServiceResult()
{}

DescribePhysicalConnectionsResult::DescribePhysicalConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePhysicalConnectionsResult::~DescribePhysicalConnectionsResult()
{}

void DescribePhysicalConnectionsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPhysicalConnectionSet = value["PhysicalConnectionSet"]["PhysicalConnectionType"];
	for (auto value : allPhysicalConnectionSet)
	{
		PhysicalConnectionType physicalConnectionSetObject;
		if(!value["PhysicalConnectionId"].isNull())
			physicalConnectionSetObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
		if(!value["AccessPointId"].isNull())
			physicalConnectionSetObject.accessPointId = value["AccessPointId"].asString();
		if(!value["Type"].isNull())
			physicalConnectionSetObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			physicalConnectionSetObject.status = value["Status"].asString();
		if(!value["BusinessStatus"].isNull())
			physicalConnectionSetObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["CreationTime"].isNull())
			physicalConnectionSetObject.creationTime = value["CreationTime"].asString();
		if(!value["EnabledTime"].isNull())
			physicalConnectionSetObject.enabledTime = value["EnabledTime"].asString();
		if(!value["LineOperator"].isNull())
			physicalConnectionSetObject.lineOperator = value["LineOperator"].asString();
		if(!value["Spec"].isNull())
			physicalConnectionSetObject.spec = value["Spec"].asString();
		if(!value["PeerLocation"].isNull())
			physicalConnectionSetObject.peerLocation = value["PeerLocation"].asString();
		if(!value["PortType"].isNull())
			physicalConnectionSetObject.portType = value["PortType"].asString();
		if(!value["RedundantPhysicalConnectionId"].isNull())
			physicalConnectionSetObject.redundantPhysicalConnectionId = value["RedundantPhysicalConnectionId"].asString();
		if(!value["Name"].isNull())
			physicalConnectionSetObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			physicalConnectionSetObject.description = value["Description"].asString();
		if(!value["AdLocation"].isNull())
			physicalConnectionSetObject.adLocation = value["AdLocation"].asString();
		if(!value["PortNumber"].isNull())
			physicalConnectionSetObject.portNumber = value["PortNumber"].asString();
		if(!value["CircuitCode"].isNull())
			physicalConnectionSetObject.circuitCode = value["CircuitCode"].asString();
		if(!value["Bandwidth"].isNull())
			physicalConnectionSetObject.bandwidth = std::stol(value["Bandwidth"].asString());
		if(!value["LoaStatus"].isNull())
			physicalConnectionSetObject.loaStatus = value["LoaStatus"].asString();
		if(!value["Spec"].isNull())
			physicalConnectionSetObject.spec1 = value["Spec"].asString();
		if(!value["HasReservationData"].isNull())
			physicalConnectionSetObject.hasReservationData = value["HasReservationData"].asString();
		if(!value["ReservationInternetChargeType"].isNull())
			physicalConnectionSetObject.reservationInternetChargeType = value["ReservationInternetChargeType"].asString();
		if(!value["ReservationActiveTime"].isNull())
			physicalConnectionSetObject.reservationActiveTime = value["ReservationActiveTime"].asString();
		if(!value["ReservationOrderType"].isNull())
			physicalConnectionSetObject.reservationOrderType = value["ReservationOrderType"].asString();
		if(!value["EndTime"].isNull())
			physicalConnectionSetObject.endTime = value["EndTime"].asString();
		if(!value["ChargeType"].isNull())
			physicalConnectionSetObject.chargeType = value["ChargeType"].asString();
		physicalConnectionSet_.push_back(physicalConnectionSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribePhysicalConnectionsResult::PhysicalConnectionType> DescribePhysicalConnectionsResult::getPhysicalConnectionSet()const
{
	return physicalConnectionSet_;
}

int DescribePhysicalConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePhysicalConnectionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribePhysicalConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

