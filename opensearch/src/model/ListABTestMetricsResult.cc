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

#include <alibabacloud/opensearch/model/ListABTestMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListABTestMetricsResult::ListABTestMetricsResult() :
	ServiceResult()
{}

ListABTestMetricsResult::ListABTestMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListABTestMetricsResult::~ListABTestMetricsResult()
{}

void ListABTestMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["experimentName"].isNull())
			resultObject.experimentName = valueresultresultItem["experimentName"].asString();
		if(!valueresultresultItem["date"].isNull())
			resultObject.date = valueresultresultItem["date"].asString();
		if(!valueresultresultItem["pv"].isNull())
			resultObject.pv = std::stoi(valueresultresultItem["pv"].asString());
		if(!valueresultresultItem["ipv"].isNull())
			resultObject.ipv = std::stoi(valueresultresultItem["ipv"].asString());
		if(!valueresultresultItem["uv"].isNull())
			resultObject.uv = std::stoi(valueresultresultItem["uv"].asString());
		if(!valueresultresultItem["ipvUv"].isNull())
			resultObject.ipvUv = std::stoi(valueresultresultItem["ipvUv"].asString());
		if(!valueresultresultItem["ctr"].isNull())
			resultObject.ctr = std::stof(valueresultresultItem["ctr"].asString());
		if(!valueresultresultItem["zeroHitRate"].isNull())
			resultObject.zeroHitRate = std::stof(valueresultresultItem["zeroHitRate"].asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListABTestMetricsResult::ResultItem> ListABTestMetricsResult::getresult()const
{
	return result_;
}

std::string ListABTestMetricsResult::getRequestId()const
{
	return requestId_;
}

