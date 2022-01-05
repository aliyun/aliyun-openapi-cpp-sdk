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

#include <alibabacloud/ccc/model/ListOutboundNumbersOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListOutboundNumbersOfUserResult::ListOutboundNumbersOfUserResult() :
	ServiceResult()
{}

ListOutboundNumbersOfUserResult::ListOutboundNumbersOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOutboundNumbersOfUserResult::~ListOutboundNumbersOfUserResult()
{}

void ListOutboundNumbersOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["PhoneNumber"];
	for (auto dataNodeListPhoneNumber : allListNode)
	{
		Data::PhoneNumber phoneNumberObject;
		if(!dataNodeListPhoneNumber["Number"].isNull())
			phoneNumberObject.number = dataNodeListPhoneNumber["Number"].asString();
		if(!dataNodeListPhoneNumber["City"].isNull())
			phoneNumberObject.city = dataNodeListPhoneNumber["City"].asString();
		if(!dataNodeListPhoneNumber["Province"].isNull())
			phoneNumberObject.province = dataNodeListPhoneNumber["Province"].asString();
		data_.list.push_back(phoneNumberObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListOutboundNumbersOfUserResult::getMessage()const
{
	return message_;
}

int ListOutboundNumbersOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListOutboundNumbersOfUserResult::Data ListOutboundNumbersOfUserResult::getData()const
{
	return data_;
}

std::string ListOutboundNumbersOfUserResult::getCode()const
{
	return code_;
}

