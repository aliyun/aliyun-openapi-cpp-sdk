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

#include <alibabacloud/btripopen/model/AccessTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BtripOpen;
using namespace AlibabaCloud::BtripOpen::Model;

AccessTokenResult::AccessTokenResult() :
	ServiceResult()
{}

AccessTokenResult::AccessTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AccessTokenResult::~AccessTokenResult()
{}

void AccessTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["token"].isNull())
		data_.token = dataNode["token"].asString();
	if(!dataNode["expire"].isNull())
		data_.expire = std::stol(dataNode["expire"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["traceId"].isNull())
		traceId_ = value["traceId"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();

}

std::string AccessTokenResult::getRequestId()const
{
	return requestId_;
}

std::string AccessTokenResult::getMessage()const
{
	return message_;
}

std::string AccessTokenResult::getTraceId()const
{
	return traceId_;
}

AccessTokenResult::Data AccessTokenResult::getData()const
{
	return data_;
}

std::string AccessTokenResult::getCode()const
{
	return code_;
}

