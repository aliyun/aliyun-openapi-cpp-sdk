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

#include <alibabacloud/vs/model/DescribeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeClusterResult::DescribeClusterResult() :
	ServiceResult()
{}

DescribeClusterResult::DescribeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResult::~DescribeClusterResult()
{}

void DescribeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInternalPortsNode = value["InternalPorts"]["InternalPort"];
	for (auto valueInternalPortsInternalPort : allInternalPortsNode)
	{
		InternalPort internalPortsObject;
		if(!valueInternalPortsInternalPort["Platform"].isNull())
			internalPortsObject.platform = valueInternalPortsInternalPort["Platform"].asString();
		if(!valueInternalPortsInternalPort["IpProtocol"].isNull())
			internalPortsObject.ipProtocol = valueInternalPortsInternalPort["IpProtocol"].asString();
		auto allPort = value["Port"]["Port"];
		for (auto value : allPort)
			internalPortsObject.port.push_back(value.asString());
		internalPorts_.push_back(internalPortsObject);
	}
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["MaintainTime"].isNull())
		maintainTime_ = value["MaintainTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeClusterResult::getStatus()const
{
	return status_;
}

std::string DescribeClusterResult::getDescription()const
{
	return description_;
}

std::string DescribeClusterResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeClusterResult::getMaintainTime()const
{
	return maintainTime_;
}

std::vector<DescribeClusterResult::InternalPort> DescribeClusterResult::getInternalPorts()const
{
	return internalPorts_;
}

std::string DescribeClusterResult::getName()const
{
	return name_;
}

