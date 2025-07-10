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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhysicalConnectionSetNode = value["PhysicalConnectionSet"]["PhysicalConnectionType"];
	for (auto valuePhysicalConnectionSetPhysicalConnectionType : allPhysicalConnectionSetNode)
	{
		PhysicalConnectionType physicalConnectionSetObject;
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Type"].isNull())
			physicalConnectionSetObject.type = valuePhysicalConnectionSetPhysicalConnectionType["Type"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Status"].isNull())
			physicalConnectionSetObject.status = valuePhysicalConnectionSetPhysicalConnectionType["Status"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["CreationTime"].isNull())
			physicalConnectionSetObject.creationTime = valuePhysicalConnectionSetPhysicalConnectionType["CreationTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AdLocation"].isNull())
			physicalConnectionSetObject.adLocation = valuePhysicalConnectionSetPhysicalConnectionType["AdLocation"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ReservationActiveTime"].isNull())
			physicalConnectionSetObject.reservationActiveTime = valuePhysicalConnectionSetPhysicalConnectionType["ReservationActiveTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ReservationOrderType"].isNull())
			physicalConnectionSetObject.reservationOrderType = valuePhysicalConnectionSetPhysicalConnectionType["ReservationOrderType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PortNumber"].isNull())
			physicalConnectionSetObject.portNumber = valuePhysicalConnectionSetPhysicalConnectionType["PortNumber"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Spec"].isNull())
			physicalConnectionSetObject.spec = valuePhysicalConnectionSetPhysicalConnectionType["Spec"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ChargeType"].isNull())
			physicalConnectionSetObject.chargeType = valuePhysicalConnectionSetPhysicalConnectionType["ChargeType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ReservationInternetChargeType"].isNull())
			physicalConnectionSetObject.reservationInternetChargeType = valuePhysicalConnectionSetPhysicalConnectionType["ReservationInternetChargeType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Description"].isNull())
			physicalConnectionSetObject.description = valuePhysicalConnectionSetPhysicalConnectionType["Description"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Bandwidth"].isNull())
			physicalConnectionSetObject.bandwidth = std::stol(valuePhysicalConnectionSetPhysicalConnectionType["Bandwidth"].asString());
		if(!valuePhysicalConnectionSetPhysicalConnectionType["EnabledTime"].isNull())
			physicalConnectionSetObject.enabledTime = valuePhysicalConnectionSetPhysicalConnectionType["EnabledTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["LineOperator"].isNull())
			physicalConnectionSetObject.lineOperator = valuePhysicalConnectionSetPhysicalConnectionType["LineOperator"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PeerLocation"].isNull())
			physicalConnectionSetObject.peerLocation = valuePhysicalConnectionSetPhysicalConnectionType["PeerLocation"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["RedundantPhysicalConnectionId"].isNull())
			physicalConnectionSetObject.redundantPhysicalConnectionId = valuePhysicalConnectionSetPhysicalConnectionType["RedundantPhysicalConnectionId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Name"].isNull())
			physicalConnectionSetObject.name = valuePhysicalConnectionSetPhysicalConnectionType["Name"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["CircuitCode"].isNull())
			physicalConnectionSetObject.circuitCode = valuePhysicalConnectionSetPhysicalConnectionType["CircuitCode"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["EndTime"].isNull())
			physicalConnectionSetObject.endTime = valuePhysicalConnectionSetPhysicalConnectionType["EndTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PortType"].isNull())
			physicalConnectionSetObject.portType = valuePhysicalConnectionSetPhysicalConnectionType["PortType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["BusinessStatus"].isNull())
			physicalConnectionSetObject.businessStatus = valuePhysicalConnectionSetPhysicalConnectionType["BusinessStatus"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["LoaStatus"].isNull())
			physicalConnectionSetObject.loaStatus = valuePhysicalConnectionSetPhysicalConnectionType["LoaStatus"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AccessPointId"].isNull())
			physicalConnectionSetObject.accessPointId = valuePhysicalConnectionSetPhysicalConnectionType["AccessPointId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AccessPointType"].isNull())
			physicalConnectionSetObject.accessPointType = valuePhysicalConnectionSetPhysicalConnectionType["AccessPointType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["HasReservationData"].isNull())
			physicalConnectionSetObject.hasReservationData = valuePhysicalConnectionSetPhysicalConnectionType["HasReservationData"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PhysicalConnectionId"].isNull())
			physicalConnectionSetObject.physicalConnectionId = valuePhysicalConnectionSetPhysicalConnectionType["PhysicalConnectionId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ProductType"].isNull())
			physicalConnectionSetObject.productType = valuePhysicalConnectionSetPhysicalConnectionType["ProductType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["VirtualPhysicalConnectionCount"].isNull())
			physicalConnectionSetObject.virtualPhysicalConnectionCount = std::stoi(valuePhysicalConnectionSetPhysicalConnectionType["VirtualPhysicalConnectionCount"].asString());
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ParentPhysicalConnectionId"].isNull())
			physicalConnectionSetObject.parentPhysicalConnectionId = valuePhysicalConnectionSetPhysicalConnectionType["ParentPhysicalConnectionId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ParentPhysicalConnectionAliUid"].isNull())
			physicalConnectionSetObject.parentPhysicalConnectionAliUid = std::stol(valuePhysicalConnectionSetPhysicalConnectionType["ParentPhysicalConnectionAliUid"].asString());
		if(!valuePhysicalConnectionSetPhysicalConnectionType["VlanId"].isNull())
			physicalConnectionSetObject.vlanId = valuePhysicalConnectionSetPhysicalConnectionType["VlanId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["OrderMode"].isNull())
			physicalConnectionSetObject.orderMode = valuePhysicalConnectionSetPhysicalConnectionType["OrderMode"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["VpconnStatus"].isNull())
			physicalConnectionSetObject.vpconnStatus = valuePhysicalConnectionSetPhysicalConnectionType["VpconnStatus"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ExpectSpec"].isNull())
			physicalConnectionSetObject.expectSpec = valuePhysicalConnectionSetPhysicalConnectionType["ExpectSpec"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["ResourceGroupId"].isNull())
			physicalConnectionSetObject.resourceGroupId = valuePhysicalConnectionSetPhysicalConnectionType["ResourceGroupId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AdDetailLocation"].isNull())
			physicalConnectionSetObject.adDetailLocation = valuePhysicalConnectionSetPhysicalConnectionType["AdDetailLocation"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["QosId"].isNull())
			physicalConnectionSetObject.qosId = valuePhysicalConnectionSetPhysicalConnectionType["QosId"].asString();
		auto allTagsNode = valuePhysicalConnectionSetPhysicalConnectionType["Tags"]["tagsItem"];
		for (auto valuePhysicalConnectionSetPhysicalConnectionTypeTagstagsItem : allTagsNode)
		{
			PhysicalConnectionType::TagsItem tagsObject;
			if(!valuePhysicalConnectionSetPhysicalConnectionTypeTagstagsItem["Key"].isNull())
				tagsObject.key = valuePhysicalConnectionSetPhysicalConnectionTypeTagstagsItem["Key"].asString();
			if(!valuePhysicalConnectionSetPhysicalConnectionTypeTagstagsItem["Value"].isNull())
				tagsObject.value = valuePhysicalConnectionSetPhysicalConnectionTypeTagstagsItem["Value"].asString();
			physicalConnectionSetObject.tags.push_back(tagsObject);
		}
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

