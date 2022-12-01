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

#include <alibabacloud/opensearch/model/ListFirstRanksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListFirstRanksResult::ListFirstRanksResult() :
	ServiceResult()
{}

ListFirstRanksResult::ListFirstRanksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFirstRanksResult::~ListFirstRanksResult()
{}

void ListFirstRanksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["firstRankItem"];
	for (auto valueresultfirstRankItem : allresultNode)
	{
		FirstRankItem resultObject;
		if(!valueresultfirstRankItem["created"].isNull())
			resultObject.created = std::stoi(valueresultfirstRankItem["created"].asString());
		if(!valueresultfirstRankItem["active"].isNull())
			resultObject.active = valueresultfirstRankItem["active"].asString() == "true";
		if(!valueresultfirstRankItem["description"].isNull())
			resultObject.description = valueresultfirstRankItem["description"].asString();
		if(!valueresultfirstRankItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultfirstRankItem["updated"].asString());
		if(!valueresultfirstRankItem["name"].isNull())
			resultObject.name = valueresultfirstRankItem["name"].asString();
		auto allmetaNode = valueresultfirstRankItem["meta"]["metaItem"];
		for (auto valueresultfirstRankItemmetametaItem : allmetaNode)
		{
			FirstRankItem::MetaItem metaObject;
			if(!valueresultfirstRankItemmetametaItem["arg"].isNull())
				metaObject.arg = valueresultfirstRankItemmetametaItem["arg"].asString();
			if(!valueresultfirstRankItemmetametaItem["attribute"].isNull())
				metaObject.attribute = valueresultfirstRankItemmetametaItem["attribute"].asString();
			if(!valueresultfirstRankItemmetametaItem["weight"].isNull())
				metaObject.weight = std::stoi(valueresultfirstRankItemmetametaItem["weight"].asString());
			resultObject.meta.push_back(metaObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListFirstRanksResult::FirstRankItem> ListFirstRanksResult::getresult()const
{
	return result_;
}

std::string ListFirstRanksResult::getRequestId()const
{
	return requestId_;
}

