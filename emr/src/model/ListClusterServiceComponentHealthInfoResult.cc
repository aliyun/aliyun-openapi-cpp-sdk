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

#include <alibabacloud/emr/model/ListClusterServiceComponentHealthInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceComponentHealthInfoResult::ListClusterServiceComponentHealthInfoResult() :
	ServiceResult()
{}

ListClusterServiceComponentHealthInfoResult::ListClusterServiceComponentHealthInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceComponentHealthInfoResult::~ListClusterServiceComponentHealthInfoResult()
{}

void ListClusterServiceComponentHealthInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthInfoList = value["HealthInfoList"]["HealthInfo"];
	for (auto value : allHealthInfoList)
	{
		HealthInfo healthInfoListObject;
		if(!value["ServiceName"].isNull())
			healthInfoListObject.serviceName = value["ServiceName"].asString();
		if(!value["ComponentName"].isNull())
			healthInfoListObject.componentName = value["ComponentName"].asString();
		if(!value["HealthLevel"].isNull())
			healthInfoListObject.healthLevel = value["HealthLevel"].asString();
		if(!value["StoppedNum"].isNull())
			healthInfoListObject.stoppedNum = std::stoi(value["StoppedNum"].asString());
		if(!value["ManualStoppedNum"].isNull())
			healthInfoListObject.manualStoppedNum = std::stoi(value["ManualStoppedNum"].asString());
		if(!value["NormalNum"].isNull())
			healthInfoListObject.normalNum = std::stoi(value["NormalNum"].asString());
		if(!value["TotalNum"].isNull())
			healthInfoListObject.totalNum = std::stoi(value["TotalNum"].asString());
		if(!value["AgentHeartBeatLostNum"].isNull())
			healthInfoListObject.agentHeartBeatLostNum = std::stoi(value["AgentHeartBeatLostNum"].asString());
		auto allHealthDetailList = value["HealthDetailList"]["HealthDetail"];
		for (auto value : allHealthDetailList)
		{
			HealthInfo::HealthDetail healthDetailListObject;
			if(!value["code"].isNull())
				healthDetailListObject.code = value["code"].asString();
			auto healthRuleParamNode = value["HealthRuleParam"];
			if(!healthRuleParamNode["Service"].isNull())
				healthDetailListObject.healthRuleParam.service = healthRuleParamNode["Service"].asString();
			if(!healthRuleParamNode["Component"].isNull())
				healthDetailListObject.healthRuleParam.component = healthRuleParamNode["Component"].asString();
			if(!healthRuleParamNode["RuleTitle"].isNull())
				healthDetailListObject.healthRuleParam.ruleTitle = healthRuleParamNode["RuleTitle"].asString();
			if(!healthRuleParamNode["Pass"].isNull())
				healthDetailListObject.healthRuleParam.pass = healthRuleParamNode["Pass"].asString();
			if(!healthRuleParamNode["RuleId"].isNull())
				healthDetailListObject.healthRuleParam.ruleId = healthRuleParamNode["RuleId"].asString();
			if(!healthRuleParamNode["RuleDescription"].isNull())
				healthDetailListObject.healthRuleParam.ruleDescription = healthRuleParamNode["RuleDescription"].asString();
			if(!healthRuleParamNode["HostNames"].isNull())
				healthDetailListObject.healthRuleParam.hostNames = healthRuleParamNode["HostNames"].asString();
			healthInfoListObject.healthDetailList.push_back(healthDetailListObject);
		}
		healthInfoList_.push_back(healthInfoListObject);
	}
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();

}

std::string ListClusterServiceComponentHealthInfoResult::getClusterId()const
{
	return clusterId_;
}

std::vector<ListClusterServiceComponentHealthInfoResult::HealthInfo> ListClusterServiceComponentHealthInfoResult::getHealthInfoList()const
{
	return healthInfoList_;
}

