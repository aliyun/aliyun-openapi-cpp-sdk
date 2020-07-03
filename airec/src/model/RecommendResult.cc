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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["TraceId"].isNull())
			resultObject.traceId = valueResultResultItem["TraceId"].asString();
		if(!valueResultResultItem["ItemId"].isNull())
			resultObject.itemId = valueResultResultItem["ItemId"].asString();
		if(!valueResultResultItem["ItemType"].isNull())
			resultObject.itemType = valueResultResultItem["ItemType"].asString();
		if(!valueResultResultItem["MatchInfo"].isNull())
			resultObject.matchInfo = valueResultResultItem["MatchInfo"].asString();
		if(!valueResultResultItem["Weight"].isNull())
			resultObject.weight = std::stof(valueResultResultItem["Weight"].asString());
		if(!valueResultResultItem["Position"].isNull())
			resultObject.position = std::stoi(valueResultResultItem["Position"].asString());
		if(!valueResultResultItem["TraceInfo"].isNull())
			resultObject.traceInfo = valueResultResultItem["TraceInfo"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecommendResult::getMessage()const
{
	return message_;
}

std::string RecommendResult::getCode()const
{
	return code_;
}

std::vector<RecommendResult::ResultItem> RecommendResult::getResult()const
{
	return result_;
}

