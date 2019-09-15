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
	auto allSuggestions = value["Suggestions"]["Suggestion"];
	for (auto value : allSuggestions)
	{
		Suggestion suggestionsObject;
		if(!value["SuggestType"].isNull())
			suggestionsObject.suggestType = value["SuggestType"].asString();
		if(!value["Points"].isNull())
			suggestionsObject.points = std::stoi(value["Points"].asString());
		auto allDetail = value["Detail"]["DetailItem"];
		for (auto value : allDetail)
		{
			Suggestion::DetailItem detailObject;
			if(!value["Description"].isNull())
				detailObject.description = value["Description"].asString();
			if(!value["SubType"].isNull())
				detailObject.subType = value["SubType"].asString();
			if(!value["Title"].isNull())
				detailObject.title = value["Title"].asString();
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

