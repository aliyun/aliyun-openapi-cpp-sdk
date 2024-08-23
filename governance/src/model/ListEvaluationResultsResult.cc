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

#include <alibabacloud/governance/model/ListEvaluationResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListEvaluationResultsResult::ListEvaluationResultsResult() :
	ServiceResult()
{}

ListEvaluationResultsResult::ListEvaluationResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEvaluationResultsResult::~ListEvaluationResultsResult()
{}

void ListEvaluationResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultsNode = value["Results"];
	if(!resultsNode["EvaluationTime"].isNull())
		results_.evaluationTime = resultsNode["EvaluationTime"].asString();
	if(!resultsNode["Status"].isNull())
		results_.status = resultsNode["Status"].asString();
	if(!resultsNode["TotalScore"].isNull())
		results_.totalScore = resultsNode["TotalScore"].asString();
	auto allCategoryResultsNode = resultsNode["CategoryResults"]["CategoryResultsItem"];
	for (auto resultsNodeCategoryResultsCategoryResultsItem : allCategoryResultsNode)
	{
		Results::CategoryResultsItem categoryResultsItemObject;
		if(!resultsNodeCategoryResultsCategoryResultsItem["Id"].isNull())
			categoryResultsItemObject.id = resultsNodeCategoryResultsCategoryResultsItem["Id"].asString();
		if(!resultsNodeCategoryResultsCategoryResultsItem["Result"].isNull())
			categoryResultsItemObject.result = resultsNodeCategoryResultsCategoryResultsItem["Result"].asString();
		results_.categoryResults.push_back(categoryResultsItemObject);
	}
	auto allGroupResultsNode = resultsNode["GroupResults"]["GroupResultsItem"];
	for (auto resultsNodeGroupResultsGroupResultsItem : allGroupResultsNode)
	{
		Results::GroupResultsItem groupResultsItemObject;
		if(!resultsNodeGroupResultsGroupResultsItem["Id"].isNull())
			groupResultsItemObject.id = resultsNodeGroupResultsGroupResultsItem["Id"].asString();
		if(!resultsNodeGroupResultsGroupResultsItem["PotentialScoreIncrease"].isNull())
			groupResultsItemObject.potentialScoreIncrease = resultsNodeGroupResultsGroupResultsItem["PotentialScoreIncrease"].asString();
		results_.groupResults.push_back(groupResultsItemObject);
	}
	auto allMetricResultsNode = resultsNode["MetricResults"]["MetricResult"];
	for (auto resultsNodeMetricResultsMetricResult : allMetricResultsNode)
	{
		Results::MetricResult metricResultObject;
		if(!resultsNodeMetricResultsMetricResult["EvaluationTime"].isNull())
			metricResultObject.evaluationTime = resultsNodeMetricResultsMetricResult["EvaluationTime"].asString();
		if(!resultsNodeMetricResultsMetricResult["Id"].isNull())
			metricResultObject.id = resultsNodeMetricResultsMetricResult["Id"].asString();
		if(!resultsNodeMetricResultsMetricResult["Result"].isNull())
			metricResultObject.result = resultsNodeMetricResultsMetricResult["Result"].asString();
		if(!resultsNodeMetricResultsMetricResult["Risk"].isNull())
			metricResultObject.risk = resultsNodeMetricResultsMetricResult["Risk"].asString();
		if(!resultsNodeMetricResultsMetricResult["Status"].isNull())
			metricResultObject.status = resultsNodeMetricResultsMetricResult["Status"].asString();
		auto errorInfoNode = value["ErrorInfo"];
		if(!errorInfoNode["Code"].isNull())
			metricResultObject.errorInfo.code = errorInfoNode["Code"].asString();
		if(!errorInfoNode["Message"].isNull())
			metricResultObject.errorInfo.message = errorInfoNode["Message"].asString();
		auto resourcesSummaryNode = value["ResourcesSummary"];
		if(!resourcesSummaryNode["NonCompliant"].isNull())
			metricResultObject.resourcesSummary.nonCompliant = std::stoi(resourcesSummaryNode["NonCompliant"].asString());
		results_.metricResults.push_back(metricResultObject);
	}
	if(!value["AccountId"].isNull())
		accountId_ = std::stol(value["AccountId"].asString());

}

long ListEvaluationResultsResult::getAccountId()const
{
	return accountId_;
}

ListEvaluationResultsResult::Results ListEvaluationResultsResult::getResults()const
{
	return results_;
}

