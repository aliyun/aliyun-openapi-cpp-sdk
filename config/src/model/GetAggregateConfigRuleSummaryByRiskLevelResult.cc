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

#include <alibabacloud/config/model/GetAggregateConfigRuleSummaryByRiskLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateConfigRuleSummaryByRiskLevelResult::GetAggregateConfigRuleSummaryByRiskLevelResult() :
	ServiceResult()
{}

GetAggregateConfigRuleSummaryByRiskLevelResult::GetAggregateConfigRuleSummaryByRiskLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateConfigRuleSummaryByRiskLevelResult::~GetAggregateConfigRuleSummaryByRiskLevelResult()
{}

void GetAggregateConfigRuleSummaryByRiskLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigRuleSummariesNode = value["ConfigRuleSummaries"]["Data"];
	for (auto valueConfigRuleSummariesData : allConfigRuleSummariesNode)
	{
		Data configRuleSummariesObject;
		if(!valueConfigRuleSummariesData["RiskLevel"].isNull())
			configRuleSummariesObject.riskLevel = std::stoi(valueConfigRuleSummariesData["RiskLevel"].asString());
		if(!valueConfigRuleSummariesData["CompliantCount"].isNull())
			configRuleSummariesObject.compliantCount = std::stoi(valueConfigRuleSummariesData["CompliantCount"].asString());
		if(!valueConfigRuleSummariesData["NonCompliantCount"].isNull())
			configRuleSummariesObject.nonCompliantCount = std::stoi(valueConfigRuleSummariesData["NonCompliantCount"].asString());
		configRuleSummaries_.push_back(configRuleSummariesObject);
	}

}

std::vector<GetAggregateConfigRuleSummaryByRiskLevelResult::Data> GetAggregateConfigRuleSummaryByRiskLevelResult::getConfigRuleSummaries()const
{
	return configRuleSummaries_;
}

