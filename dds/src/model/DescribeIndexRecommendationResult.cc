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

#include <alibabacloud/dds/model/DescribeIndexRecommendationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeIndexRecommendationResult::DescribeIndexRecommendationResult() :
	ServiceResult()
{}

DescribeIndexRecommendationResult::DescribeIndexRecommendationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIndexRecommendationResult::~DescribeIndexRecommendationResult()
{}

void DescribeIndexRecommendationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnalyzationsNode = value["Analyzations"]["Analyzation"];
	for (auto valueAnalyzationsAnalyzation : allAnalyzationsNode)
	{
		Analyzation analyzationsObject;
		if(!valueAnalyzationsAnalyzation["Database"].isNull())
			analyzationsObject.database = valueAnalyzationsAnalyzation["Database"].asString();
		if(!valueAnalyzationsAnalyzation["Namespace"].isNull())
			analyzationsObject._namespace = valueAnalyzationsAnalyzation["Namespace"].asString();
		if(!valueAnalyzationsAnalyzation["Operation"].isNull())
			analyzationsObject.operation = valueAnalyzationsAnalyzation["Operation"].asString();
		if(!valueAnalyzationsAnalyzation["Query"].isNull())
			analyzationsObject.query = valueAnalyzationsAnalyzation["Query"].asString();
		if(!valueAnalyzationsAnalyzation["Sort"].isNull())
			analyzationsObject.sort = valueAnalyzationsAnalyzation["Sort"].asString();
		if(!valueAnalyzationsAnalyzation["Count"].isNull())
			analyzationsObject.count = std::stol(valueAnalyzationsAnalyzation["Count"].asString());
		if(!valueAnalyzationsAnalyzation["TotalExecutionTime"].isNull())
			analyzationsObject.totalExecutionTime = std::stol(valueAnalyzationsAnalyzation["TotalExecutionTime"].asString());
		if(!valueAnalyzationsAnalyzation["AverageExecutionTime"].isNull())
			analyzationsObject.averageExecutionTime = std::stol(valueAnalyzationsAnalyzation["AverageExecutionTime"].asString());
		if(!valueAnalyzationsAnalyzation["AverageReturnRowCount"].isNull())
			analyzationsObject.averageReturnRowCount = std::stol(valueAnalyzationsAnalyzation["AverageReturnRowCount"].asString());
		if(!valueAnalyzationsAnalyzation["AverageDocsExaminedCount"].isNull())
			analyzationsObject.averageDocsExaminedCount = std::stol(valueAnalyzationsAnalyzation["AverageDocsExaminedCount"].asString());
		if(!valueAnalyzationsAnalyzation["AverageKeysExaminedCount"].isNull())
			analyzationsObject.averageKeysExaminedCount = std::stol(valueAnalyzationsAnalyzation["AverageKeysExaminedCount"].asString());
		if(!valueAnalyzationsAnalyzation["InMemorySort"].isNull())
			analyzationsObject.inMemorySort = valueAnalyzationsAnalyzation["InMemorySort"].asString();
		if(!valueAnalyzationsAnalyzation["LastExecutionTime"].isNull())
			analyzationsObject.lastExecutionTime = valueAnalyzationsAnalyzation["LastExecutionTime"].asString();
		if(!valueAnalyzationsAnalyzation["ExecutionPlan"].isNull())
			analyzationsObject.executionPlan = valueAnalyzationsAnalyzation["ExecutionPlan"].asString();
		auto allIndexRecommendationsNode = allAnalyzationsNode["IndexRecommendations"]["Recommendation"];
		for (auto allAnalyzationsNodeIndexRecommendationsRecommendation : allIndexRecommendationsNode)
		{
			Analyzation::Recommendation indexRecommendationsObject;
			if(!allAnalyzationsNodeIndexRecommendationsRecommendation["RecmdType"].isNull())
				indexRecommendationsObject.recmdType = allAnalyzationsNodeIndexRecommendationsRecommendation["RecmdType"].asString();
			if(!allAnalyzationsNodeIndexRecommendationsRecommendation["Content"].isNull())
				indexRecommendationsObject.content = allAnalyzationsNodeIndexRecommendationsRecommendation["Content"].asString();
			analyzationsObject.indexRecommendations.push_back(indexRecommendationsObject);
		}
		auto allIndexCombines = value["IndexCombines"]["IndexCombine"];
		for (auto value : allIndexCombines)
			analyzationsObject.indexCombines.push_back(value.asString());
		analyzations_.push_back(analyzationsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeIndexRecommendationResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeIndexRecommendationResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribeIndexRecommendationResult::Analyzation> DescribeIndexRecommendationResult::getAnalyzations()const
{
	return analyzations_;
}

int DescribeIndexRecommendationResult::getPageNumber()const
{
	return pageNumber_;
}

