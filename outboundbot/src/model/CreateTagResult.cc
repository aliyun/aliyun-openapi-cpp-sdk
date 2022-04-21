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

#include <alibabacloud/outboundbot/model/CreateTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateTagResult::CreateTagResult() :
	ServiceResult()
{}

CreateTagResult::CreateTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTagResult::~CreateTagResult()
{}

void CreateTagResult::parse(const std::string &payload)
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
	if(!value["TagId"].isNull())
		tagId_ = value["TagId"].asString();

}

std::string CreateTagResult::getMessage()const
{
	return message_;
}

int CreateTagResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateTagResult::getTagId()const
{
	return tagId_;
}

std::string CreateTagResult::getCode()const
{
	return code_;
}

bool CreateTagResult::getSuccess()const
{
	return success_;
}

