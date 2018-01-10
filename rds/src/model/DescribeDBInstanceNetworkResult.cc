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
		TopologyItem topologyItemObject;
		topologyItemObject.startPoint = value["StartPoint"].asString();
		topologyItemObject.endPoint = value["EndPoint"].asString();
		topologyItemObject.networkTrafficIn = value["NetworkTrafficIn"].asString();
		topologyItemObject.networkTrafficOut = value["NetworkTrafficOut"].asString();
		topologyItemObject.networkLatency = value["NetworkLatency"].asString();
		topologyItemObject.backendLatency = value["BackendLatency"].asString();
		topologyItemObject.networkErrors = value["NetworkErrors"].asString();
		topology_.push_back(topologyItemObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDBInstanceNetworkResult::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstanceNetworkResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDBInstanceNetworkResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceNetworkResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeDBInstanceNetworkResult::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstanceNetworkResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

