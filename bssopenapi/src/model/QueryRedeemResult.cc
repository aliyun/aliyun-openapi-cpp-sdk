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

#include <alibabacloud/bssopenapi/model/QueryRedeemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryRedeemResult::QueryRedeemResult() :
	ServiceResult()
{}

QueryRedeemResult::QueryRedeemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRedeemResult::~QueryRedeemResult()
{}

void QueryRedeemResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stol(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allRedeem = value["Redeem"]["RedeemItem"];
	for (auto value : allRedeem)
	{
		Data::RedeemItem redeemItemObject;
		if(!value["RedeemId"].isNull())
			redeemItemObject.redeemId = value["RedeemId"].asString();
		if(!value["RedeemNo"].isNull())
			redeemItemObject.redeemNo = value["RedeemNo"].asString();
		if(!value["Status"].isNull())
			redeemItemObject.status = value["Status"].asString();
		if(!value["GrantedTime"].isNull())
			redeemItemObject.grantedTime = value["GrantedTime"].asString();
		if(!value["EffectiveTime"].isNull())
			redeemItemObject.effectiveTime = value["EffectiveTime"].asString();
		if(!value["ExpiryTime"].isNull())
			redeemItemObject.expiryTime = value["ExpiryTime"].asString();
		if(!value["NominalValue"].isNull())
			redeemItemObject.nominalValue = value["NominalValue"].asString();
		if(!value["Balance"].isNull())
			redeemItemObject.balance = value["Balance"].asString();
		if(!value["ApplicableProducts"].isNull())
			redeemItemObject.applicableProducts = value["ApplicableProducts"].asString();
		if(!value["Specification"].isNull())
			redeemItemObject.specification = value["Specification"].asString();
		data_.redeem.push_back(redeemItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryRedeemResult::getMessage()const
{
	return message_;
}

QueryRedeemResult::Data QueryRedeemResult::getData()const
{
	return data_;
}

std::string QueryRedeemResult::getCode()const
{
	return code_;
}

bool QueryRedeemResult::getSuccess()const
{
	return success_;
}

