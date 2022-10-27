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

#include <alibabacloud/elasticsearch/model/ListInstanceHistoryEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListInstanceHistoryEventsResult::ListInstanceHistoryEventsResult() :
	ServiceResult()
{}

ListInstanceHistoryEventsResult::ListInstanceHistoryEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceHistoryEventsResult::~ListInstanceHistoryEventsResult()
{}

void ListInstanceHistoryEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["eventCreateTime"].isNull())
			resultObject.eventCreateTime = valueResultResultItem["eventCreateTime"].asString();
		if(!valueResultResultItem["eventCycleStatus"].isNull())
			resultObject.eventCycleStatus = valueResultResultItem["eventCycleStatus"].asString();
		if(!valueResultResultItem["eventExecuteTime"].isNull())
			resultObject.eventExecuteTime = valueResultResultItem["eventExecuteTime"].asString();
		if(!valueResultResultItem["eventFinashTime"].isNull())
			resultObject.eventFinashTime = valueResultResultItem["eventFinashTime"].asString();
		if(!valueResultResultItem["eventLevel"].isNull())
			resultObject.eventLevel = valueResultResultItem["eventLevel"].asString();
		if(!valueResultResultItem["instanceId"].isNull())
			resultObject.instanceId = valueResultResultItem["instanceId"].asString();
		if(!valueResultResultItem["nodeIP"].isNull())
			resultObject.nodeIP = valueResultResultItem["nodeIP"].asString();
		if(!valueResultResultItem["eventType"].isNull())
			resultObject.eventType = valueResultResultItem["eventType"].asString();
		if(!valueResultResultItem["regionId"].isNull())
			resultObject.regionId = valueResultResultItem["regionId"].asString();
		if(!valueResultResultItem["ecsId"].isNull())
			resultObject.ecsId = valueResultResultItem["ecsId"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stol(headersNode["X-Total-Count"].asString());
	if(!headersNode["X-Total-Failed"].isNull())
		headers_.xTotalFailed = std::stol(headersNode["X-Total-Failed"].asString());
	if(!headersNode["X-Total-Success"].isNull())
		headers_.xTotalSuccess = std::stol(headersNode["X-Total-Success"].asString());

}

ListInstanceHistoryEventsResult::Headers ListInstanceHistoryEventsResult::getHeaders()const
{
	return headers_;
}

std::vector<ListInstanceHistoryEventsResult::ResultItem> ListInstanceHistoryEventsResult::getResult()const
{
	return result_;
}

