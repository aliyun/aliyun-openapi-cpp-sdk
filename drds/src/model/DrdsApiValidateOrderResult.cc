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

#include <alibabacloud/drds/model/DrdsApiValidateOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DrdsApiValidateOrderResult::DrdsApiValidateOrderResult() :
	ServiceResult()
{}

DrdsApiValidateOrderResult::DrdsApiValidateOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DrdsApiValidateOrderResult::~DrdsApiValidateOrderResult()
{}

void DrdsApiValidateOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["msg"].isNull())
		msg_ = value["msg"].asString();
	if(!value["data"].isNull())
		data_ = value["data"].asString() == "true";
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string DrdsApiValidateOrderResult::getMsg()const
{
	return msg_;
}

std::string DrdsApiValidateOrderResult::getRequestId()const
{
	return requestId_;
}

bool DrdsApiValidateOrderResult::getData()const
{
	return data_;
}

std::string DrdsApiValidateOrderResult::getCode()const
{
	return code_;
}

bool DrdsApiValidateOrderResult::getSuccess()const
{
	return success_;
}

