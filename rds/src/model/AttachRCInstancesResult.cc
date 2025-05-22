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

#include <alibabacloud/rds/model/AttachRCInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

AttachRCInstancesResult::AttachRCInstancesResult() :
	ServiceResult()
{}

AttachRCInstancesResult::AttachRCInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachRCInstancesResult::~AttachRCInstancesResult()
{}

void AttachRCInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResponsesNode = value["Responses"]["Response"];
	for (auto valueResponsesResponse : allResponsesNode)
	{
		Response responsesObject;
		if(!valueResponsesResponse["Code"].isNull())
			responsesObject.code = valueResponsesResponse["Code"].asString();
		if(!valueResponsesResponse["InstanceId"].isNull())
			responsesObject.instanceId = valueResponsesResponse["InstanceId"].asString();
		if(!valueResponsesResponse["Message"].isNull())
			responsesObject.message = valueResponsesResponse["Message"].asString();
		responses_.push_back(responsesObject);
	}
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string AttachRCInstancesResult::getTaskId()const
{
	return taskId_;
}

std::vector<AttachRCInstancesResult::Response> AttachRCInstancesResult::getResponses()const
{
	return responses_;
}

