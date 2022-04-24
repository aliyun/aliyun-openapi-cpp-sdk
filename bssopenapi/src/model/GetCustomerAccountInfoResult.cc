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

#include <alibabacloud/bssopenapi/model/GetCustomerAccountInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetCustomerAccountInfoResult::GetCustomerAccountInfoResult() :
	ServiceResult()
{}

GetCustomerAccountInfoResult::GetCustomerAccountInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomerAccountInfoResult::~GetCustomerAccountInfoResult()
{}

void GetCustomerAccountInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Mpk"].isNull())
		data_.mpk = std::stol(dataNode["Mpk"].asString());
	if(!dataNode["LoginEmail"].isNull())
		data_.loginEmail = dataNode["LoginEmail"].asString();
	if(!dataNode["HostingStatus"].isNull())
		data_.hostingStatus = dataNode["HostingStatus"].asString();
	if(!dataNode["AccountType"].isNull())
		data_.accountType = dataNode["AccountType"].asString();
	if(!dataNode["CreditLimitStatus"].isNull())
		data_.creditLimitStatus = dataNode["CreditLimitStatus"].asString();
	if(!dataNode["IsCertified"].isNull())
		data_.isCertified = dataNode["IsCertified"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetCustomerAccountInfoResult::getMessage()const
{
	return message_;
}

GetCustomerAccountInfoResult::Data GetCustomerAccountInfoResult::getData()const
{
	return data_;
}

std::string GetCustomerAccountInfoResult::getCode()const
{
	return code_;
}

bool GetCustomerAccountInfoResult::getSuccess()const
{
	return success_;
}

