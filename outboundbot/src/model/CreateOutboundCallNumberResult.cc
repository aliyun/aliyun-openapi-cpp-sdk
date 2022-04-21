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

#include <alibabacloud/outboundbot/model/CreateOutboundCallNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateOutboundCallNumberResult::CreateOutboundCallNumberResult() :
	ServiceResult()
{}

CreateOutboundCallNumberResult::CreateOutboundCallNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOutboundCallNumberResult::~CreateOutboundCallNumberResult()
{}

void CreateOutboundCallNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["OutboundCallNumberId"].isNull())
		outboundCallNumberId_ = value["OutboundCallNumberId"].asString();

}

std::string CreateOutboundCallNumberResult::getMessage()const
{
	return message_;
}

int CreateOutboundCallNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateOutboundCallNumberResult::getCode()const
{
	return code_;
}

bool CreateOutboundCallNumberResult::getSuccess()const
{
	return success_;
}

std::string CreateOutboundCallNumberResult::getOutboundCallNumberId()const
{
	return outboundCallNumberId_;
}

