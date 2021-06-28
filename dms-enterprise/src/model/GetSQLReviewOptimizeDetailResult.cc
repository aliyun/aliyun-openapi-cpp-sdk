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

#include <alibabacloud/dms-enterprise/model/GetSQLReviewOptimizeDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetSQLReviewOptimizeDetailResult::GetSQLReviewOptimizeDetailResult() :
	ServiceResult()
{}

GetSQLReviewOptimizeDetailResult::GetSQLReviewOptimizeDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSQLReviewOptimizeDetailResult::~GetSQLReviewOptimizeDetailResult()
{}

void GetSQLReviewOptimizeDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto optimizeDetailNode = value["OptimizeDetail"];
	if(!optimizeDetailNode["QueryKey"].isNull())
		optimizeDetail_.queryKey = optimizeDetailNode["QueryKey"].asString();
	if(!optimizeDetailNode["InstanceId"].isNull())
		optimizeDetail_.instanceId = std::stoi(optimizeDetailNode["InstanceId"].asString());
	if(!optimizeDetailNode["DbId"].isNull())
		optimizeDetail_.dbId = std::stoi(optimizeDetailNode["DbId"].asString());
	if(!optimizeDetailNode["SqlType"].isNull())
		optimizeDetail_.sqlType = optimizeDetailNode["SqlType"].asString();
	auto qualityResultNode = optimizeDetailNode["QualityResult"];
	if(!qualityResultNode["ErrorMessage"].isNull())
		optimizeDetail_.qualityResult.errorMessage = qualityResultNode["ErrorMessage"].asString();
	if(!qualityResultNode["OccurError"].isNull())
		optimizeDetail_.qualityResult.occurError = qualityResultNode["OccurError"].asString() == "true";
	auto allResultsNode = qualityResultNode["Results"]["ResultsItem"];
	for (auto qualityResultNodeResultsResultsItem : allResultsNode)
	{
		OptimizeDetail::QualityResult::ResultsItem resultsItemObject;
		if(!qualityResultNodeResultsResultsItem["RuleName"].isNull())
			resultsItemObject.ruleName = qualityResultNodeResultsResultsItem["RuleName"].asString();
		if(!qualityResultNodeResultsResultsItem["Feedback"].isNull())
			resultsItemObject.feedback = qualityResultNodeResultsResultsItem["Feedback"].asString();
		if(!qualityResultNodeResultsResultsItem["Comments"].isNull())
			resultsItemObject.comments = qualityResultNodeResultsResultsItem["Comments"].asString();
		if(!qualityResultNodeResultsResultsItem["RuleType"].isNull())
			resultsItemObject.ruleType = qualityResultNodeResultsResultsItem["RuleType"].asString();
		auto allScriptsNode = qualityResultNodeResultsResultsItem["Scripts"]["ScriptsItem"];
		for (auto qualityResultNodeResultsResultsItemScriptsScriptsItem : allScriptsNode)
		{
			OptimizeDetail::QualityResult::ResultsItem::ScriptsItem scriptsObject;
			if(!qualityResultNodeResultsResultsItemScriptsScriptsItem["OpType"].isNull())
				scriptsObject.opType = qualityResultNodeResultsResultsItemScriptsScriptsItem["OpType"].asString();
			if(!qualityResultNodeResultsResultsItemScriptsScriptsItem["Content"].isNull())
				scriptsObject.content = qualityResultNodeResultsResultsItemScriptsScriptsItem["Content"].asString();
			if(!qualityResultNodeResultsResultsItemScriptsScriptsItem["TableName"].isNull())
				scriptsObject.tableName = qualityResultNodeResultsResultsItemScriptsScriptsItem["TableName"].asString();
			resultsItemObject.scripts.push_back(scriptsObject);
		}
		auto allMessages = value["Messages"]["Messages"];
		for (auto value : allMessages)
			resultsItemObject.messages.push_back(value.asString());
		optimizeDetail_.qualityResult.results.push_back(resultsItemObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetSQLReviewOptimizeDetailResult::OptimizeDetail GetSQLReviewOptimizeDetailResult::getOptimizeDetail()const
{
	return optimizeDetail_;
}

std::string GetSQLReviewOptimizeDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSQLReviewOptimizeDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetSQLReviewOptimizeDetailResult::getSuccess()const
{
	return success_;
}

