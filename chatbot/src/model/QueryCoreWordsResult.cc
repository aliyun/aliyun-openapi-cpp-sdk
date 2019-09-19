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

#include <alibabacloud/chatbot/model/QueryCoreWordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryCoreWordsResult::QueryCoreWordsResult() :
	ServiceResult()
{}

QueryCoreWordsResult::QueryCoreWordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCoreWordsResult::~QueryCoreWordsResult()
{}

void QueryCoreWordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCoreWordsNode = value["CoreWords"]["CoreWord"];
	for (auto valueCoreWordsCoreWord : allCoreWordsNode)
	{
		CoreWord coreWordsObject;
		if(!valueCoreWordsCoreWord["CoreWordCode"].isNull())
			coreWordsObject.coreWordCode = valueCoreWordsCoreWord["CoreWordCode"].asString();
		if(!valueCoreWordsCoreWord["CoreWordName"].isNull())
			coreWordsObject.coreWordName = valueCoreWordsCoreWord["CoreWordName"].asString();
		if(!valueCoreWordsCoreWord["ModifyTime"].isNull())
			coreWordsObject.modifyTime = valueCoreWordsCoreWord["ModifyTime"].asString();
		if(!valueCoreWordsCoreWord["CreateTime"].isNull())
			coreWordsObject.createTime = valueCoreWordsCoreWord["CreateTime"].asString();
		auto allSynonyms = value["Synonyms"]["Synonym"];
		for (auto value : allSynonyms)
			coreWordsObject.synonyms.push_back(value.asString());
		coreWords_.push_back(coreWordsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryCoreWordsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryCoreWordsResult::CoreWord> QueryCoreWordsResult::getCoreWords()const
{
	return coreWords_;
}

int QueryCoreWordsResult::getPageSize()const
{
	return pageSize_;
}

int QueryCoreWordsResult::getPageNumber()const
{
	return pageNumber_;
}

