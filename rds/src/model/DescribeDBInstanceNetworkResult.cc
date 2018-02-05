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

#include <alibabacloud/rds/model/DescribeDBInstanceNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceNetworkResult::DescribeDBInstanceNetworkResult() :
	ServiceResult()
{}

DescribeDBInstanceNetworkResult::DescribeDBInstanceNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceNetworkResult::~DescribeDBInstanceNetworkResult()
{}

void DescribeDBInstanceNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTopology = value["Topology"]["TopologyItem"];
	for (auto value : allTopology)
	{
		TopologyItem topologyObject;
		if(!value["StartPoint"].isNull())
			topologyObject.startPoint = value["StartPoint"].asString();
		if(!value["EndPoint"].isNull())
			topologyObject.endPoint = value["EndPoint"].asString();
		if(!value["NetworkTrafficIn"].isNull())
			topologyObject.networkTrafficIn = value["NetworkTrafficIn"].asString();
		if(!value["NetworkTrafficOut"].isNull())
			topologyObject.networkTrafficOut = value["NetworkTrafficOut"].asString();
		if(!value["NetworkLatency"].isNull())
			topologyObject.networkLatency = value["NetworkLatency"].asString();
		if(!value["BackendLatency"].isNull())
			topologyObject.backendLatency = value["BackendLatency"].asString();
		if(!value["NetworkErrors"].isNull())
			topologyObject.networkErrors = value["NetworkErrors"].asString();
		topology_.push_back(topologyObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDBInstanceNetworkResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBInstanceNetworkResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstanceNetworkResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDBInstanceNetworkResult::TopologyItem> DescribeDBInstanceNetworkResult::getTopology()const
{
	return topology_;
}

