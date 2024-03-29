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

#include <alibabacloud/mns-open/model/SetSubscriptionAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

SetSubscriptionAttributesResult::SetSubscriptionAttributesResult() :
	ServiceResult()
{}

SetSubscriptionAttributesResult::SetSubscriptionAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetSubscriptionAttributesResult::~SetSubscriptionAttributesResult()
{}

void SetSubscriptionAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Code"].isNull())
		data_.code = std::stol(dataNode["Code"].asString());
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SetSubscriptionAttributesResult::getStatus()const
{
	return status_;
}

std::string SetSubscriptionAttributesResult::getMessage()const
{
	return message_;
}

SetSubscriptionAttributesResult::Data SetSubscriptionAttributesResult::getData()const
{
	return data_;
}

long SetSubscriptionAttributesResult::getCode()const
{
	return code_;
}

bool SetSubscriptionAttributesResult::getSuccess()const
{
	return success_;
}

