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

#include <alibabacloud/qualitycheck/model/ListAsrVocabResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListAsrVocabResult::ListAsrVocabResult() :
	ServiceResult()
{}

ListAsrVocabResult::ListAsrVocabResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAsrVocabResult::~ListAsrVocabResult()
{}

void ListAsrVocabResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AsrVocab"];
	for (auto valueDataAsrVocab : allDataNode)
	{
		AsrVocab dataObject;
		if(!valueDataAsrVocab["VocabularyId"].isNull())
			dataObject.vocabularyId = valueDataAsrVocab["VocabularyId"].asString();
		if(!valueDataAsrVocab["UpdateTime"].isNull())
			dataObject.updateTime = valueDataAsrVocab["UpdateTime"].asString();
		if(!valueDataAsrVocab["Name"].isNull())
			dataObject.name = valueDataAsrVocab["Name"].asString();
		if(!valueDataAsrVocab["CreateTime"].isNull())
			dataObject.createTime = valueDataAsrVocab["CreateTime"].asString();
		if(!valueDataAsrVocab["Id"].isNull())
			dataObject.id = valueDataAsrVocab["Id"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAsrVocabResult::getMessage()const
{
	return message_;
}

std::vector<ListAsrVocabResult::AsrVocab> ListAsrVocabResult::getData()const
{
	return data_;
}

std::string ListAsrVocabResult::getCode()const
{
	return code_;
}

bool ListAsrVocabResult::getSuccess()const
{
	return success_;
}

