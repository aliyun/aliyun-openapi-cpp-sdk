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

#include <alibabacloud/ehpc/model/InvokeShellCommandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

InvokeShellCommandResult::InvokeShellCommandResult() :
	ServiceResult()
{}

InvokeShellCommandResult::InvokeShellCommandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InvokeShellCommandResult::~InvokeShellCommandResult()
{}

void InvokeShellCommandResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["InstanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	if(!value["CommandId"].isNull())
		commandId_ = value["CommandId"].asString();

}

std::string InvokeShellCommandResult::getCommandId()const
{
	return commandId_;
}

std::vector<std::string> InvokeShellCommandResult::getInstanceIds()const
{
	return instanceIds_;
}

