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
	auto allResult = value["Result"]["ResultItem"];
	for (auto value : allResult)
	{
		ResultItem resultObject;
		if(!value["host"].isNull())
			resultObject.host = value["host"].asString();
		if(!value["port"].isNull())
			resultObject.port = std::stoi(value["port"].asString());
		if(!value["zoneId"].isNull())
			resultObject.zoneId = value["zoneId"].asString();
		if(!value["nodeType"].isNull())
			resultObject.nodeType = value["nodeType"].asString();
		if(!value["cpuPercent"].isNull())
			resultObject.cpuPercent = value["cpuPercent"].asString();
		if(!value["loadFiveM"].isNull())
			resultObject.loadFiveM = value["loadFiveM"].asString();
		if(!value["heapPercent"].isNull())
			resultObject.heapPercent = value["heapPercent"].asString();
		if(!value["health"].isNull())
			resultObject.health = value["health"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAllNodeResult::getMessage()const
{
	return message_;
}

std::string ListAllNodeResult::getCode()const
{
	return code_;
}

std::vector<ListAllNodeResult::ResultItem> ListAllNodeResult::getResult()const
{
	return result_;
}

