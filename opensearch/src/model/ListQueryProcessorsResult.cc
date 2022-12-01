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

#include <alibabacloud/opensearch/model/ListQueryProcessorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListQueryProcessorsResult::ListQueryProcessorsResult() :
	ServiceResult()
{}

ListQueryProcessorsResult::ListQueryProcessorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQueryProcessorsResult::~ListQueryProcessorsResult()
{}

void ListQueryProcessorsResult::parse(const std::string &payload)
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
		if(!valueresultresultItem["active"].isNull())
			resultObject.active = valueresultresultItem["active"].asString() == "true";
		if(!valueresultresultItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultresultItem["updated"].asString());
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["domain"].isNull())
			resultObject.domain = valueresultresultItem["domain"].asString();
		auto allIndexes = value["indexes"]["indexes"];
		for (auto value : allIndexes)
			resultObject.indexes.push_back(value.asString());
		auto allProcessors = value["processors"]["processors"];
		for (auto value : allProcessors)
			resultObject.processors.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListQueryProcessorsResult::ResultItem> ListQueryProcessorsResult::getresult()const
{
	return result_;
}

std::string ListQueryProcessorsResult::getRequestId()const
{
	return requestId_;
}

