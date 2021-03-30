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

#include <alibabacloud/airec/model/ListExperimentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListExperimentsResult::ListExperimentsResult() :
	ServiceResult()
{}

ListExperimentsResult::ListExperimentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExperimentsResult::~ListExperimentsResult()
{}

void ListExperimentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["experimentId"].isNull())
			resultObject.experimentId = valueresultresultItem["experimentId"].asString();
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		if(!valueresultresultItem["status"].isNull())
			resultObject.status = valueresultresultItem["status"].asString();
		if(!valueresultresultItem["base"].isNull())
			resultObject.base = valueresultresultItem["base"].asString() == "true";
		if(!valueresultresultItem["onlineTime"].isNull())
			resultObject.onlineTime = valueresultresultItem["onlineTime"].asString();
		if(!valueresultresultItem["offlineTime"].isNull())
			resultObject.offlineTime = valueresultresultItem["offlineTime"].asString();
		auto allBuckets = value["buckets"]["bucket"];
		for (auto value : allBuckets)
			resultObject.buckets.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListExperimentsResult::ResultItem> ListExperimentsResult::getresult()const
{
	return result_;
}

std::string ListExperimentsResult::getRequestId()const
{
	return requestId_;
}

