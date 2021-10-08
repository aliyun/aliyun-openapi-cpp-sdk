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

#include <alibabacloud/ecs/model/StopInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

StopInstancesResult::StopInstancesResult() :
	ServiceResult()
{}

StopInstancesResult::StopInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopInstancesResult::~StopInstancesResult()
{}

void StopInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceResponsesNode = value["InstanceResponses"]["InstanceResponse"];
	for (auto valueInstanceResponsesInstanceResponse : allInstanceResponsesNode)
	{
		InstanceResponse instanceResponsesObject;
		if(!valueInstanceResponsesInstanceResponse["Code"].isNull())
			instanceResponsesObject.code = valueInstanceResponsesInstanceResponse["Code"].asString();
		if(!valueInstanceResponsesInstanceResponse["Message"].isNull())
			instanceResponsesObject.message = valueInstanceResponsesInstanceResponse["Message"].asString();
		if(!valueInstanceResponsesInstanceResponse["InstanceId"].isNull())
			instanceResponsesObject.instanceId = valueInstanceResponsesInstanceResponse["InstanceId"].asString();
		if(!valueInstanceResponsesInstanceResponse["CurrentStatus"].isNull())
			instanceResponsesObject.currentStatus = valueInstanceResponsesInstanceResponse["CurrentStatus"].asString();
		if(!valueInstanceResponsesInstanceResponse["PreviousStatus"].isNull())
			instanceResponsesObject.previousStatus = valueInstanceResponsesInstanceResponse["PreviousStatus"].asString();
		instanceResponses_.push_back(instanceResponsesObject);
	}

}

std::vector<StopInstancesResult::InstanceResponse> StopInstancesResult::getInstanceResponses()const
{
	return instanceResponses_;
}

