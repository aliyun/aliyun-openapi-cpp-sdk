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

#include <alibabacloud/dytnsapi/model/DescribePhoneNumberAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dytnsapi;
using namespace AlibabaCloud::Dytnsapi::Model;

DescribePhoneNumberAttributeResult::DescribePhoneNumberAttributeResult() :
	ServiceResult()
{}

DescribePhoneNumberAttributeResult::DescribePhoneNumberAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePhoneNumberAttributeResult::~DescribePhoneNumberAttributeResult()
{}

void DescribePhoneNumberAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto phoneNumberAttributeNode = value["PhoneNumberAttribute"];
	if(!phoneNumberAttributeNode["BasicCarrier"].isNull())
		phoneNumberAttribute_.basicCarrier = phoneNumberAttributeNode["BasicCarrier"].asString();
	if(!phoneNumberAttributeNode["Carrier"].isNull())
		phoneNumberAttribute_.carrier = phoneNumberAttributeNode["Carrier"].asString();
	if(!phoneNumberAttributeNode["IsNumberPortability"].isNull())
		phoneNumberAttribute_.isNumberPortability = phoneNumberAttributeNode["IsNumberPortability"].asString() == "true";
	if(!phoneNumberAttributeNode["NumberSegment"].isNull())
		phoneNumberAttribute_.numberSegment = std::stol(phoneNumberAttributeNode["NumberSegment"].asString());
	if(!phoneNumberAttributeNode["City"].isNull())
		phoneNumberAttribute_.city = phoneNumberAttributeNode["City"].asString();
	if(!phoneNumberAttributeNode["Province"].isNull())
		phoneNumberAttribute_.province = phoneNumberAttributeNode["Province"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribePhoneNumberAttributeResult::getMessage()const
{
	return message_;
}

DescribePhoneNumberAttributeResult::PhoneNumberAttribute DescribePhoneNumberAttributeResult::getPhoneNumberAttribute()const
{
	return phoneNumberAttribute_;
}

std::string DescribePhoneNumberAttributeResult::getCode()const
{
	return code_;
}

