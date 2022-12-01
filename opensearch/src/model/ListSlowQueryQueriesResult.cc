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

#include <alibabacloud/opensearch/model/ListSlowQueryQueriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListSlowQueryQueriesResult::ListSlowQueryQueriesResult() :
	ServiceResult()
{}

ListSlowQueryQueriesResult::ListSlowQueryQueriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSlowQueryQueriesResult::~ListSlowQueryQueriesResult()
{}

void ListSlowQueryQueriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["index"].isNull())
		result_.index = std::stoi(resultNode["index"].asString());
	if(!resultNode["appQuery"].isNull())
		result_.appQuery = resultNode["appQuery"].asString();
	if(!resultNode["start"].isNull())
		result_.start = std::stoi(resultNode["start"].asString());
	if(!resultNode["end"].isNull())
		result_.end = std::stoi(resultNode["end"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string ListSlowQueryQueriesResult::getRequestId()const
{
	return requestId_;
}

ListSlowQueryQueriesResult::Result ListSlowQueryQueriesResult::getResult()const
{
	return result_;
}

