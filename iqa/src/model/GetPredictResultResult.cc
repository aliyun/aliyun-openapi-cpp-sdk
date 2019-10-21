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

#include <alibabacloud/iqa/model/GetPredictResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iqa;
using namespace AlibabaCloud::Iqa::Model;

GetPredictResultResult::GetPredictResultResult() :
	ServiceResult()
{}

GetPredictResultResult::GetPredictResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPredictResultResult::~GetPredictResultResult()
{}

void GetPredictResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPredictResultsNode = value["PredictResults"]["PredictResult"];
	for (auto valuePredictResultsPredictResult : allPredictResultsNode)
	{
		PredictResult predictResultsObject;
		if(!valuePredictResultsPredictResult["Rank"].isNull())
			predictResultsObject.rank = std::stoi(valuePredictResultsPredictResult["Rank"].asString());
		if(!valuePredictResultsPredictResult["QuestionId"].isNull())
			predictResultsObject.questionId = valuePredictResultsPredictResult["QuestionId"].asString();
		if(!valuePredictResultsPredictResult["Question"].isNull())
			predictResultsObject.question = valuePredictResultsPredictResult["Question"].asString();
		if(!valuePredictResultsPredictResult["Score"].isNull())
			predictResultsObject.score = std::stof(valuePredictResultsPredictResult["Score"].asString());
		if(!valuePredictResultsPredictResult["Answer"].isNull())
			predictResultsObject.answer = valuePredictResultsPredictResult["Answer"].asString();
		predictResults_.push_back(predictResultsObject);
	}
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["Question"].isNull())
		question_ = value["Question"].asString();
	if(!value["TopK"].isNull())
		topK_ = std::stoi(value["TopK"].asString());
	if(!value["TraceTag"].isNull())
		traceTag_ = value["TraceTag"].asString();
	if(!value["CostTime"].isNull())
		costTime_ = std::stol(value["CostTime"].asString());
	if(!value["Trace"].isNull())
		trace_ = value["Trace"].asString();

}

long GetPredictResultResult::getCostTime()const
{
	return costTime_;
}

std::string GetPredictResultResult::getTrace()const
{
	return trace_;
}

int GetPredictResultResult::getTopK()const
{
	return topK_;
}

std::string GetPredictResultResult::getTraceTag()const
{
	return traceTag_;
}

std::string GetPredictResultResult::getProjectId()const
{
	return projectId_;
}

std::string GetPredictResultResult::getQuestion()const
{
	return question_;
}

std::vector<GetPredictResultResult::PredictResult> GetPredictResultResult::getPredictResults()const
{
	return predictResults_;
}

