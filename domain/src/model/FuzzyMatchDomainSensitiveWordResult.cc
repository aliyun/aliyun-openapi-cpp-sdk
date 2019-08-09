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

#include <alibabacloud/domain/model/FuzzyMatchDomainSensitiveWordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

FuzzyMatchDomainSensitiveWordResult::FuzzyMatchDomainSensitiveWordResult() :
	ServiceResult()
{}

FuzzyMatchDomainSensitiveWordResult::FuzzyMatchDomainSensitiveWordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FuzzyMatchDomainSensitiveWordResult::~FuzzyMatchDomainSensitiveWordResult()
{}

void FuzzyMatchDomainSensitiveWordResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allMatchedSentiveWords = value["MatchedSentiveWords"]["MatchedSensitiveWord"];
	for (auto value : allMatchedSentiveWords)
	{
		MatchedSensitiveWord matchedSentiveWordsObject;
		if(!value["Word"].isNull())
			matchedSentiveWordsObject.word = value["Word"].asString();
		matchedSentiveWords_.push_back(matchedSentiveWordsObject);
	}
	if(!value["Keyword"].isNull())
		keyword_ = value["Keyword"].asString();
	if(!value["Exist"].isNull())
		exist_ = value["Exist"].asString() == "true";

}

bool FuzzyMatchDomainSensitiveWordResult::getExist()const
{
	return exist_;
}

std::string FuzzyMatchDomainSensitiveWordResult::getKeyword()const
{
	return keyword_;
}

std::vector<FuzzyMatchDomainSensitiveWordResult::MatchedSensitiveWord> FuzzyMatchDomainSensitiveWordResult::getMatchedSentiveWords()const
{
	return matchedSentiveWords_;
}

