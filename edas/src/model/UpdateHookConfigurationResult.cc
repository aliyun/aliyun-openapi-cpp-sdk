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

#include <alibabacloud/edas/model/UpdateHookConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateHookConfigurationResult::UpdateHookConfigurationResult() :
	ServiceResult()
{}

UpdateHookConfigurationResult::UpdateHookConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateHookConfigurationResult::~UpdateHookConfigurationResult()
{}

void UpdateHookConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHooksConfigurationNode = value["HooksConfiguration"]["Configuration"];
	for (auto valueHooksConfigurationConfiguration : allHooksConfigurationNode)
	{
		Configuration hooksConfigurationObject;
		if(!valueHooksConfigurationConfiguration["Name"].isNull())
			hooksConfigurationObject.name = valueHooksConfigurationConfiguration["Name"].asString();
		if(!valueHooksConfigurationConfiguration["Script"].isNull())
			hooksConfigurationObject.script = valueHooksConfigurationConfiguration["Script"].asString();
		if(!valueHooksConfigurationConfiguration["IgnoreFail"].isNull())
			hooksConfigurationObject.ignoreFail = valueHooksConfigurationConfiguration["IgnoreFail"].asString() == "true";
		hooksConfiguration_.push_back(hooksConfigurationObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<UpdateHookConfigurationResult::Configuration> UpdateHookConfigurationResult::getHooksConfiguration()const
{
	return hooksConfiguration_;
}

std::string UpdateHookConfigurationResult::getMessage()const
{
	return message_;
}

int UpdateHookConfigurationResult::getCode()const
{
	return code_;
}

