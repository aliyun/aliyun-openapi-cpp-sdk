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

#include <alibabacloud/ddoscoo/model/DescribeHealthCheckListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeHealthCheckListResult::DescribeHealthCheckListResult() :
	ServiceResult()
{}

DescribeHealthCheckListResult::DescribeHealthCheckListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthCheckListResult::~DescribeHealthCheckListResult()
{}

void DescribeHealthCheckListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["InstanceId"].isNull())
			listenersObject.instanceId = valueListenersListener["InstanceId"].asString();
		if(!valueListenersListener["Protocol"].isNull())
			listenersObject.protocol = valueListenersListener["Protocol"].asString();
		if(!valueListenersListener["FrontendPort"].isNull())
			listenersObject.frontendPort = std::stoi(valueListenersListener["FrontendPort"].asString());
		auto healthCheckNode = value["HealthCheck"];
		if(!healthCheckNode["Type"].isNull())
			listenersObject.healthCheck.type = healthCheckNode["Type"].asString();
		if(!healthCheckNode["Domain"].isNull())
			listenersObject.healthCheck.domain = healthCheckNode["Domain"].asString();
		if(!healthCheckNode["Uri"].isNull())
			listenersObject.healthCheck.uri = healthCheckNode["Uri"].asString();
		if(!healthCheckNode["Down"].isNull())
			listenersObject.healthCheck.down = std::stoi(healthCheckNode["Down"].asString());
		if(!healthCheckNode["Interval"].isNull())
			listenersObject.healthCheck.interval = std::stoi(healthCheckNode["Interval"].asString());
		if(!healthCheckNode["Port"].isNull())
			listenersObject.healthCheck.port = std::stoi(healthCheckNode["Port"].asString());
		if(!healthCheckNode["Timeout"].isNull())
			listenersObject.healthCheck.timeout = std::stoi(healthCheckNode["Timeout"].asString());
		if(!healthCheckNode["Up"].isNull())
			listenersObject.healthCheck.up = std::stoi(healthCheckNode["Up"].asString());
		listeners_.push_back(listenersObject);
	}

}

std::vector<DescribeHealthCheckListResult::Listener> DescribeHealthCheckListResult::getListeners()const
{
	return listeners_;
}

