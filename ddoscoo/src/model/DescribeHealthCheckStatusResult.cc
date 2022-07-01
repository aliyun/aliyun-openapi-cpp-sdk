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

#include <alibabacloud/ddoscoo/model/DescribeHealthCheckStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeHealthCheckStatusResult::DescribeHealthCheckStatusResult() :
	ServiceResult()
{}

DescribeHealthCheckStatusResult::DescribeHealthCheckStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthCheckStatusResult::~DescribeHealthCheckStatusResult()
{}

void DescribeHealthCheckStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthCheckStatusNode = value["HealthCheckStatus"]["Status"];
	for (auto valueHealthCheckStatusStatus : allHealthCheckStatusNode)
	{
		Status healthCheckStatusObject;
		if(!valueHealthCheckStatusStatus["Status"].isNull())
			healthCheckStatusObject.status = valueHealthCheckStatusStatus["Status"].asString();
		if(!valueHealthCheckStatusStatus["FrontendPort"].isNull())
			healthCheckStatusObject.frontendPort = std::stoi(valueHealthCheckStatusStatus["FrontendPort"].asString());
		if(!valueHealthCheckStatusStatus["InstanceId"].isNull())
			healthCheckStatusObject.instanceId = valueHealthCheckStatusStatus["InstanceId"].asString();
		if(!valueHealthCheckStatusStatus["Protocol"].isNull())
			healthCheckStatusObject.protocol = valueHealthCheckStatusStatus["Protocol"].asString();
		auto allRealServerStatusListNode = valueHealthCheckStatusStatus["RealServerStatusList"]["RealServerStatus"];
		for (auto valueHealthCheckStatusStatusRealServerStatusListRealServerStatus : allRealServerStatusListNode)
		{
			Status::RealServerStatus realServerStatusListObject;
			if(!valueHealthCheckStatusStatusRealServerStatusListRealServerStatus["Status"].isNull())
				realServerStatusListObject.status = valueHealthCheckStatusStatusRealServerStatusListRealServerStatus["Status"].asString();
			if(!valueHealthCheckStatusStatusRealServerStatusListRealServerStatus["Address"].isNull())
				realServerStatusListObject.address = valueHealthCheckStatusStatusRealServerStatusListRealServerStatus["Address"].asString();
			healthCheckStatusObject.realServerStatusList.push_back(realServerStatusListObject);
		}
		healthCheckStatus_.push_back(healthCheckStatusObject);
	}

}

std::vector<DescribeHealthCheckStatusResult::Status> DescribeHealthCheckStatusResult::getHealthCheckStatus()const
{
	return healthCheckStatus_;
}

