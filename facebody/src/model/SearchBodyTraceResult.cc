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

#include <alibabacloud/facebody/model/SearchBodyTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

SearchBodyTraceResult::SearchBodyTraceResult() :
	ServiceResult()
{}

SearchBodyTraceResult::SearchBodyTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchBodyTraceResult::~SearchBodyTraceResult()
{}

void SearchBodyTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allMatchListNode = dataNode["MatchList"]["Trace"];
	for (auto dataNodeMatchListTrace : allMatchListNode)
	{
		Data::Trace traceObject;
		if(!dataNodeMatchListTrace["Score"].isNull())
			traceObject.score = std::stof(dataNodeMatchListTrace["Score"].asString());
		if(!dataNodeMatchListTrace["PersonId"].isNull())
			traceObject.personId = std::stol(dataNodeMatchListTrace["PersonId"].asString());
		if(!dataNodeMatchListTrace["TraceId"].isNull())
			traceObject.traceId = std::stol(dataNodeMatchListTrace["TraceId"].asString());
		if(!dataNodeMatchListTrace["DbId"].isNull())
			traceObject.dbId = std::stol(dataNodeMatchListTrace["DbId"].asString());
		if(!dataNodeMatchListTrace["ExtraData"].isNull())
			traceObject.extraData = dataNodeMatchListTrace["ExtraData"].asString();
		data_.matchList.push_back(traceObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string SearchBodyTraceResult::getMessage()const
{
	return message_;
}

SearchBodyTraceResult::Data SearchBodyTraceResult::getData()const
{
	return data_;
}

std::string SearchBodyTraceResult::getCode()const
{
	return code_;
}

