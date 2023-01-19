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

#include <alibabacloud/sas/model/GetClientUserDefineRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetClientUserDefineRuleResult::GetClientUserDefineRuleResult() :
	ServiceResult()
{}

GetClientUserDefineRuleResult::GetClientUserDefineRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClientUserDefineRuleResult::~GetClientUserDefineRuleResult()
{}

void GetClientUserDefineRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userDefineRuleDetailNode = value["UserDefineRuleDetail"];
	if(!userDefineRuleDetailNode["Type"].isNull())
		userDefineRuleDetail_.type = std::stoi(userDefineRuleDetailNode["Type"].asString());
	if(!userDefineRuleDetailNode["ActionType"].isNull())
		userDefineRuleDetail_.actionType = userDefineRuleDetailNode["ActionType"].asString();
	if(!userDefineRuleDetailNode["GmtCreate"].isNull())
		userDefineRuleDetail_.gmtCreate = std::stol(userDefineRuleDetailNode["GmtCreate"].asString());
	if(!userDefineRuleDetailNode["Md5List"].isNull())
		userDefineRuleDetail_.md5List = userDefineRuleDetailNode["Md5List"].asString();
	if(!userDefineRuleDetailNode["GmtModified"].isNull())
		userDefineRuleDetail_.gmtModified = std::stol(userDefineRuleDetailNode["GmtModified"].asString());
	if(!userDefineRuleDetailNode["Name"].isNull())
		userDefineRuleDetail_.name = userDefineRuleDetailNode["Name"].asString();
	if(!userDefineRuleDetailNode["Id"].isNull())
		userDefineRuleDetail_.id = std::stol(userDefineRuleDetailNode["Id"].asString());
	if(!userDefineRuleDetailNode["ProcPath"].isNull())
		userDefineRuleDetail_.procPath = userDefineRuleDetailNode["ProcPath"].asString();
	if(!userDefineRuleDetailNode["Cmdline"].isNull())
		userDefineRuleDetail_.cmdline = userDefineRuleDetailNode["Cmdline"].asString();
	if(!userDefineRuleDetailNode["Platform"].isNull())
		userDefineRuleDetail_.platform = userDefineRuleDetailNode["Platform"].asString();
	if(!userDefineRuleDetailNode["IP"].isNull())
		userDefineRuleDetail_.iP = userDefineRuleDetailNode["IP"].asString();
	if(!userDefineRuleDetailNode["Port"].isNull())
		userDefineRuleDetail_.port = std::stoi(userDefineRuleDetailNode["Port"].asString());
	if(!userDefineRuleDetailNode["FilePath"].isNull())
		userDefineRuleDetail_.filePath = userDefineRuleDetailNode["FilePath"].asString();
	if(!userDefineRuleDetailNode["NewFilePath"].isNull())
		userDefineRuleDetail_.newFilePath = userDefineRuleDetailNode["NewFilePath"].asString();
	if(!userDefineRuleDetailNode["RegistryKey"].isNull())
		userDefineRuleDetail_.registryKey = userDefineRuleDetailNode["RegistryKey"].asString();
	if(!userDefineRuleDetailNode["RegistryContent"].isNull())
		userDefineRuleDetail_.registryContent = userDefineRuleDetailNode["RegistryContent"].asString();
	if(!userDefineRuleDetailNode["ParentProcPath"].isNull())
		userDefineRuleDetail_.parentProcPath = userDefineRuleDetailNode["ParentProcPath"].asString();
	if(!userDefineRuleDetailNode["ParentCmdline"].isNull())
		userDefineRuleDetail_.parentCmdline = userDefineRuleDetailNode["ParentCmdline"].asString();
	if(!userDefineRuleDetailNode["PortStr"].isNull())
		userDefineRuleDetail_.portStr = userDefineRuleDetailNode["PortStr"].asString();

}

GetClientUserDefineRuleResult::UserDefineRuleDetail GetClientUserDefineRuleResult::getUserDefineRuleDetail()const
{
	return userDefineRuleDetail_;
}

