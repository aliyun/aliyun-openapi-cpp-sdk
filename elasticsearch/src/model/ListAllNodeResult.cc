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

#include <alibabacloud/elasticsearch/model/ListAllNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListAllNodeResult::ListAllNodeResult() :
	ServiceResult()
{}

ListAllNodeResult::ListAllNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllNodeResult::~ListAllNodeResult()
{}

void ListAllNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["heapPercent"].isNull())
			resultObject.heapPercent = valueResultResultItem["heapPercent"].asString();
		if(!valueResultResultItem["zoneId"].isNull())
			resultObject.zoneId = valueResultResultItem["zoneId"].asString();
		if(!valueResultResultItem["hostName"].isNull())
			resultObject.hostName = valueResultResultItem["hostName"].asString();
		if(!valueResultResultItem["cpuPercent"].isNull())
			resultObject.cpuPercent = valueResultResultItem["cpuPercent"].asString();
		if(!valueResultResultItem["host"].isNull())
			resultObject.host = valueResultResultItem["host"].asString();
		if(!valueResultResultItem["nodeType"].isNull())
			resultObject.nodeType = valueResultResultItem["nodeType"].asString();
		if(!valueResultResultItem["diskUsedPercent"].isNull())
			resultObject.diskUsedPercent = valueResultResultItem["diskUsedPercent"].asString();
		if(!valueResultResultItem["port"].isNull())
			resultObject.port = std::stoi(valueResultResultItem["port"].asString());
		if(!valueResultResultItem["loadOneM"].isNull())
			resultObject.loadOneM = valueResultResultItem["loadOneM"].asString();
		if(!valueResultResultItem["health"].isNull())
			resultObject.health = valueResultResultItem["health"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListAllNodeResult::ResultItem> ListAllNodeResult::getResult()const
{
	return result_;
}

