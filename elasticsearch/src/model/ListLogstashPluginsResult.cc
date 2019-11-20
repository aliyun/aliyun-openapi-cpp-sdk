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

#include <alibabacloud/elasticsearch/model/ListLogstashPluginsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListLogstashPluginsResult::ListLogstashPluginsResult() :
	ServiceResult()
{}

ListLogstashPluginsResult::ListLogstashPluginsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogstashPluginsResult::~ListLogstashPluginsResult()
{}

void ListLogstashPluginsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		if(!valueResultResultItem["state"].isNull())
			resultObject.state = valueResultResultItem["state"].asString();
		if(!valueResultResultItem["source"].isNull())
			resultObject.source = valueResultResultItem["source"].asString();
		if(!valueResultResultItem["description"].isNull())
			resultObject.description = valueResultResultItem["description"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListLogstashPluginsResult::ResultItem> ListLogstashPluginsResult::getResult()const
{
	return result_;
}

