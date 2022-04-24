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

#include <alibabacloud/bssopenapi/model/QueryAccountBalanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryAccountBalanceResult::QueryAccountBalanceResult() :
	ServiceResult()
{}

QueryAccountBalanceResult::QueryAccountBalanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccountBalanceResult::~QueryAccountBalanceResult()
{}

void QueryAccountBalanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AvailableAmount"].isNull())
		data_.availableAmount = dataNode["AvailableAmount"].asString();
	if(!dataNode["CreditAmount"].isNull())
		data_.creditAmount = dataNode["CreditAmount"].asString();
	if(!dataNode["MybankCreditAmount"].isNull())
		data_.mybankCreditAmount = dataNode["MybankCreditAmount"].asString();
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	if(!dataNode["AvailableCashAmount"].isNull())
		data_.availableCashAmount = dataNode["AvailableCashAmount"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAccountBalanceResult::getMessage()const
{
	return message_;
}

QueryAccountBalanceResult::Data QueryAccountBalanceResult::getData()const
{
	return data_;
}

std::string QueryAccountBalanceResult::getCode()const
{
	return code_;
}

bool QueryAccountBalanceResult::getSuccess()const
{
	return success_;
}

