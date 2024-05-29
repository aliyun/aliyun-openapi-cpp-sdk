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

#include <alibabacloud/ddoscoo/model/DescribeWebCcProtectSwitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebCcProtectSwitchResult::DescribeWebCcProtectSwitchResult() :
	ServiceResult()
{}

DescribeWebCcProtectSwitchResult::DescribeWebCcProtectSwitchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebCcProtectSwitchResult::~DescribeWebCcProtectSwitchResult()
{}

void DescribeWebCcProtectSwitchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtectSwitchListNode = value["ProtectSwitchList"]["ProtectSwitch"];
	for (auto valueProtectSwitchListProtectSwitch : allProtectSwitchListNode)
	{
		ProtectSwitch protectSwitchListObject;
		if(!valueProtectSwitchListProtectSwitch["BlackWhiteListEnable"].isNull())
			protectSwitchListObject.blackWhiteListEnable = std::stoi(valueProtectSwitchListProtectSwitch["BlackWhiteListEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["AiTemplate"].isNull())
			protectSwitchListObject.aiTemplate = valueProtectSwitchListProtectSwitch["AiTemplate"].asString();
		if(!valueProtectSwitchListProtectSwitch["PreciseRuleEnable"].isNull())
			protectSwitchListObject.preciseRuleEnable = std::stoi(valueProtectSwitchListProtectSwitch["PreciseRuleEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["Domain"].isNull())
			protectSwitchListObject.domain = valueProtectSwitchListProtectSwitch["Domain"].asString();
		if(!valueProtectSwitchListProtectSwitch["AiMode"].isNull())
			protectSwitchListObject.aiMode = valueProtectSwitchListProtectSwitch["AiMode"].asString();
		if(!valueProtectSwitchListProtectSwitch["AiRuleEnable"].isNull())
			protectSwitchListObject.aiRuleEnable = std::stoi(valueProtectSwitchListProtectSwitch["AiRuleEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["RegionBlockEnable"].isNull())
			protectSwitchListObject.regionBlockEnable = std::stoi(valueProtectSwitchListProtectSwitch["RegionBlockEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["CcTemplate"].isNull())
			protectSwitchListObject.ccTemplate = valueProtectSwitchListProtectSwitch["CcTemplate"].asString();
		if(!valueProtectSwitchListProtectSwitch["CcCustomRuleEnable"].isNull())
			protectSwitchListObject.ccCustomRuleEnable = std::stoi(valueProtectSwitchListProtectSwitch["CcCustomRuleEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["CcEnable"].isNull())
			protectSwitchListObject.ccEnable = std::stoi(valueProtectSwitchListProtectSwitch["CcEnable"].asString());
		if(!valueProtectSwitchListProtectSwitch["CcGlobalSwitch"].isNull())
			protectSwitchListObject.ccGlobalSwitch = valueProtectSwitchListProtectSwitch["CcGlobalSwitch"].asString();
		protectSwitchList_.push_back(protectSwitchListObject);
	}

}

std::vector<DescribeWebCcProtectSwitchResult::ProtectSwitch> DescribeWebCcProtectSwitchResult::getProtectSwitchList()const
{
	return protectSwitchList_;
}

