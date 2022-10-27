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

#include <alibabacloud/elasticsearch/model/ListSearchLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListSearchLogResult::ListSearchLogResult() :
	ServiceResult()
{}

ListSearchLogResult::ListSearchLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSearchLogResult::~ListSearchLogResult()
{}

void ListSearchLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["level"].isNull())
			resultObject.level = valueResultResultItem["level"].asString();
		if(!valueResultResultItem["host"].isNull())
			resultObject.host = valueResultResultItem["host"].asString();
		if(!valueResultResultItem["content"].isNull())
			resultObject.content = valueResultResultItem["content"].asString();
		if(!valueResultResultItem["timestamp"].isNull())
			resultObject.timestamp = std::stol(valueResultResultItem["timestamp"].asString());
		if(!valueResultResultItem["contentCollection"].isNull())
			resultObject.contentCollection = valueResultResultItem["contentCollection"].asString();
		if(!valueResultResultItem["instanceId"].isNull())
			resultObject.instanceId = valueResultResultItem["instanceId"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListSearchLogResult::Headers ListSearchLogResult::getHeaders()const
{
	return headers_;
}

std::vector<ListSearchLogResult::ResultItem> ListSearchLogResult::getResult()const
{
	return result_;
}

