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

#include <alibabacloud/resourcecenter/model/ListSavedQueriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListSavedQueriesResult::ListSavedQueriesResult() :
	ServiceResult()
{}

ListSavedQueriesResult::ListSavedQueriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSavedQueriesResult::~ListSavedQueriesResult()
{}

void ListSavedQueriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSavedQueriesNode = value["SavedQueries"]["SavedQuery"];
	for (auto valueSavedQueriesSavedQuery : allSavedQueriesNode)
	{
		SavedQuery savedQueriesObject;
		if(!valueSavedQueriesSavedQuery["CreateTime"].isNull())
			savedQueriesObject.createTime = valueSavedQueriesSavedQuery["CreateTime"].asString();
		if(!valueSavedQueriesSavedQuery["Description"].isNull())
			savedQueriesObject.description = valueSavedQueriesSavedQuery["Description"].asString();
		if(!valueSavedQueriesSavedQuery["Name"].isNull())
			savedQueriesObject.name = valueSavedQueriesSavedQuery["Name"].asString();
		if(!valueSavedQueriesSavedQuery["QueryId"].isNull())
			savedQueriesObject.queryId = valueSavedQueriesSavedQuery["QueryId"].asString();
		if(!valueSavedQueriesSavedQuery["UpdateTime"].isNull())
			savedQueriesObject.updateTime = valueSavedQueriesSavedQuery["UpdateTime"].asString();
		savedQueries_.push_back(savedQueriesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListSavedQueriesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListSavedQueriesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListSavedQueriesResult::SavedQuery> ListSavedQueriesResult::getSavedQueries()const
{
	return savedQueries_;
}

