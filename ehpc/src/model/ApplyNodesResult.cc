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

#include <alibabacloud/ehpc/model/ApplyNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ApplyNodesResult::ApplyNodesResult() :
	ServiceResult()
{}

ApplyNodesResult::ApplyNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyNodesResult::~ApplyNodesResult()
{}

void ApplyNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["InstanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	if(!value["Detail"].isNull())
		detail_ = value["Detail"].asString();
	if(!value["SatisfiedAmount"].isNull())
		satisfiedAmount_ = std::stoi(value["SatisfiedAmount"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string ApplyNodesResult::getTaskId()const
{
	return taskId_;
}

int ApplyNodesResult::getSatisfiedAmount()const
{
	return satisfiedAmount_;
}

std::vector<std::string> ApplyNodesResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string ApplyNodesResult::getDetail()const
{
	return detail_;
}

