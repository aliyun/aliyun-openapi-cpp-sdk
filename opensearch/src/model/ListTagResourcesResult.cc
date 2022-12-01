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

#include <alibabacloud/opensearch/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListTagResourcesResult::ListTagResourcesResult() :
	ServiceResult()
{}

ListTagResourcesResult::ListTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagResourcesResult::~ListTagResourcesResult()
{}

void ListTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["TagResource"];
	for (auto valueresultTagResource : allresultNode)
	{
		TagResource resultObject;
		if(!valueresultTagResource["tagKey"].isNull())
			resultObject.tagKey = valueresultTagResource["tagKey"].asString();
		if(!valueresultTagResource["tagValue"].isNull())
			resultObject.tagValue = valueresultTagResource["tagValue"].asString();
		if(!valueresultTagResource["resourceId"].isNull())
			resultObject.resourceId = valueresultTagResource["resourceId"].asString();
		if(!valueresultTagResource["resourceType"].isNull())
			resultObject.resourceType = valueresultTagResource["resourceType"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();

}

std::vector<ListTagResourcesResult::TagResource> ListTagResourcesResult::getresult()const
{
	return result_;
}

std::string ListTagResourcesResult::getRequestId()const
{
	return requestId_;
}

std::string ListTagResourcesResult::getNextToken()const
{
	return nextToken_;
}

