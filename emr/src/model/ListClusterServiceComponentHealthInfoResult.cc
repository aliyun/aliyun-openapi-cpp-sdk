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
	auto allHealthInfoListNode = value["HealthInfoList"]["HealthInfo"];
	for (auto valueHealthInfoListHealthInfo : allHealthInfoListNode)
	{
		HealthInfo healthInfoListObject;
		if(!valueHealthInfoListHealthInfo["ServiceName"].isNull())
			healthInfoListObject.serviceName = valueHealthInfoListHealthInfo["ServiceName"].asString();
		if(!valueHealthInfoListHealthInfo["ComponentName"].isNull())
			healthInfoListObject.componentName = valueHealthInfoListHealthInfo["ComponentName"].asString();
		if(!valueHealthInfoListHealthInfo["HealthLevel"].isNull())
			healthInfoListObject.healthLevel = valueHealthInfoListHealthInfo["HealthLevel"].asString();
		if(!valueHealthInfoListHealthInfo["StoppedNum"].isNull())
			healthInfoListObject.stoppedNum = std::stoi(valueHealthInfoListHealthInfo["StoppedNum"].asString());
		if(!valueHealthInfoListHealthInfo["ManualStoppedNum"].isNull())
			healthInfoListObject.manualStoppedNum = std::stoi(valueHealthInfoListHealthInfo["ManualStoppedNum"].asString());
		if(!valueHealthInfoListHealthInfo["NormalNum"].isNull())
			healthInfoListObject.normalNum = std::stoi(valueHealthInfoListHealthInfo["NormalNum"].asString());
		if(!valueHealthInfoListHealthInfo["TotalNum"].isNull())
			healthInfoListObject.totalNum = std::stoi(valueHealthInfoListHealthInfo["TotalNum"].asString());
		if(!valueHealthInfoListHealthInfo["AgentHeartBeatLostNum"].isNull())
			healthInfoListObject.agentHeartBeatLostNum = std::stoi(valueHealthInfoListHealthInfo["AgentHeartBeatLostNum"].asString());
		if(!valueHealthInfoListHealthInfo["CreatedTime"].isNull())
			healthInfoListObject.createdTime = std::stol(valueHealthInfoListHealthInfo["CreatedTime"].asString());
		if(!valueHealthInfoListHealthInfo["HealthStatus"].isNull())
			healthInfoListObject.healthStatus = valueHealthInfoListHealthInfo["HealthStatus"].asString();
		if(!valueHealthInfoListHealthInfo["StoppedHealthNum"].isNull())
			healthInfoListObject.stoppedHealthNum = std::stoi(valueHealthInfoListHealthInfo["StoppedHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["GoodHealthNum"].isNull())
			healthInfoListObject.goodHealthNum = std::stoi(valueHealthInfoListHealthInfo["GoodHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["WarningHealthNum"].isNull())
			healthInfoListObject.warningHealthNum = std::stoi(valueHealthInfoListHealthInfo["WarningHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["BadHealthNum"].isNull())
			healthInfoListObject.badHealthNum = std::stoi(valueHealthInfoListHealthInfo["BadHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["UnknownHealthNum"].isNull())
			healthInfoListObject.unknownHealthNum = std::stoi(valueHealthInfoListHealthInfo["UnknownHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["DisabledHealthNum"].isNull())
			healthInfoListObject.disabledHealthNum = std::stoi(valueHealthInfoListHealthInfo["DisabledHealthNum"].asString());
		if(!valueHealthInfoListHealthInfo["NoneHealthNum"].isNull())
			healthInfoListObject.noneHealthNum = std::stoi(valueHealthInfoListHealthInfo["NoneHealthNum"].asString());
		auto allHealthDetailListNode = valueHealthInfoListHealthInfo["HealthDetailList"]["HealthDetail"];
		for (auto valueHealthInfoListHealthInfoHealthDetailListHealthDetail : allHealthDetailListNode)
		{
			HealthInfo::HealthDetail healthDetailListObject;
			if(!valueHealthInfoListHealthInfoHealthDetailListHealthDetail["code"].isNull())
				healthDetailListObject.code = valueHealthInfoListHealthInfoHealthDetailListHealthDetail["code"].asString();
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

