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

#include <alibabacloud/ecs/model/DescribePhysicalConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AdLocation"].isNull())
			physicalConnectionSetObject.adLocation = valuePhysicalConnectionSetPhysicalConnectionType["AdLocation"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["CreationTime"].isNull())
			physicalConnectionSetObject.creationTime = valuePhysicalConnectionSetPhysicalConnectionType["CreationTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Status"].isNull())
			physicalConnectionSetObject.status = valuePhysicalConnectionSetPhysicalConnectionType["Status"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Type"].isNull())
			physicalConnectionSetObject.type = valuePhysicalConnectionSetPhysicalConnectionType["Type"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PortNumber"].isNull())
			physicalConnectionSetObject.portNumber = valuePhysicalConnectionSetPhysicalConnectionType["PortNumber"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["CircuitCode"].isNull())
			physicalConnectionSetObject.circuitCode = valuePhysicalConnectionSetPhysicalConnectionType["CircuitCode"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Spec"].isNull())
			physicalConnectionSetObject.spec = valuePhysicalConnectionSetPhysicalConnectionType["Spec"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Bandwidth"].isNull())
			physicalConnectionSetObject.bandwidth = std::stol(valuePhysicalConnectionSetPhysicalConnectionType["Bandwidth"].asString());
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Description"].isNull())
			physicalConnectionSetObject.description = valuePhysicalConnectionSetPhysicalConnectionType["Description"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PortType"].isNull())
			physicalConnectionSetObject.portType = valuePhysicalConnectionSetPhysicalConnectionType["PortType"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["EnabledTime"].isNull())
			physicalConnectionSetObject.enabledTime = valuePhysicalConnectionSetPhysicalConnectionType["EnabledTime"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["BusinessStatus"].isNull())
			physicalConnectionSetObject.businessStatus = valuePhysicalConnectionSetPhysicalConnectionType["BusinessStatus"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["LineOperator"].isNull())
			physicalConnectionSetObject.lineOperator = valuePhysicalConnectionSetPhysicalConnectionType["LineOperator"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["Name"].isNull())
			physicalConnectionSetObject.name = valuePhysicalConnectionSetPhysicalConnectionType["Name"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["RedundantPhysicalConnectionId"].isNull())
			physicalConnectionSetObject.redundantPhysicalConnectionId = valuePhysicalConnectionSetPhysicalConnectionType["RedundantPhysicalConnectionId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PeerLocation"].isNull())
			physicalConnectionSetObject.peerLocation = valuePhysicalConnectionSetPhysicalConnectionType["PeerLocation"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["AccessPointId"].isNull())
			physicalConnectionSetObject.accessPointId = valuePhysicalConnectionSetPhysicalConnectionType["AccessPointId"].asString();
		if(!valuePhysicalConnectionSetPhysicalConnectionType["PhysicalConnectionId"].isNull())
			physicalConnectionSetObject.physicalConnectionId = valuePhysicalConnectionSetPhysicalConnectionType["PhysicalConnectionId"].asString();
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

