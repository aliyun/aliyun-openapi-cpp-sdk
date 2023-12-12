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

#include <alibabacloud/tingwu/model/ListTranscriptionPhrasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tingwu;
using namespace AlibabaCloud::Tingwu::Model;

ListTranscriptionPhrasesResult::ListTranscriptionPhrasesResult() :
	ServiceResult()
{}

ListTranscriptionPhrasesResult::ListTranscriptionPhrasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTranscriptionPhrasesResult::~ListTranscriptionPhrasesResult()
{}

void ListTranscriptionPhrasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ErrorCode"].isNull())
		data_.errorCode = dataNode["ErrorCode"].asString();
	if(!dataNode["ErrorMessage"].isNull())
		data_.errorMessage = dataNode["ErrorMessage"].asString();
	auto allPhrasesNode = dataNode["Phrases"]["热词列表"];
	for (auto dataNodePhrases热词列表 : allPhrasesNode)
	{
		Data::热词列表 热词列表Object;
		if(!dataNodePhrases热词列表["PhraseId"].isNull())
			热词列表Object.phraseId = dataNodePhrases热词列表["PhraseId"].asString();
		if(!dataNodePhrases热词列表["Name"].isNull())
			热词列表Object.name = dataNodePhrases热词列表["Name"].asString();
		if(!dataNodePhrases热词列表["Description"].isNull())
			热词列表Object.description = dataNodePhrases热词列表["Description"].asString();
		data_.phrases.push_back(热词列表Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTranscriptionPhrasesResult::getMessage()const
{
	return message_;
}

ListTranscriptionPhrasesResult::Data ListTranscriptionPhrasesResult::getData()const
{
	return data_;
}

std::string ListTranscriptionPhrasesResult::getCode()const
{
	return code_;
}

