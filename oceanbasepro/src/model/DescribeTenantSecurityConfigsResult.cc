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

#include <alibabacloud/oceanbasepro/model/DescribeTenantSecurityConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantSecurityConfigsResult::DescribeTenantSecurityConfigsResult() :
	ServiceResult()
{}

DescribeTenantSecurityConfigsResult::DescribeTenantSecurityConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantSecurityConfigsResult::~DescribeTenantSecurityConfigsResult()
{}

void DescribeTenantSecurityConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configsNode = value["Configs"];
	if(!configsNode["TotalCheckCount"].isNull())
		configs_.totalCheckCount = std::stoi(configsNode["TotalCheckCount"].asString());
	if(!configsNode["TotalRiskCount"].isNull())
		configs_.totalRiskCount = std::stoi(configsNode["TotalRiskCount"].asString());
	if(!configsNode["CheckId"].isNull())
		configs_.checkId = configsNode["CheckId"].asString();
	if(!configsNode["InstanceId"].isNull())
		configs_.instanceId = configsNode["InstanceId"].asString();
	if(!configsNode["CheckTime"].isNull())
		configs_.checkTime = configsNode["CheckTime"].asString();
	auto allTenantSecurityConfigsNode = configsNode["TenantSecurityConfigs"]["TenantSecurityConfigsItem"];
	for (auto configsNodeTenantSecurityConfigsTenantSecurityConfigsItem : allTenantSecurityConfigsNode)
	{
		Configs::TenantSecurityConfigsItem tenantSecurityConfigsItemObject;
		if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["TenantId"].isNull())
			tenantSecurityConfigsItemObject.tenantId = configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["TenantId"].asString();
		if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["TenantName"].isNull())
			tenantSecurityConfigsItemObject.tenantName = configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["TenantName"].asString();
		if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["RiskCount"].isNull())
			tenantSecurityConfigsItemObject.riskCount = std::stoi(configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["RiskCount"].asString());
		auto allSecurityConfigsNode = configsNodeTenantSecurityConfigsTenantSecurityConfigsItem["SecurityConfigs"]["SecurityConfigsItem"];
		for (auto configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem : allSecurityConfigsNode)
		{
			Configs::TenantSecurityConfigsItem::SecurityConfigsItem securityConfigsObject;
			if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigGroup"].isNull())
				securityConfigsObject.configGroup = configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigGroup"].asString();
			if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigName"].isNull())
				securityConfigsObject.configName = configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigName"].asString();
			if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["Risk"].isNull())
				securityConfigsObject.risk = configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["Risk"].asString() == "true";
			if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["RiskDescription"].isNull())
				securityConfigsObject.riskDescription = configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["RiskDescription"].asString();
			if(!configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigDescription"].isNull())
				securityConfigsObject.configDescription = configsNodeTenantSecurityConfigsTenantSecurityConfigsItemSecurityConfigsSecurityConfigsItem["ConfigDescription"].asString();
			tenantSecurityConfigsItemObject.securityConfigs.push_back(securityConfigsObject);
		}
		configs_.tenantSecurityConfigs.push_back(tenantSecurityConfigsItemObject);
	}

}

DescribeTenantSecurityConfigsResult::Configs DescribeTenantSecurityConfigsResult::getConfigs()const
{
	return configs_;
}

