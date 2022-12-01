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

#include <alibabacloud/opensearch/model/ListUserAnalyzersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListUserAnalyzersResult::ListUserAnalyzersResult() :
	ServiceResult()
{}

ListUserAnalyzersResult::ListUserAnalyzersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserAnalyzersResult::~ListUserAnalyzersResult()
{}

void ListUserAnalyzersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["created"].isNull())
			resultObject.created = std::stoi(valueresultresultItem["created"].asString());
		if(!valueresultresultItem["available"].isNull())
			resultObject.available = valueresultresultItem["available"].asString() == "true";
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultresultItem["updated"].asString());
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		if(!valueresultresultItem["business"].isNull())
			resultObject.business = valueresultresultItem["business"].asString();
		auto alldictsNode = valueresultresultItem["dicts"]["dictsItem"];
		for (auto valueresultresultItemdictsdictsItem : alldictsNode)
		{
			ResultItem::DictsItem dictsObject;
			if(!valueresultresultItemdictsdictsItem["created"].isNull())
				dictsObject.created = std::stoi(valueresultresultItemdictsdictsItem["created"].asString());
			if(!valueresultresultItemdictsdictsItem["entriesCount"].isNull())
				dictsObject.entriesCount = std::stoi(valueresultresultItemdictsdictsItem["entriesCount"].asString());
			if(!valueresultresultItemdictsdictsItem["type"].isNull())
				dictsObject.type = valueresultresultItemdictsdictsItem["type"].asString();
			if(!valueresultresultItemdictsdictsItem["entriesLimit"].isNull())
				dictsObject.entriesLimit = std::stoi(valueresultresultItemdictsdictsItem["entriesLimit"].asString());
			if(!valueresultresultItemdictsdictsItem["available"].isNull())
				dictsObject.available = valueresultresultItemdictsdictsItem["available"].asString() == "true";
			if(!valueresultresultItemdictsdictsItem["updated"].isNull())
				dictsObject.updated = std::stoi(valueresultresultItemdictsdictsItem["updated"].asString());
			if(!valueresultresultItemdictsdictsItem["id"].isNull())
				dictsObject.id = valueresultresultItemdictsdictsItem["id"].asString();
			resultObject.dicts.push_back(dictsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListUserAnalyzersResult::ResultItem> ListUserAnalyzersResult::getresult()const
{
	return result_;
}

int ListUserAnalyzersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListUserAnalyzersResult::getRequestId()const
{
	return requestId_;
}

