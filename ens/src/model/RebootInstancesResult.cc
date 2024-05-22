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

#include <alibabacloud/ens/model/RebootInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

RebootInstancesResult::RebootInstancesResult() :
	ServiceResult()
{}

RebootInstancesResult::RebootInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RebootInstancesResult::~RebootInstancesResult()
{}

void RebootInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceResponsesNode = value["InstanceResponses"]["responses"];
	for (auto valueInstanceResponsesresponses : allInstanceResponsesNode)
	{
		Responses instanceResponsesObject;
		if(!valueInstanceResponsesresponses["Code"].isNull())
			instanceResponsesObject.code = std::stol(valueInstanceResponsesresponses["Code"].asString());
		if(!valueInstanceResponsesresponses["Message"].isNull())
			instanceResponsesObject.message = valueInstanceResponsesresponses["Message"].asString();
		if(!valueInstanceResponsesresponses["InstanceId"].isNull())
			instanceResponsesObject.instanceId = valueInstanceResponsesresponses["InstanceId"].asString();
		instanceResponses_.push_back(instanceResponsesObject);
	}

}

std::vector<RebootInstancesResult::Responses> RebootInstancesResult::getInstanceResponses()const
{
	return instanceResponses_;
}

