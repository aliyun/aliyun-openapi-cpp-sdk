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

#include <alibabacloud/airec/model/RecommendResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

RecommendResult::RecommendResult() :
	ServiceResult()
{}

RecommendResult::RecommendResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecommendResult::~RecommendResult()
{}

void RecommendResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["itemId"].isNull())
			resultObject.itemId = valueresultresultItem["itemId"].asString();
		if(!valueresultresultItem["itemType"].isNull())
			resultObject.itemType = valueresultresultItem["itemType"].asString();
		if(!valueresultresultItem["matchInfo"].isNull())
			resultObject.matchInfo = valueresultresultItem["matchInfo"].asString();
		if(!valueresultresultItem["position"].isNull())
			resultObject.position = std::stoi(valueresultresultItem["position"].asString());
		if(!valueresultresultItem["traceId"].isNull())
			resultObject.traceId = valueresultresultItem["traceId"].asString();
		if(!valueresultresultItem["traceInfo"].isNull())
			resultObject.traceInfo = valueresultresultItem["traceInfo"].asString();
		if(!valueresultresultItem["weight"].isNull())
			resultObject.weight = std::stof(valueresultresultItem["weight"].asString());
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<RecommendResult::ResultItem> RecommendResult::getresult()const
{
	return result_;
}

std::string RecommendResult::getMessage()const
{
	return message_;
}

std::string RecommendResult::getRequestId()const
{
	return requestId_;
}

std::string RecommendResult::getCode()const
{
	return code_;
}

