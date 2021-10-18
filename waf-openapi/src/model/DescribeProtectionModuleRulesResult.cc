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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeProtectionModuleRulesResult::DescribeProtectionModuleRulesResult() :
	ServiceResult()
{}

DescribeProtectionModuleRulesResult::DescribeProtectionModuleRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProtectionModuleRulesResult::~DescribeProtectionModuleRulesResult()
{}

void DescribeProtectionModuleRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModuleRulesNode = value["ModuleRules"]["ModuleRulesItem"];
	for (auto valueModuleRulesModuleRulesItem : allModuleRulesNode)
	{
		ModuleRulesItem moduleRulesObject;
		if(!valueModuleRulesModuleRulesItem["Id"].isNull())
			moduleRulesObject.id = std::stol(valueModuleRulesModuleRulesItem["Id"].asString());
		if(!valueModuleRulesModuleRulesItem["Version"].isNull())
			moduleRulesObject.version = std::stol(valueModuleRulesModuleRulesItem["Version"].asString());
		if(!valueModuleRulesModuleRulesItem["Content"].isNull())
			moduleRulesObject.content = valueModuleRulesModuleRulesItem["Content"].asString();
		if(!valueModuleRulesModuleRulesItem["Time"].isNull())
			moduleRulesObject.time = std::stol(valueModuleRulesModuleRulesItem["Time"].asString());
		moduleRules_.push_back(moduleRulesObject);
	}
	if(!value["TaskStatus"].isNull())
		taskStatus_ = std::stoi(value["TaskStatus"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeProtectionModuleRulesResult::ModuleRulesItem> DescribeProtectionModuleRulesResult::getModuleRules()const
{
	return moduleRules_;
}

int DescribeProtectionModuleRulesResult::getTotal()const
{
	return total_;
}

int DescribeProtectionModuleRulesResult::getTaskStatus()const
{
	return taskStatus_;
}

