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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceSecurityConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstanceSecurityConfigsResult::DescribeInstanceSecurityConfigsResult() :
	ServiceResult()
{}

DescribeInstanceSecurityConfigsResult::DescribeInstanceSecurityConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSecurityConfigsResult::~DescribeInstanceSecurityConfigsResult()
{}

void DescribeInstanceSecurityConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceSecurityConfigsNode = value["InstanceSecurityConfigs"];
	if(!instanceSecurityConfigsNode["TotalCheckCount"].isNull())
		instanceSecurityConfigs_.totalCheckCount = std::stoi(instanceSecurityConfigsNode["TotalCheckCount"].asString());
	if(!instanceSecurityConfigsNode["TotalRiskCount"].isNull())
		instanceSecurityConfigs_.totalRiskCount = std::stoi(instanceSecurityConfigsNode["TotalRiskCount"].asString());
	if(!instanceSecurityConfigsNode["CheckTime"].isNull())
		instanceSecurityConfigs_.checkTime = instanceSecurityConfigsNode["CheckTime"].asString();
	if(!instanceSecurityConfigsNode["InstanceId"].isNull())
		instanceSecurityConfigs_.instanceId = instanceSecurityConfigsNode["InstanceId"].asString();
	if(!instanceSecurityConfigsNode["CheckId"].isNull())
		instanceSecurityConfigs_.checkId = instanceSecurityConfigsNode["CheckId"].asString();
	auto allSecurityConfigsNode = instanceSecurityConfigsNode["SecurityConfigs"]["SecurityConfigsItem"];
	for (auto instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem : allSecurityConfigsNode)
	{
		InstanceSecurityConfigs::SecurityConfigsItem securityConfigsItemObject;
		if(!instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigName"].isNull())
			securityConfigsItemObject.configName = instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigName"].asString();
		if(!instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["Risk"].isNull())
			securityConfigsItemObject.risk = instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["Risk"].asString() == "true";
		if(!instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["RiskDescription"].isNull())
			securityConfigsItemObject.riskDescription = instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["RiskDescription"].asString();
		if(!instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigGroup"].isNull())
			securityConfigsItemObject.configGroup = instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigGroup"].asString();
		if(!instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigDescription"].isNull())
			securityConfigsItemObject.configDescription = instanceSecurityConfigsNodeSecurityConfigsSecurityConfigsItem["ConfigDescription"].asString();
		instanceSecurityConfigs_.securityConfigs.push_back(securityConfigsItemObject);
	}

}

DescribeInstanceSecurityConfigsResult::InstanceSecurityConfigs DescribeInstanceSecurityConfigsResult::getInstanceSecurityConfigs()const
{
	return instanceSecurityConfigs_;
}

