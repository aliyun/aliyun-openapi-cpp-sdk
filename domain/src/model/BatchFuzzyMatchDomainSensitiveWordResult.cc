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

#include <alibabacloud/domain/model/BatchFuzzyMatchDomainSensitiveWordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

BatchFuzzyMatchDomainSensitiveWordResult::BatchFuzzyMatchDomainSensitiveWordResult() :
	ServiceResult()
{}

BatchFuzzyMatchDomainSensitiveWordResult::BatchFuzzyMatchDomainSensitiveWordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchFuzzyMatchDomainSensitiveWordResult::~BatchFuzzyMatchDomainSensitiveWordResult()
{}

void BatchFuzzyMatchDomainSensitiveWordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveWordMatchResultListNode = value["SensitiveWordMatchResultList"]["SensitiveWordMatchResult"];
	for (auto valueSensitiveWordMatchResultListSensitiveWordMatchResult : allSensitiveWordMatchResultListNode)
	{
		SensitiveWordMatchResult sensitiveWordMatchResultListObject;
		if(!valueSensitiveWordMatchResultListSensitiveWordMatchResult["Keyword"].isNull())
			sensitiveWordMatchResultListObject.keyword = valueSensitiveWordMatchResultListSensitiveWordMatchResult["Keyword"].asString();
		if(!valueSensitiveWordMatchResultListSensitiveWordMatchResult["Exist"].isNull())
			sensitiveWordMatchResultListObject.exist = valueSensitiveWordMatchResultListSensitiveWordMatchResult["Exist"].asString() == "true";
		auto allMatchedSentiveWordsNode = valueSensitiveWordMatchResultListSensitiveWordMatchResult["MatchedSentiveWords"]["MatchedSensitiveWord"];
		for (auto valueSensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord : allMatchedSentiveWordsNode)
		{
			SensitiveWordMatchResult::MatchedSensitiveWord matchedSentiveWordsObject;
			if(!valueSensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord["Word"].isNull())
				matchedSentiveWordsObject.word = valueSensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord["Word"].asString();
			sensitiveWordMatchResultListObject.matchedSentiveWords.push_back(matchedSentiveWordsObject);
		}
		sensitiveWordMatchResultList_.push_back(sensitiveWordMatchResultListObject);
	}

}

std::vector<BatchFuzzyMatchDomainSensitiveWordResult::SensitiveWordMatchResult> BatchFuzzyMatchDomainSensitiveWordResult::getSensitiveWordMatchResultList()const
{
	return sensitiveWordMatchResultList_;
}

