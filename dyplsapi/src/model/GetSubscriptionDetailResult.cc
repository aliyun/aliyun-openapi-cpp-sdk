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

#include <alibabacloud/dyplsapi/model/GetSubscriptionDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

GetSubscriptionDetailResult::GetSubscriptionDetailResult() :
	ServiceResult()
{}

GetSubscriptionDetailResult::GetSubscriptionDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubscriptionDetailResult::~GetSubscriptionDetailResult()
{}

void GetSubscriptionDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PhoneNo"].isNull())
		data_.phoneNo = dataNode["PhoneNo"].asString();
	if(!dataNode["City"].isNull())
		data_.city = dataNode["City"].asString();
	if(!dataNode["SwitchStatus"].isNull())
		data_.switchStatus = std::stoi(dataNode["SwitchStatus"].asString());
	if(!dataNode["SubsId"].isNull())
		data_.subsId = std::stol(dataNode["SubsId"].asString());
	if(!dataNode["SecretNo"].isNull())
		data_.secretNo = dataNode["SecretNo"].asString();
	if(!dataNode["Vendor"].isNull())
		data_.vendor = dataNode["Vendor"].asString();
	if(!dataNode["Province"].isNull())
		data_.province = dataNode["Province"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSubscriptionDetailResult::getMessage()const
{
	return message_;
}

GetSubscriptionDetailResult::Data GetSubscriptionDetailResult::getData()const
{
	return data_;
}

std::string GetSubscriptionDetailResult::getCode()const
{
	return code_;
}

