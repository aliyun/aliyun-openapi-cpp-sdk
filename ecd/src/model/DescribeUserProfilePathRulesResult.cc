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

#include <alibabacloud/ecd/model/DescribeUserProfilePathRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeUserProfilePathRulesResult::DescribeUserProfilePathRulesResult() :
	ServiceResult()
{}

DescribeUserProfilePathRulesResult::DescribeUserProfilePathRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserProfilePathRulesResult::~DescribeUserProfilePathRulesResult()
{}

void DescribeUserProfilePathRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userProfilePathRuleNode = value["UserProfilePathRule"];
	if(!userProfilePathRuleNode["DesktopGroupId"].isNull())
		userProfilePathRule_.desktopGroupId = userProfilePathRuleNode["DesktopGroupId"].asString();
	if(!userProfilePathRuleNode["UserProfileRuleType"].isNull())
		userProfilePathRule_.userProfileRuleType = userProfilePathRuleNode["UserProfileRuleType"].asString();
	auto allRulesNode = userProfilePathRuleNode["Rules"]["upmPathRules"];
	for (auto userProfilePathRuleNodeRulesupmPathRules : allRulesNode)
	{
		UserProfilePathRule::UpmPathRules upmPathRulesObject;
		auto allWhitePathsNode = userProfilePathRuleNodeRulesupmPathRules["WhitePaths"]["whiteList"];
		for (auto userProfilePathRuleNodeRulesupmPathRulesWhitePathswhiteList : allWhitePathsNode)
		{
			UserProfilePathRule::UpmPathRules::WhiteList whitePathsObject;
			if(!userProfilePathRuleNodeRulesupmPathRulesWhitePathswhiteList["Path"].isNull())
				whitePathsObject.path = userProfilePathRuleNodeRulesupmPathRulesWhitePathswhiteList["Path"].asString();
			if(!userProfilePathRuleNodeRulesupmPathRulesWhitePathswhiteList["Type"].isNull())
				whitePathsObject.type = userProfilePathRuleNodeRulesupmPathRulesWhitePathswhiteList["Type"].asString();
			upmPathRulesObject.whitePaths.push_back(whitePathsObject);
		}
		auto blackPathNode = value["BlackPath"];
		if(!blackPathNode["Path"].isNull())
			upmPathRulesObject.blackPath.path = blackPathNode["Path"].asString();
		if(!blackPathNode["Type"].isNull())
			upmPathRulesObject.blackPath.type = blackPathNode["Type"].asString();
		userProfilePathRule_.rules.push_back(upmPathRulesObject);
	}

}

DescribeUserProfilePathRulesResult::UserProfilePathRule DescribeUserProfilePathRulesResult::getUserProfilePathRule()const
{
	return userProfilePathRule_;
}

