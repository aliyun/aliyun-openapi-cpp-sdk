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

#include <alibabacloud/csas/model/UpdateBootAndAntiUninstallPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

UpdateBootAndAntiUninstallPolicyResult::UpdateBootAndAntiUninstallPolicyResult() :
	ServiceResult()
{}

UpdateBootAndAntiUninstallPolicyResult::UpdateBootAndAntiUninstallPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateBootAndAntiUninstallPolicyResult::~UpdateBootAndAntiUninstallPolicyResult()
{}

void UpdateBootAndAntiUninstallPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto strategyNode = value["Strategy"];
	if(!strategyNode["CreateTime"].isNull())
		strategy_.createTime = strategyNode["CreateTime"].asString();
	if(!strategyNode["UpdateTime"].isNull())
		strategy_.updateTime = strategyNode["UpdateTime"].asString();
	if(!strategyNode["IsBoot"].isNull())
		strategy_.isBoot = strategyNode["IsBoot"].asString() == "true";
	if(!strategyNode["IsAntiUninstall"].isNull())
		strategy_.isAntiUninstall = strategyNode["IsAntiUninstall"].asString() == "true";
	if(!strategyNode["AllowReport"].isNull())
		strategy_.allowReport = strategyNode["AllowReport"].asString() == "true";
	if(!strategyNode["PolicyId"].isNull())
		strategy_.policyId = strategyNode["PolicyId"].asString();
	if(!strategyNode["ReportProcessId"].isNull())
		strategy_.reportProcessId = strategyNode["ReportProcessId"].asString();
	auto blockContentNode = strategyNode["BlockContent"];
	auto blockTextZhNode = blockContentNode["BlockTextZh"];
	if(!blockTextZhNode["Title"].isNull())
		strategy_.blockContent.blockTextZh.title = blockTextZhNode["Title"].asString();
	if(!blockTextZhNode["Content"].isNull())
		strategy_.blockContent.blockTextZh.content = blockTextZhNode["Content"].asString();
	if(!blockTextZhNode["MainButtonText"].isNull())
		strategy_.blockContent.blockTextZh.mainButtonText = blockTextZhNode["MainButtonText"].asString();
	if(!blockTextZhNode["MinorButtonText"].isNull())
		strategy_.blockContent.blockTextZh.minorButtonText = blockTextZhNode["MinorButtonText"].asString();
	auto blockTextEnNode = blockContentNode["BlockTextEn"];
	if(!blockTextEnNode["Title"].isNull())
		strategy_.blockContent.blockTextEn.title = blockTextEnNode["Title"].asString();
	if(!blockTextEnNode["Content"].isNull())
		strategy_.blockContent.blockTextEn.content = blockTextEnNode["Content"].asString();
	if(!blockTextEnNode["MainButtonText"].isNull())
		strategy_.blockContent.blockTextEn.mainButtonText = blockTextEnNode["MainButtonText"].asString();
	if(!blockTextEnNode["MinorButtonText"].isNull())
		strategy_.blockContent.blockTextEn.minorButtonText = blockTextEnNode["MinorButtonText"].asString();
		auto allWhitelistUsers = strategyNode["WhitelistUsers"]["whitelistUsers"];
		for (auto value : allWhitelistUsers)
			strategy_.whitelistUsers.push_back(value.asString());
		auto allUserGroupIds = strategyNode["UserGroupIds"]["userGroupIds"];
		for (auto value : allUserGroupIds)
			strategy_.userGroupIds.push_back(value.asString());

}

UpdateBootAndAntiUninstallPolicyResult::Strategy UpdateBootAndAntiUninstallPolicyResult::getStrategy()const
{
	return strategy_;
}

