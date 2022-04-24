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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stol(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allRedeemNode = dataNode["Redeem"]["RedeemItem"];
	for (auto dataNodeRedeemRedeemItem : allRedeemNode)
	{
		Data::RedeemItem redeemItemObject;
		if(!dataNodeRedeemRedeemItem["ExpiryTime"].isNull())
			redeemItemObject.expiryTime = dataNodeRedeemRedeemItem["ExpiryTime"].asString();
		if(!dataNodeRedeemRedeemItem["GrantedTime"].isNull())
			redeemItemObject.grantedTime = dataNodeRedeemRedeemItem["GrantedTime"].asString();
		if(!dataNodeRedeemRedeemItem["Status"].isNull())
			redeemItemObject.status = dataNodeRedeemRedeemItem["Status"].asString();
		if(!dataNodeRedeemRedeemItem["Specification"].isNull())
			redeemItemObject.specification = dataNodeRedeemRedeemItem["Specification"].asString();
		if(!dataNodeRedeemRedeemItem["NominalValue"].isNull())
			redeemItemObject.nominalValue = dataNodeRedeemRedeemItem["NominalValue"].asString();
		if(!dataNodeRedeemRedeemItem["EffectiveTime"].isNull())
			redeemItemObject.effectiveTime = dataNodeRedeemRedeemItem["EffectiveTime"].asString();
		if(!dataNodeRedeemRedeemItem["RedeemId"].isNull())
			redeemItemObject.redeemId = dataNodeRedeemRedeemItem["RedeemId"].asString();
		if(!dataNodeRedeemRedeemItem["RedeemNo"].isNull())
			redeemItemObject.redeemNo = dataNodeRedeemRedeemItem["RedeemNo"].asString();
		if(!dataNodeRedeemRedeemItem["ApplicableProducts"].isNull())
			redeemItemObject.applicableProducts = dataNodeRedeemRedeemItem["ApplicableProducts"].asString();
		if(!dataNodeRedeemRedeemItem["Balance"].isNull())
			redeemItemObject.balance = dataNodeRedeemRedeemItem["Balance"].asString();
		data_.redeem.push_back(redeemItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

