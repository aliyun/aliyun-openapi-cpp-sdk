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

#include <alibabacloud/opensearch/model/ListQueryProcessorNersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListQueryProcessorNersResult::ListQueryProcessorNersResult() :
	ServiceResult()
{}

ListQueryProcessorNersResult::ListQueryProcessorNersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQueryProcessorNersResult::~ListQueryProcessorNersResult()
{}

void ListQueryProcessorNersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["tag"].isNull())
			resultObject.tag = valueresultresultItem["tag"].asString();
		if(!valueresultresultItem["order"].isNull())
			resultObject.order = std::stoi(valueresultresultItem["order"].asString());
		if(!valueresultresultItem["priority"].isNull())
			resultObject.priority = valueresultresultItem["priority"].asString();
		if(!valueresultresultItem["label"].isNull())
			resultObject.label = valueresultresultItem["label"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListQueryProcessorNersResult::ResultItem> ListQueryProcessorNersResult::getresult()const
{
	return result_;
}

std::string ListQueryProcessorNersResult::getRequestId()const
{
	return requestId_;
}

