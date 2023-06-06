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

#include <alibabacloud/sas/model/DescribeBruteForceSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBruteForceSummaryResult::DescribeBruteForceSummaryResult() :
	ServiceResult()
{}

DescribeBruteForceSummaryResult::DescribeBruteForceSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBruteForceSummaryResult::~DescribeBruteForceSummaryResult()
{}

void DescribeBruteForceSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto bruteForceSummaryNode = value["BruteForceSummary"];
	if(!bruteForceSummaryNode["AllStrategyCount"].isNull())
		bruteForceSummary_.allStrategyCount = std::stoi(bruteForceSummaryNode["AllStrategyCount"].asString());
	if(!bruteForceSummaryNode["EffectiveCount"].isNull())
		bruteForceSummary_.effectiveCount = std::stoi(bruteForceSummaryNode["EffectiveCount"].asString());
	if(!bruteForceSummaryNode["AntiBruteForceRuleCount"].isNull())
		bruteForceSummary_.antiBruteForceRuleCount = bruteForceSummaryNode["AntiBruteForceRuleCount"].asString();
	if(!bruteForceSummaryNode["CustomRecordCount"].isNull())
		bruteForceSummary_.customRecordCount = bruteForceSummaryNode["CustomRecordCount"].asString();
	if(!bruteForceSummaryNode["SystemRecordCount"].isNull())
		bruteForceSummary_.systemRecordCount = bruteForceSummaryNode["SystemRecordCount"].asString();
	if(!bruteForceSummaryNode["CustomEffectiveCount"].isNull())
		bruteForceSummary_.customEffectiveCount = bruteForceSummaryNode["CustomEffectiveCount"].asString();
	if(!bruteForceSummaryNode["SystemEffectiveCount"].isNull())
		bruteForceSummary_.systemEffectiveCount = bruteForceSummaryNode["SystemEffectiveCount"].asString();

}

DescribeBruteForceSummaryResult::BruteForceSummary DescribeBruteForceSummaryResult::getBruteForceSummary()const
{
	return bruteForceSummary_;
}

