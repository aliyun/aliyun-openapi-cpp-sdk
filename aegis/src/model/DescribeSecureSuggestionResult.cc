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

#include <alibabacloud/aegis/model/DescribeSecureSuggestionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
		if(!valueSuggestionsSuggestion["SuggestType"].isNull())
			suggestionsObject.suggestType = valueSuggestionsSuggestion["SuggestType"].asString();
		if(!valueSuggestionsSuggestion["Points"].isNull())
			suggestionsObject.points = std::stoi(valueSuggestionsSuggestion["Points"].asString());
		auto allDetailNode = allSuggestionsNode["Detail"]["DetailItem"];
		for (auto allSuggestionsNodeDetailDetailItem : allDetailNode)
		{
			Suggestion::DetailItem detailObject;
			if(!allSuggestionsNodeDetailDetailItem["Description"].isNull())
				detailObject.description = allSuggestionsNodeDetailDetailItem["Description"].asString();
			if(!allSuggestionsNodeDetailDetailItem["SubType"].isNull())
				detailObject.subType = allSuggestionsNodeDetailDetailItem["SubType"].asString();
			if(!allSuggestionsNodeDetailDetailItem["Title"].isNull())
				detailObject.title = allSuggestionsNodeDetailDetailItem["Title"].asString();
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

