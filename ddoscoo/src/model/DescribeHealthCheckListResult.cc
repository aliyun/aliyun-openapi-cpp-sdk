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
	auto allHealthCheckListNode = value["HealthCheckList"]["HealthCheckItem"];
	for (auto valueHealthCheckListHealthCheckItem : allHealthCheckListNode)
	{
		HealthCheckItem healthCheckListObject;
		if(!valueHealthCheckListHealthCheckItem["FrontendPort"].isNull())
			healthCheckListObject.frontendPort = std::stoi(valueHealthCheckListHealthCheckItem["FrontendPort"].asString());
		if(!valueHealthCheckListHealthCheckItem["InstanceId"].isNull())
			healthCheckListObject.instanceId = valueHealthCheckListHealthCheckItem["InstanceId"].asString();
		if(!valueHealthCheckListHealthCheckItem["Protocol"].isNull())
			healthCheckListObject.protocol = valueHealthCheckListHealthCheckItem["Protocol"].asString();
		auto healthCheckNode = value["HealthCheck"];
		if(!healthCheckNode["Timeout"].isNull())
			healthCheckListObject.healthCheck.timeout = std::stoi(healthCheckNode["Timeout"].asString());
		if(!healthCheckNode["Type"].isNull())
			healthCheckListObject.healthCheck.type = healthCheckNode["Type"].asString();
		if(!healthCheckNode["Domain"].isNull())
			healthCheckListObject.healthCheck.domain = healthCheckNode["Domain"].asString();
		if(!healthCheckNode["Interval"].isNull())
			healthCheckListObject.healthCheck.interval = std::stoi(healthCheckNode["Interval"].asString());
		if(!healthCheckNode["Up"].isNull())
			healthCheckListObject.healthCheck.up = std::stoi(healthCheckNode["Up"].asString());
		if(!healthCheckNode["Down"].isNull())
			healthCheckListObject.healthCheck.down = std::stoi(healthCheckNode["Down"].asString());
		if(!healthCheckNode["Port"].isNull())
			healthCheckListObject.healthCheck.port = std::stoi(healthCheckNode["Port"].asString());
		if(!healthCheckNode["Uri"].isNull())
			healthCheckListObject.healthCheck.uri = healthCheckNode["Uri"].asString();
		healthCheckList_.push_back(healthCheckListObject);
	}

}

std::vector<DescribeHealthCheckListResult::HealthCheckItem> DescribeHealthCheckListResult::getHealthCheckList()const
{
	return healthCheckList_;
}

