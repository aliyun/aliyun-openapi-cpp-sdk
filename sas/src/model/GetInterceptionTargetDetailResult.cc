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

#include <alibabacloud/sas/model/GetInterceptionTargetDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetInterceptionTargetDetailResult::GetInterceptionTargetDetailResult() :
	ServiceResult()
{}

GetInterceptionTargetDetailResult::GetInterceptionTargetDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInterceptionTargetDetailResult::~GetInterceptionTargetDetailResult()
{}

void GetInterceptionTargetDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ruleTargetNode = value["RuleTarget"];
	if(!ruleTargetNode["AppName"].isNull())
		ruleTarget_.appName = ruleTargetNode["AppName"].asString();
	if(!ruleTargetNode["TargetId"].isNull())
		ruleTarget_.targetId = std::stol(ruleTargetNode["TargetId"].asString());
	if(!ruleTargetNode["TargetName"].isNull())
		ruleTarget_.targetName = ruleTargetNode["TargetName"].asString();
	if(!ruleTargetNode["Namespace"].isNull())
		ruleTarget_._namespace = ruleTargetNode["Namespace"].asString();
	if(!ruleTargetNode["TargetType"].isNull())
		ruleTarget_.targetType = ruleTargetNode["TargetType"].asString();
	if(!ruleTargetNode["ClusterName"].isNull())
		ruleTarget_.clusterName = ruleTargetNode["ClusterName"].asString();
	if(!ruleTargetNode["ClusterId"].isNull())
		ruleTarget_.clusterId = ruleTargetNode["ClusterId"].asString();
		auto allImageList = ruleTargetNode["ImageList"]["image"];
		for (auto value : allImageList)
			ruleTarget_.imageList.push_back(value.asString());
		auto allTagList = ruleTargetNode["TagList"]["tag"];
		for (auto value : allTagList)
			ruleTarget_.tagList.push_back(value.asString());

}

GetInterceptionTargetDetailResult::RuleTarget GetInterceptionTargetDetailResult::getRuleTarget()const
{
	return ruleTarget_;
}

