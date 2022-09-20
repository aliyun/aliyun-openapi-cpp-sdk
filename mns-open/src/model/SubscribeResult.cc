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

#include <alibabacloud/mns-open/model/SubscribeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

SubscribeResult::SubscribeResult() :
	ServiceResult()
{}

SubscribeResult::SubscribeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubscribeResult::~SubscribeResult()
{}

void SubscribeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string SubscribeResult::getStatus()const
{
	return status_;
}

std::string SubscribeResult::getMessage()const
{
	return message_;
}

std::string SubscribeResult::getData()const
{
	return data_;
}

long SubscribeResult::getCode()const
{
	return code_;
}

bool SubscribeResult::getSuccess()const
{
	return success_;
}

