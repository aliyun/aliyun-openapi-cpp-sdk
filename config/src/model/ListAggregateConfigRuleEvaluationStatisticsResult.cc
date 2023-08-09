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

#include <alibabacloud/config/model/ListAggregateConfigRuleEvaluationStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListAggregateConfigRuleEvaluationStatisticsResult::ListAggregateConfigRuleEvaluationStatisticsResult() :
	ServiceResult()
{}

ListAggregateConfigRuleEvaluationStatisticsResult::ListAggregateConfigRuleEvaluationStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAggregateConfigRuleEvaluationStatisticsResult::~ListAggregateConfigRuleEvaluationStatisticsResult()
{}

void ListAggregateConfigRuleEvaluationStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEvaluationResultsNode = value["EvaluationResults"]["EvaluationResultsItem"];
	for (auto valueEvaluationResultsEvaluationResultsItem : allEvaluationResultsNode)
	{
		EvaluationResultsItem evaluationResultsObject;
		if(!valueEvaluationResultsEvaluationResultsItem["AccountId"].isNull())
			evaluationResultsObject.accountId = std::stol(valueEvaluationResultsEvaluationResultsItem["AccountId"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["AggregatorId"].isNull())
			evaluationResultsObject.aggregatorId = valueEvaluationResultsEvaluationResultsItem["AggregatorId"].asString();
		if(!valueEvaluationResultsEvaluationResultsItem["AggregatorName"].isNull())
			evaluationResultsObject.aggregatorName = valueEvaluationResultsEvaluationResultsItem["AggregatorName"].asString();
		if(!valueEvaluationResultsEvaluationResultsItem["NonCompliantResourceCnt"].isNull())
			evaluationResultsObject.nonCompliantResourceCnt = std::stoi(valueEvaluationResultsEvaluationResultsItem["NonCompliantResourceCnt"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["TotalResourceCnt"].isNull())
			evaluationResultsObject.totalResourceCnt = std::stoi(valueEvaluationResultsEvaluationResultsItem["TotalResourceCnt"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["NonCompliantRuleCnt"].isNull())
			evaluationResultsObject.nonCompliantRuleCnt = std::stoi(valueEvaluationResultsEvaluationResultsItem["NonCompliantRuleCnt"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["TotalRuleCnt"].isNull())
			evaluationResultsObject.totalRuleCnt = std::stoi(valueEvaluationResultsEvaluationResultsItem["TotalRuleCnt"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["GmtCreate"].isNull())
			evaluationResultsObject.gmtCreate = std::stol(valueEvaluationResultsEvaluationResultsItem["GmtCreate"].asString());
		if(!valueEvaluationResultsEvaluationResultsItem["NonCompliantRuleDetail"].isNull())
			evaluationResultsObject.nonCompliantRuleDetail = valueEvaluationResultsEvaluationResultsItem["NonCompliantRuleDetail"].asString();
		if(!valueEvaluationResultsEvaluationResultsItem["StatisticDate"].isNull())
			evaluationResultsObject.statisticDate = valueEvaluationResultsEvaluationResultsItem["StatisticDate"].asString();
		evaluationResults_.push_back(evaluationResultsObject);
	}

}

std::vector<ListAggregateConfigRuleEvaluationStatisticsResult::EvaluationResultsItem> ListAggregateConfigRuleEvaluationStatisticsResult::getEvaluationResults()const
{
	return evaluationResults_;
}

