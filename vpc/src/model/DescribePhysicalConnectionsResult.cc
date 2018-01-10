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
	auto allPhysicalConnectionSet = value["PhysicalConnectionSet"]["PhysicalConnectionType"];
	for (auto value : allPhysicalConnectionSet)
	{
		PhysicalConnectionType physicalConnectionTypeObject;
		physicalConnectionTypeObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
		physicalConnectionTypeObject.accessPointId = value["AccessPointId"].asString();
		physicalConnectionTypeObject.type = value["Type"].asString();
		physicalConnectionTypeObject.status = value["Status"].asString();
		physicalConnectionTypeObject.businessStatus = value["BusinessStatus"].asString();
		physicalConnectionTypeObject.creationTime = value["CreationTime"].asString();
		physicalConnectionTypeObject.enabledTime = value["EnabledTime"].asString();
		physicalConnectionTypeObject.lineOperator = value["LineOperator"].asString();
		physicalConnectionTypeObject.spec = value["Spec"].asString();
		physicalConnectionTypeObject.peerLocation = value["PeerLocation"].asString();
		physicalConnectionTypeObject.portType = value["PortType"].asString();
		physicalConnectionTypeObject.redundantPhysicalConnectionId = value["RedundantPhysicalConnectionId"].asString();
		physicalConnectionTypeObject.name = value["Name"].asString();
		physicalConnectionTypeObject.description = value["Description"].asString();
		physicalConnectionTypeObject.adLocation = value["AdLocation"].asString();
		physicalConnectionTypeObject.portNumber = value["PortNumber"].asString();
		physicalConnectionTypeObject.circuitCode = value["CircuitCode"].asString();
		physicalConnectionTypeObject.bandwidth = std::stol(value["Bandwidth"].asString());
		physicalConnectionSet_.push_back(physicalConnectionTypeObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribePhysicalConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribePhysicalConnectionsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribePhysicalConnectionsResult::getPageSize()const
{
	return pageSize_;
}

void DescribePhysicalConnectionsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribePhysicalConnectionsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribePhysicalConnectionsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

