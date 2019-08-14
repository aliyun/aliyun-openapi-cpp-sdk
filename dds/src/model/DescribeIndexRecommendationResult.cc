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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAnalyzations = value["Analyzations"]["Analyzation"];
	for (auto value : allAnalyzations)
	{
		Analyzation analyzationsObject;
		if(!value["Database"].isNull())
			analyzationsObject.database = value["Database"].asString();
		if(!value["Namespace"].isNull())
			analyzationsObject._namespace = value["Namespace"].asString();
		if(!value["Operation"].isNull())
			analyzationsObject.operation = value["Operation"].asString();
		if(!value["Query"].isNull())
			analyzationsObject.query = value["Query"].asString();
		if(!value["Sort"].isNull())
			analyzationsObject.sort = value["Sort"].asString();
		if(!value["Count"].isNull())
			analyzationsObject.count = std::stol(value["Count"].asString());
		if(!value["TotalExecutionTime"].isNull())
			analyzationsObject.totalExecutionTime = std::stol(value["TotalExecutionTime"].asString());
		if(!value["AverageExecutionTime"].isNull())
			analyzationsObject.averageExecutionTime = std::stol(value["AverageExecutionTime"].asString());
		if(!value["AverageReturnRowCount"].isNull())
			analyzationsObject.averageReturnRowCount = std::stol(value["AverageReturnRowCount"].asString());
		if(!value["AverageDocsExaminedCount"].isNull())
			analyzationsObject.averageDocsExaminedCount = std::stol(value["AverageDocsExaminedCount"].asString());
		if(!value["AverageKeysExaminedCount"].isNull())
			analyzationsObject.averageKeysExaminedCount = std::stol(value["AverageKeysExaminedCount"].asString());
		if(!value["InMemorySort"].isNull())
			analyzationsObject.inMemorySort = value["InMemorySort"].asString();
		if(!value["LastExecutionTime"].isNull())
			analyzationsObject.lastExecutionTime = value["LastExecutionTime"].asString();
		if(!value["ExecutionPlan"].isNull())
			analyzationsObject.executionPlan = value["ExecutionPlan"].asString();
		auto allIndexRecommendations = value["IndexRecommendations"]["Recommendation"];
		for (auto value : allIndexRecommendations)
		{
			Analyzation::Recommendation indexRecommendationsObject;
			if(!value["RecmdType"].isNull())
				indexRecommendationsObject.recmdType = value["RecmdType"].asString();
			if(!value["Content"].isNull())
				indexRecommendationsObject.content = value["Content"].asString();
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

