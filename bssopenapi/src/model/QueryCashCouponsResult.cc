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
	auto allDataNode = value["Data"]["CashCoupon"];
	for (auto valueDataCashCoupon : allDataNode)
	{
		CashCoupon dataObject;
		if(!valueDataCashCoupon["Status"].isNull())
			dataObject.status = valueDataCashCoupon["Status"].asString();
		if(!valueDataCashCoupon["ExpiryTime"].isNull())
			dataObject.expiryTime = valueDataCashCoupon["ExpiryTime"].asString();
		if(!valueDataCashCoupon["GrantedTime"].isNull())
			dataObject.grantedTime = valueDataCashCoupon["GrantedTime"].asString();
		if(!valueDataCashCoupon["NominalValue"].isNull())
			dataObject.nominalValue = valueDataCashCoupon["NominalValue"].asString();
		if(!valueDataCashCoupon["EffectiveTime"].isNull())
			dataObject.effectiveTime = valueDataCashCoupon["EffectiveTime"].asString();
		if(!valueDataCashCoupon["ApplicableScenarios"].isNull())
			dataObject.applicableScenarios = valueDataCashCoupon["ApplicableScenarios"].asString();
		if(!valueDataCashCoupon["CashCouponId"].isNull())
			dataObject.cashCouponId = std::stol(valueDataCashCoupon["CashCouponId"].asString());
		if(!valueDataCashCoupon["ApplicableProducts"].isNull())
			dataObject.applicableProducts = valueDataCashCoupon["ApplicableProducts"].asString();
		if(!valueDataCashCoupon["CashCouponNo"].isNull())
			dataObject.cashCouponNo = valueDataCashCoupon["CashCouponNo"].asString();
		if(!valueDataCashCoupon["Balance"].isNull())
			dataObject.balance = valueDataCashCoupon["Balance"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

