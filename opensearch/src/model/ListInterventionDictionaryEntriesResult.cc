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

#include <alibabacloud/opensearch/model/ListInterventionDictionaryEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListInterventionDictionaryEntriesResult::ListInterventionDictionaryEntriesResult() :
	ServiceResult()
{}

ListInterventionDictionaryEntriesResult::ListInterventionDictionaryEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInterventionDictionaryEntriesResult::~ListInterventionDictionaryEntriesResult()
{}

void ListInterventionDictionaryEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["wordItem"];
	for (auto valueresultwordItem : allresultNode)
	{
		WordItem resultObject;
		if(!valueresultwordItem["cmd"].isNull())
			resultObject.cmd = valueresultwordItem["cmd"].asString();
		if(!valueresultwordItem["created"].isNull())
			resultObject.created = std::stol(valueresultwordItem["created"].asString());
		if(!valueresultwordItem["word"].isNull())
			resultObject.word = valueresultwordItem["word"].asString();
		if(!valueresultwordItem["relevance"].isNull())
			resultObject.relevance = valueresultwordItem["relevance"].asString();
		if(!valueresultwordItem["status"].isNull())
			resultObject.status = valueresultwordItem["status"].asString();
		if(!valueresultwordItem["updated"].isNull())
			resultObject.updated = std::stol(valueresultwordItem["updated"].asString());
		auto alltokensNode = valueresultwordItem["tokens"]["token"];
		for (auto valueresultwordItemtokenstoken : alltokensNode)
		{
			WordItem::Token tokensObject;
			if(!valueresultwordItemtokenstoken["tag"].isNull())
				tokensObject.tag = valueresultwordItemtokenstoken["tag"].asString();
			if(!valueresultwordItemtokenstoken["token"].isNull())
				tokensObject.token = valueresultwordItemtokenstoken["token"].asString();
			if(!valueresultwordItemtokenstoken["order"].isNull())
				tokensObject.order = std::stoi(valueresultwordItemtokenstoken["order"].asString());
			if(!valueresultwordItemtokenstoken["tagLabel"].isNull())
				tokensObject.tagLabel = valueresultwordItemtokenstoken["tagLabel"].asString();
			resultObject.tokens.push_back(tokensObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListInterventionDictionaryEntriesResult::WordItem> ListInterventionDictionaryEntriesResult::getresult()const
{
	return result_;
}

int ListInterventionDictionaryEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListInterventionDictionaryEntriesResult::getRequestId()const
{
	return requestId_;
}

