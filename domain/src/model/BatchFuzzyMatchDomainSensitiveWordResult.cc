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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSensitiveWordMatchResultList = value["SensitiveWordMatchResultList"]["SensitiveWordMatchResult"];
	for (auto value : allSensitiveWordMatchResultList)
	{
		SensitiveWordMatchResult sensitiveWordMatchResultListObject;
		if(!value["Keyword"].isNull())
			sensitiveWordMatchResultListObject.keyword = value["Keyword"].asString();
		if(!value["Exist"].isNull())
			sensitiveWordMatchResultListObject.exist = value["Exist"].asString() == "true";
		auto allMatchedSentiveWords = value["MatchedSentiveWords"]["MatchedSensitiveWord"];
		for (auto value : allMatchedSentiveWords)
		{
			SensitiveWordMatchResult::MatchedSensitiveWord matchedSentiveWordsObject;
			if(!value["Word"].isNull())
				matchedSentiveWordsObject.word = value["Word"].asString();
			sensitiveWordMatchResultListObject.matchedSentiveWords.push_back(matchedSentiveWordsObject);
		}
		sensitiveWordMatchResultList_.push_back(sensitiveWordMatchResultListObject);
	}

}

std::vector<BatchFuzzyMatchDomainSensitiveWordResult::SensitiveWordMatchResult> BatchFuzzyMatchDomainSensitiveWordResult::getSensitiveWordMatchResultList()const
{
	return sensitiveWordMatchResultList_;
}

