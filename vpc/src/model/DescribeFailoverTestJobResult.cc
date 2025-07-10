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

#include <alibabacloud/vpc/model/DescribeFailoverTestJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeFailoverTestJobResult::DescribeFailoverTestJobResult() :
	ServiceResult()
{}

DescribeFailoverTestJobResult::DescribeFailoverTestJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFailoverTestJobResult::~DescribeFailoverTestJobResult()
{}

void DescribeFailoverTestJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto failoverTestJobModelNode = value["FailoverTestJobModel"];
	if(!failoverTestJobModelNode["JobId"].isNull())
		failoverTestJobModel_.jobId = failoverTestJobModelNode["JobId"].asString();
	if(!failoverTestJobModelNode["Name"].isNull())
		failoverTestJobModel_.name = failoverTestJobModelNode["Name"].asString();
	if(!failoverTestJobModelNode["Description"].isNull())
		failoverTestJobModel_.description = failoverTestJobModelNode["Description"].asString();
	if(!failoverTestJobModelNode["ResourceType"].isNull())
		failoverTestJobModel_.resourceType = failoverTestJobModelNode["ResourceType"].asString();
	if(!failoverTestJobModelNode["JobType"].isNull())
		failoverTestJobModel_.jobType = failoverTestJobModelNode["JobType"].asString();
	if(!failoverTestJobModelNode["JobDuration"].isNull())
		failoverTestJobModel_.jobDuration = failoverTestJobModelNode["JobDuration"].asString();
	if(!failoverTestJobModelNode["StartTime"].isNull())
		failoverTestJobModel_.startTime = failoverTestJobModelNode["StartTime"].asString();
	if(!failoverTestJobModelNode["StopTime"].isNull())
		failoverTestJobModel_.stopTime = failoverTestJobModelNode["StopTime"].asString();
	if(!failoverTestJobModelNode["Status"].isNull())
		failoverTestJobModel_.status = failoverTestJobModelNode["Status"].asString();
		auto allResourceId = failoverTestJobModelNode["ResourceId"]["ResourceId"];
		for (auto value : allResourceId)
			failoverTestJobModel_.resourceId.push_back(value.asString());

}

DescribeFailoverTestJobResult::FailoverTestJobModel DescribeFailoverTestJobResult::getFailoverTestJobModel()const
{
	return failoverTestJobModel_;
}

