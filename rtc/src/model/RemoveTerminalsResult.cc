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

#include <alibabacloud/rtc/model/RemoveTerminalsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTerminals = value["Terminals"]["Terminal"];
	for (auto value : allTerminals)
	{
		Terminal terminalsObject;
		if(!value["Id"].isNull())
			terminalsObject.id = value["Id"].asString();
		if(!value["Code"].isNull())
			terminalsObject.code = std::stoi(value["Code"].asString());
		if(!value["Message"].isNull())
			terminalsObject.message = value["Message"].asString();
		terminals_.push_back(terminalsObject);
	}

}

std::vector<RemoveTerminalsResult::Terminal> RemoveTerminalsResult::getTerminals()const
{
	return terminals_;
}

