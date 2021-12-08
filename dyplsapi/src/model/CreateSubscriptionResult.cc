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

#include <alibabacloud/dyplsapi/model/CreateSubscriptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

CreateSubscriptionResult::CreateSubscriptionResult() :
	ServiceResult()
{}

CreateSubscriptionResult::CreateSubscriptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSubscriptionResult::~CreateSubscriptionResult()
{}

void CreateSubscriptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SubsId"].isNull())
		data_.subsId = dataNode["SubsId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateSubscriptionResult::getMessage()const
{
	return message_;
}

CreateSubscriptionResult::Data CreateSubscriptionResult::getData()const
{
	return data_;
}

std::string CreateSubscriptionResult::getCode()const
{
	return code_;
}

