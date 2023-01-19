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

#include <alibabacloud/sas/model/GetCheckSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCheckSummaryResult::GetCheckSummaryResult() :
	ServiceResult()
{}

GetCheckSummaryResult::GetCheckSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCheckSummaryResult::~GetCheckSummaryResult()
{}

void GetCheckSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSummarysNode = value["Summarys"]["SummarysItem"];
	for (auto valueSummarysSummarysItem : allSummarysNode)
	{
		SummarysItem summarysObject;
		if(!valueSummarysSummarysItem["Type"].isNull())
			summarysObject.type = valueSummarysSummarysItem["Type"].asString();
		if(!valueSummarysSummarysItem["PassCount"].isNull())
			summarysObject.passCount = std::stol(valueSummarysSummarysItem["PassCount"].asString());
		if(!valueSummarysSummarysItem["FailCount"].isNull())
			summarysObject.failCount = std::stoi(valueSummarysSummarysItem["FailCount"].asString());
		auto allStandardsNode = valueSummarysSummarysItem["Standards"]["StandardsItem"];
		for (auto valueSummarysSummarysItemStandardsStandardsItem : allStandardsNode)
		{
			SummarysItem::StandardsItem standardsObject;
			if(!valueSummarysSummarysItemStandardsStandardsItem["Id"].isNull())
				standardsObject.id = std::stol(valueSummarysSummarysItemStandardsStandardsItem["Id"].asString());
			if(!valueSummarysSummarysItemStandardsStandardsItem["ShowName"].isNull())
				standardsObject.showName = valueSummarysSummarysItemStandardsStandardsItem["ShowName"].asString();
			if(!valueSummarysSummarysItemStandardsStandardsItem["PassCount"].isNull())
				standardsObject.passCount = std::stoi(valueSummarysSummarysItemStandardsStandardsItem["PassCount"].asString());
			if(!valueSummarysSummarysItemStandardsStandardsItem["FailCount"].isNull())
				standardsObject.failCount = std::stoi(valueSummarysSummarysItemStandardsStandardsItem["FailCount"].asString());
			if(!valueSummarysSummarysItemStandardsStandardsItem["RiskLevelHighCount"].isNull())
				standardsObject.riskLevelHighCount = std::stoi(valueSummarysSummarysItemStandardsStandardsItem["RiskLevelHighCount"].asString());
			if(!valueSummarysSummarysItemStandardsStandardsItem["RiskLevelMediumCount"].isNull())
				standardsObject.riskLevelMediumCount = std::stoi(valueSummarysSummarysItemStandardsStandardsItem["RiskLevelMediumCount"].asString());
			if(!valueSummarysSummarysItemStandardsStandardsItem["RiskLevelLowCount"].isNull())
				standardsObject.riskLevelLowCount = std::stoi(valueSummarysSummarysItemStandardsStandardsItem["RiskLevelLowCount"].asString());
			summarysObject.standards.push_back(standardsObject);
		}
		summarys_.push_back(summarysObject);
	}
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string GetCheckSummaryResult::getTaskId()const
{
	return taskId_;
}

std::vector<GetCheckSummaryResult::SummarysItem> GetCheckSummaryResult::getSummarys()const
{
	return summarys_;
}

