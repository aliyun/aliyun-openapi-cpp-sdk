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

#include <alibabacloud/config/model/GetConfigRuleComplianceByPackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetConfigRuleComplianceByPackResult::GetConfigRuleComplianceByPackResult() :
	ServiceResult()
{}

GetConfigRuleComplianceByPackResult::GetConfigRuleComplianceByPackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConfigRuleComplianceByPackResult::~GetConfigRuleComplianceByPackResult()
{}

void GetConfigRuleComplianceByPackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configRuleComplianceResultNode = value["ConfigRuleComplianceResult"];
	if(!configRuleComplianceResultNode["CompliancePackId"].isNull())
		configRuleComplianceResult_.compliancePackId = configRuleComplianceResultNode["CompliancePackId"].asString();
	if(!configRuleComplianceResultNode["NonCompliantCount"].isNull())
		configRuleComplianceResult_.nonCompliantCount = std::stoi(configRuleComplianceResultNode["NonCompliantCount"].asString());
	if(!configRuleComplianceResultNode["TotalCount"].isNull())
		configRuleComplianceResult_.totalCount = std::stoi(configRuleComplianceResultNode["TotalCount"].asString());
	auto allConfigRuleCompliancesNode = configRuleComplianceResultNode["ConfigRuleCompliances"]["ConfigRuleCompliancesItem"];
	for (auto configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem : allConfigRuleCompliancesNode)
	{
		ConfigRuleComplianceResult::ConfigRuleCompliancesItem configRuleCompliancesItemObject;
		if(!configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ComplianceType"].isNull())
			configRuleCompliancesItemObject.complianceType = configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ComplianceType"].asString();
		if(!configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ConfigRuleName"].isNull())
			configRuleCompliancesItemObject.configRuleName = configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ConfigRuleName"].asString();
		if(!configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ConfigRuleId"].isNull())
			configRuleCompliancesItemObject.configRuleId = configRuleComplianceResultNodeConfigRuleCompliancesConfigRuleCompliancesItem["ConfigRuleId"].asString();
		configRuleComplianceResult_.configRuleCompliances.push_back(configRuleCompliancesItemObject);
	}

}

GetConfigRuleComplianceByPackResult::ConfigRuleComplianceResult GetConfigRuleComplianceByPackResult::getConfigRuleComplianceResult()const
{
	return configRuleComplianceResult_;
}

