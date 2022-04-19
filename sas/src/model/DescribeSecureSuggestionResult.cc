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

#include <alibabacloud/sas/model/DescribeSecureSuggestionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSecureSuggestionResult::DescribeSecureSuggestionResult() :
	ServiceResult()
{}

DescribeSecureSuggestionResult::DescribeSecureSuggestionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecureSuggestionResult::~DescribeSecureSuggestionResult()
{}

void DescribeSecureSuggestionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuggestionsNode = value["Suggestions"]["Suggestion"];
	for (auto valueSuggestionsSuggestion : allSuggestionsNode)
	{
		Suggestion suggestionsObject;
		if(!valueSuggestionsSuggestion["Points"].isNull())
			suggestionsObject.points = std::stoi(valueSuggestionsSuggestion["Points"].asString());
		if(!valueSuggestionsSuggestion["SuggestType"].isNull())
			suggestionsObject.suggestType = valueSuggestionsSuggestion["SuggestType"].asString();
		auto allDetailNode = valueSuggestionsSuggestion["Detail"]["DetailItem"];
		for (auto valueSuggestionsSuggestionDetailDetailItem : allDetailNode)
		{
			Suggestion::DetailItem detailObject;
			if(!valueSuggestionsSuggestionDetailDetailItem["Title"].isNull())
				detailObject.title = valueSuggestionsSuggestionDetailDetailItem["Title"].asString();
			if(!valueSuggestionsSuggestionDetailDetailItem["Description"].isNull())
				detailObject.description = valueSuggestionsSuggestionDetailDetailItem["Description"].asString();
			if(!valueSuggestionsSuggestionDetailDetailItem["SubType"].isNull())
				detailObject.subType = valueSuggestionsSuggestionDetailDetailItem["SubType"].asString();
			suggestionsObject.detail.push_back(detailObject);
		}
		suggestions_.push_back(suggestionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeSecureSuggestionResult::Suggestion> DescribeSecureSuggestionResult::getSuggestions()const
{
	return suggestions_;
}

int DescribeSecureSuggestionResult::getTotalCount()const
{
	return totalCount_;
}

