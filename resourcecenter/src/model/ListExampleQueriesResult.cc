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

#include <alibabacloud/resourcecenter/model/ListExampleQueriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListExampleQueriesResult::ListExampleQueriesResult() :
	ServiceResult()
{}

ListExampleQueriesResult::ListExampleQueriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExampleQueriesResult::~ListExampleQueriesResult()
{}

void ListExampleQueriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExampleQueriesNode = value["ExampleQueries"]["ExampleQuery"];
	for (auto valueExampleQueriesExampleQuery : allExampleQueriesNode)
	{
		ExampleQuery exampleQueriesObject;
		if(!valueExampleQueriesExampleQuery["Description"].isNull())
			exampleQueriesObject.description = valueExampleQueriesExampleQuery["Description"].asString();
		if(!valueExampleQueriesExampleQuery["Name"].isNull())
			exampleQueriesObject.name = valueExampleQueriesExampleQuery["Name"].asString();
		if(!valueExampleQueriesExampleQuery["QueryId"].isNull())
			exampleQueriesObject.queryId = valueExampleQueriesExampleQuery["QueryId"].asString();
		exampleQueries_.push_back(exampleQueriesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListExampleQueriesResult::ExampleQuery> ListExampleQueriesResult::getExampleQueries()const
{
	return exampleQueries_;
}

std::string ListExampleQueriesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListExampleQueriesResult::getMaxResults()const
{
	return maxResults_;
}

