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

#include <alibabacloud/live/model/RemoveTerminalsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

RemoveTerminalsResult::RemoveTerminalsResult() :
	ServiceResult()
{}

RemoveTerminalsResult::RemoveTerminalsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveTerminalsResult::~RemoveTerminalsResult()
{}

void RemoveTerminalsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTerminalsNode = value["Terminals"]["Terminal"];
	for (auto valueTerminalsTerminal : allTerminalsNode)
	{
		Terminal terminalsObject;
		if(!valueTerminalsTerminal["Code"].isNull())
			terminalsObject.code = std::stoi(valueTerminalsTerminal["Code"].asString());
		if(!valueTerminalsTerminal["Message"].isNull())
			terminalsObject.message = valueTerminalsTerminal["Message"].asString();
		if(!valueTerminalsTerminal["Id"].isNull())
			terminalsObject.id = valueTerminalsTerminal["Id"].asString();
		terminals_.push_back(terminalsObject);
	}

}

std::vector<RemoveTerminalsResult::Terminal> RemoveTerminalsResult::getTerminals()const
{
	return terminals_;
}

