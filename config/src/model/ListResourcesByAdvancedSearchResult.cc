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

#include <alibabacloud/config/model/ListResourcesByAdvancedSearchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListResourcesByAdvancedSearchResult::ListResourcesByAdvancedSearchResult() :
	ServiceResult()
{}

ListResourcesByAdvancedSearchResult::ListResourcesByAdvancedSearchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourcesByAdvancedSearchResult::~ListResourcesByAdvancedSearchResult()
{}

void ListResourcesByAdvancedSearchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto queryResultsNode = value["QueryResults"];
	auto queryResultListNode = queryResultsNode["QueryResultList"];
		auto allColumns = queryResultListNode["Columns"]["Columns"];
		for (auto value : allColumns)
			queryResults_.queryResultList.columns.push_back(value.asString());
		auto allValues = queryResultListNode["Values"]["Rows"];
		for (auto value : allValues)
			queryResults_.queryResultList.values.push_back(value.asString());

}

ListResourcesByAdvancedSearchResult::QueryResults ListResourcesByAdvancedSearchResult::getQueryResults()const
{
	return queryResults_;
}

