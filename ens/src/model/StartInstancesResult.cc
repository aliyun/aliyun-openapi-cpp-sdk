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

#include <alibabacloud/ens/model/StartInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

StartInstancesResult::StartInstancesResult() :
	ServiceResult()
{}

StartInstancesResult::StartInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartInstancesResult::~StartInstancesResult()
{}

void StartInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceResponsesNode = value["InstanceResponses"]["response"];
	for (auto valueInstanceResponsesresponse : allInstanceResponsesNode)
	{
		Response instanceResponsesObject;
		if(!valueInstanceResponsesresponse["Code"].isNull())
			instanceResponsesObject.code = std::stol(valueInstanceResponsesresponse["Code"].asString());
		if(!valueInstanceResponsesresponse["Message"].isNull())
			instanceResponsesObject.message = valueInstanceResponsesresponse["Message"].asString();
		if(!valueInstanceResponsesresponse["InstanceId"].isNull())
			instanceResponsesObject.instanceId = valueInstanceResponsesresponse["InstanceId"].asString();
		instanceResponses_.push_back(instanceResponsesObject);
	}

}

std::vector<StartInstancesResult::Response> StartInstancesResult::getInstanceResponses()const
{
	return instanceResponses_;
}

