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

#include <alibabacloud/opensearch/model/ListABTestExperimentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListABTestExperimentsResult::ListABTestExperimentsResult() :
	ServiceResult()
{}

ListABTestExperimentsResult::ListABTestExperimentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListABTestExperimentsResult::~ListABTestExperimentsResult()
{}

void ListABTestExperimentsResult::parse(const std::string &payload)
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
		if(!valueresultresultItem["params"].isNull())
			resultObject.params = valueresultresultItem["params"].asString();
		if(!valueresultresultItem["traffic"].isNull())
			resultObject.traffic = std::stoi(valueresultresultItem["traffic"].asString());
		if(!valueresultresultItem["online"].isNull())
			resultObject.online = valueresultresultItem["online"].asString() == "true";
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultresultItem["updated"].asString());
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListABTestExperimentsResult::ResultItem> ListABTestExperimentsResult::getresult()const
{
	return result_;
}

std::string ListABTestExperimentsResult::getRequestId()const
{
	return requestId_;
}

