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

#include <alibabacloud/sas/model/ListPluginForUuidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListPluginForUuidResult::ListPluginForUuidResult() :
	ServiceResult()
{}

ListPluginForUuidResult::ListPluginForUuidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPluginForUuidResult::~ListPluginForUuidResult()
{}

void ListPluginForUuidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAegisUuidTargetPluginConfigListNode = value["AegisUuidTargetPluginConfigList"]["AegisUuidTargetPluginConfig"];
	for (auto valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig : allAegisUuidTargetPluginConfigListNode)
	{
		AegisUuidTargetPluginConfig aegisUuidTargetPluginConfigListObject;
		if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginName"].isNull())
			aegisUuidTargetPluginConfigListObject.pluginName = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginName"].asString();
		if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginOnlineInstalled"].isNull())
			aegisUuidTargetPluginConfigListObject.pluginOnlineInstalled = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginOnlineInstalled"].asString() == "true";
		if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginOnlineStatus"].isNull())
			aegisUuidTargetPluginConfigListObject.pluginOnlineStatus = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginOnlineStatus"].asString() == "true";
		if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginInstallCode"].isNull())
			aegisUuidTargetPluginConfigListObject.pluginInstallCode = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginInstallCode"].asString();
		if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginVersion"].isNull())
			aegisUuidTargetPluginConfigListObject.pluginVersion = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["PluginVersion"].asString();
		auto allAegisSuspiciousConfigListNode = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfig["AegisSuspiciousConfigList"]["AegisSuspiciousConfig"];
		for (auto valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig : allAegisSuspiciousConfigListNode)
		{
			AegisUuidTargetPluginConfig::AegisSuspiciousConfig aegisSuspiciousConfigListObject;
			if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Type"].isNull())
				aegisSuspiciousConfigListObject.type = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Type"].asString();
			if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Config"].isNull())
				aegisSuspiciousConfigListObject.config = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Config"].asString() == "true";
			if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Msg"].isNull())
				aegisSuspiciousConfigListObject.msg = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["Msg"].asString();
			if(!valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["OverallConfig"].isNull())
				aegisSuspiciousConfigListObject.overallConfig = valueAegisUuidTargetPluginConfigListAegisUuidTargetPluginConfigAegisSuspiciousConfigListAegisSuspiciousConfig["OverallConfig"].asString() == "true";
			aegisUuidTargetPluginConfigListObject.aegisSuspiciousConfigList.push_back(aegisSuspiciousConfigListObject);
		}
		aegisUuidTargetPluginConfigList_.push_back(aegisUuidTargetPluginConfigListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPluginForUuidResult::getMessage()const
{
	return message_;
}

std::vector<ListPluginForUuidResult::AegisUuidTargetPluginConfig> ListPluginForUuidResult::getAegisUuidTargetPluginConfigList()const
{
	return aegisUuidTargetPluginConfigList_;
}

int ListPluginForUuidResult::getCode()const
{
	return code_;
}

