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

#include <alibabacloud/bssopenapi/model/QueryCashCouponsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryCashCouponsResult::QueryCashCouponsResult() :
	ServiceResult()
{}

QueryCashCouponsResult::QueryCashCouponsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCashCouponsResult::~QueryCashCouponsResult()
{}

void QueryCashCouponsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["CashCoupon"];
	for (auto value : allData)
	{
		CashCoupon dataObject;
		if(!value["CashCouponId"].isNull())
			dataObject.cashCouponId = std::stol(value["CashCouponId"].asString());
		if(!value["CashCouponNo"].isNull())
			dataObject.cashCouponNo = value["CashCouponNo"].asString();
		if(!value["GrantedTime"].isNull())
			dataObject.grantedTime = value["GrantedTime"].asString();
		if(!value["EffectiveTime"].isNull())
			dataObject.effectiveTime = value["EffectiveTime"].asString();
		if(!value["ExpiryTime"].isNull())
			dataObject.expiryTime = value["ExpiryTime"].asString();
		if(!value["ApplicableProducts"].isNull())
			dataObject.applicableProducts = value["ApplicableProducts"].asString();
		if(!value["ApplicableScenarios"].isNull())
			dataObject.applicableScenarios = value["ApplicableScenarios"].asString();
		if(!value["NominalValue"].isNull())
			dataObject.nominalValue = value["NominalValue"].asString();
		if(!value["Balance"].isNull())
			dataObject.balance = value["Balance"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCashCouponsResult::getMessage()const
{
	return message_;
}

std::vector<QueryCashCouponsResult::CashCoupon> QueryCashCouponsResult::getData()const
{
	return data_;
}

std::string QueryCashCouponsResult::getCode()const
{
	return code_;
}

bool QueryCashCouponsResult::getSuccess()const
{
	return success_;
}

