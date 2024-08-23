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

#include <alibabacloud/governance/model/ListEvaluationScoreHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListEvaluationScoreHistoryResult::ListEvaluationScoreHistoryResult() :
	ServiceResult()
{}

ListEvaluationScoreHistoryResult::ListEvaluationScoreHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEvaluationScoreHistoryResult::~ListEvaluationScoreHistoryResult()
{}

void ListEvaluationScoreHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scoreDiffNode = value["ScoreDiff"];
	auto allCategoryScoreDiffsNode = scoreDiffNode["CategoryScoreDiffs"]["CategoryScoreDiff"];
	for (auto scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff : allCategoryScoreDiffsNode)
	{
		ScoreDiff::CategoryScoreDiff categoryScoreDiffObject;
		if(!scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["CurrentEvaluationTime"].isNull())
			categoryScoreDiffObject.currentEvaluationTime = scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["CurrentEvaluationTime"].asString();
		if(!scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["Id"].isNull())
			categoryScoreDiffObject.id = scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["Id"].asString();
		if(!scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["PreviousEvaluationTime"].isNull())
			categoryScoreDiffObject.previousEvaluationTime = scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["PreviousEvaluationTime"].asString();
		if(!scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["ScoreDiff"].isNull())
			categoryScoreDiffObject.scoreDiff = scoreDiffNodeCategoryScoreDiffsCategoryScoreDiff["ScoreDiff"].asString();
		scoreDiff_.categoryScoreDiffs.push_back(categoryScoreDiffObject);
	}
	auto allMetricScoreDiffsNode = scoreDiffNode["MetricScoreDiffs"]["MetricScoreDiff"];
	for (auto scoreDiffNodeMetricScoreDiffsMetricScoreDiff : allMetricScoreDiffsNode)
	{
		ScoreDiff::MetricScoreDiff metricScoreDiffObject;
		if(!scoreDiffNodeMetricScoreDiffsMetricScoreDiff["Category"].isNull())
			metricScoreDiffObject.category = scoreDiffNodeMetricScoreDiffsMetricScoreDiff["Category"].asString();
		if(!scoreDiffNodeMetricScoreDiffsMetricScoreDiff["CurrentEvaluationTime"].isNull())
			metricScoreDiffObject.currentEvaluationTime = scoreDiffNodeMetricScoreDiffsMetricScoreDiff["CurrentEvaluationTime"].asString();
		if(!scoreDiffNodeMetricScoreDiffsMetricScoreDiff["Id"].isNull())
			metricScoreDiffObject.id = scoreDiffNodeMetricScoreDiffsMetricScoreDiff["Id"].asString();
		if(!scoreDiffNodeMetricScoreDiffsMetricScoreDiff["PreviousEvaluationTime"].isNull())
			metricScoreDiffObject.previousEvaluationTime = scoreDiffNodeMetricScoreDiffsMetricScoreDiff["PreviousEvaluationTime"].asString();
		if(!scoreDiffNodeMetricScoreDiffsMetricScoreDiff["ScoreDiff"].isNull())
			metricScoreDiffObject.scoreDiff = scoreDiffNodeMetricScoreDiffsMetricScoreDiff["ScoreDiff"].asString();
		scoreDiff_.metricScoreDiffs.push_back(metricScoreDiffObject);
	}
	auto scoreHistoryNode = value["ScoreHistory"];
	auto allTotalScoreHistoryNode = scoreHistoryNode["TotalScoreHistory"]["TotalScoreHistoryItem"];
	for (auto scoreHistoryNodeTotalScoreHistoryTotalScoreHistoryItem : allTotalScoreHistoryNode)
	{
		ScoreHistory::TotalScoreHistoryItem totalScoreHistoryItemObject;
		if(!scoreHistoryNodeTotalScoreHistoryTotalScoreHistoryItem["EvaluationTime"].isNull())
			totalScoreHistoryItemObject.evaluationTime = scoreHistoryNodeTotalScoreHistoryTotalScoreHistoryItem["EvaluationTime"].asString();
		if(!scoreHistoryNodeTotalScoreHistoryTotalScoreHistoryItem["Score"].isNull())
			totalScoreHistoryItemObject.score = scoreHistoryNodeTotalScoreHistoryTotalScoreHistoryItem["Score"].asString();
		scoreHistory_.totalScoreHistory.push_back(totalScoreHistoryItemObject);
	}

}

ListEvaluationScoreHistoryResult::ScoreDiff ListEvaluationScoreHistoryResult::getScoreDiff()const
{
	return scoreDiff_;
}

ListEvaluationScoreHistoryResult::ScoreHistory ListEvaluationScoreHistoryResult::getScoreHistory()const
{
	return scoreHistory_;
}

