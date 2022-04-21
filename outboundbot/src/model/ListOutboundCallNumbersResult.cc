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

#include <alibabacloud/outboundbot/model/ListOutboundCallNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListOutboundCallNumbersResult::ListOutboundCallNumbersResult() :
	ServiceResult()
{}

ListOutboundCallNumbersResult::ListOutboundCallNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOutboundCallNumbersResult::~ListOutboundCallNumbersResult()
{}

void ListOutboundCallNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto outboundCallNumbersNode = value["OutboundCallNumbers"];
	if(!outboundCallNumbersNode["PageNumber"].isNull())
		outboundCallNumbers_.pageNumber = std::stoi(outboundCallNumbersNode["PageNumber"].asString());
	if(!outboundCallNumbersNode["PageSize"].isNull())
		outboundCallNumbers_.pageSize = std::stoi(outboundCallNumbersNode["PageSize"].asString());
	if(!outboundCallNumbersNode["TotalCount"].isNull())
		outboundCallNumbers_.totalCount = std::stoi(outboundCallNumbersNode["TotalCount"].asString());
	auto allListNode = outboundCallNumbersNode["List"]["OutboundCallNumber"];
	for (auto outboundCallNumbersNodeListOutboundCallNumber : allListNode)
	{
		OutboundCallNumbers::OutboundCallNumber outboundCallNumberObject;
		if(!outboundCallNumbersNodeListOutboundCallNumber["Number"].isNull())
			outboundCallNumberObject.number = outboundCallNumbersNodeListOutboundCallNumber["Number"].asString();
		if(!outboundCallNumbersNodeListOutboundCallNumber["OutboundCallNumberId"].isNull())
			outboundCallNumberObject.outboundCallNumberId = outboundCallNumbersNodeListOutboundCallNumber["OutboundCallNumberId"].asString();
		if(!outboundCallNumbersNodeListOutboundCallNumber["RateLimitCount"].isNull())
			outboundCallNumberObject.rateLimitCount = outboundCallNumbersNodeListOutboundCallNumber["RateLimitCount"].asString();
		if(!outboundCallNumbersNodeListOutboundCallNumber["RateLimitPeriod"].isNull())
			outboundCallNumberObject.rateLimitPeriod = outboundCallNumbersNodeListOutboundCallNumber["RateLimitPeriod"].asString();
		outboundCallNumbers_.list.push_back(outboundCallNumberObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListOutboundCallNumbersResult::getMessage()const
{
	return message_;
}

ListOutboundCallNumbersResult::OutboundCallNumbers ListOutboundCallNumbersResult::getOutboundCallNumbers()const
{
	return outboundCallNumbers_;
}

int ListOutboundCallNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListOutboundCallNumbersResult::getCode()const
{
	return code_;
}

bool ListOutboundCallNumbersResult::getSuccess()const
{
	return success_;
}

