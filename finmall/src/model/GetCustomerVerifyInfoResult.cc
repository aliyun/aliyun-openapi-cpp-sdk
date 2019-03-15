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

#include <alibabacloud/finmall/model/GetCustomerVerifyInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

GetCustomerVerifyInfoResult::GetCustomerVerifyInfoResult() :
	ServiceResult()
{}

GetCustomerVerifyInfoResult::GetCustomerVerifyInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomerVerifyInfoResult::~GetCustomerVerifyInfoResult()
{}

void GetCustomerVerifyInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LegalPersonName"].isNull())
		data_.legalPersonName = dataNode["LegalPersonName"].asString();
	if(!dataNode["IdCardNumber"].isNull())
		data_.idCardNumber = dataNode["IdCardNumber"].asString();
	if(!dataNode["EnterpriseName"].isNull())
		data_.enterpriseName = dataNode["EnterpriseName"].asString();
	if(!dataNode["BusinessLicense"].isNull())
		data_.businessLicense = dataNode["BusinessLicense"].asString();
	if(!dataNode["Address"].isNull())
		data_.address = dataNode["Address"].asString();
	if(!dataNode["PhoneNumber"].isNull())
		data_.phoneNumber = dataNode["PhoneNumber"].asString();
	if(!dataNode["BankCard"].isNull())
		data_.bankCard = dataNode["BankCard"].asString();
	if(!dataNode["LoanSubject"].isNull())
		data_.loanSubject = dataNode["LoanSubject"].asString();
	if(!dataNode["IdCardFrontPage"].isNull())
		data_.idCardFrontPage = dataNode["IdCardFrontPage"].asString();
	if(!dataNode["IdCardBackPage"].isNull())
		data_.idCardBackPage = dataNode["IdCardBackPage"].asString();
	if(!dataNode["ValidateTime"].isNull())
		data_.validateTime = dataNode["ValidateTime"].asString();
	if(!dataNode["ValidateState"].isNull())
		data_.validateState = dataNode["ValidateState"].asString();
	if(!dataNode["Email"].isNull())
		data_.email = dataNode["Email"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCustomerVerifyInfoResult::getMessage()const
{
	return message_;
}

GetCustomerVerifyInfoResult::Data GetCustomerVerifyInfoResult::getData()const
{
	return data_;
}

std::string GetCustomerVerifyInfoResult::getCode()const
{
	return code_;
}

