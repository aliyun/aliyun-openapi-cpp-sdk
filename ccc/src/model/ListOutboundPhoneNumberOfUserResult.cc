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

#include <alibabacloud/ccc/model/ListOutboundPhoneNumberOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListOutboundPhoneNumberOfUserResult::ListOutboundPhoneNumberOfUserResult() :
	ServiceResult()
{}

ListOutboundPhoneNumberOfUserResult::ListOutboundPhoneNumberOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOutboundPhoneNumberOfUserResult::~ListOutboundPhoneNumberOfUserResult()
{}

void ListOutboundPhoneNumberOfUserResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOutboundPhoneNumbers = value["OutboundPhoneNumbers"]["PhoneNumber"];
	for (auto value : allOutboundPhoneNumbers)
	{
		PhoneNumber outboundPhoneNumbersObject;
		if(!value["PhoneNumberId"].isNull())
			outboundPhoneNumbersObject.phoneNumberId = value["PhoneNumberId"].asString();
		if(!value["InstanceId"].isNull())
			outboundPhoneNumbersObject.instanceId = value["InstanceId"].asString();
		if(!value["Number"].isNull())
			outboundPhoneNumbersObject.number = value["Number"].asString();
		if(!value["PhoneNumberDescription"].isNull())
			outboundPhoneNumbersObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
		if(!value["TestOnly"].isNull())
			outboundPhoneNumbersObject.testOnly = value["TestOnly"].asString() == "true";
		if(!value["RemainingTime"].isNull())
			outboundPhoneNumbersObject.remainingTime = std::stoi(value["RemainingTime"].asString());
		if(!value["AllowOutbound"].isNull())
			outboundPhoneNumbersObject.allowOutbound = value["AllowOutbound"].asString() == "true";
		if(!value["Usage"].isNull())
			outboundPhoneNumbersObject.usage = value["Usage"].asString();
		if(!value["Trunks"].isNull())
			outboundPhoneNumbersObject.trunks = std::stoi(value["Trunks"].asString());
		if(!value["City"].isNull())
			outboundPhoneNumbersObject.city = value["City"].asString();
		if(!value["Province"].isNull())
			outboundPhoneNumbersObject.province = value["Province"].asString();
		if(!value["PrivateFlag"].isNull())
			outboundPhoneNumbersObject.privateFlag = value["PrivateFlag"].asString() == "true";
		if(!value["SipTelX"].isNull())
			outboundPhoneNumbersObject.sipTelX = value["SipTelX"].asString();
		auto privacyNumberNode = value["PrivacyNumber"];
		if(!privacyNumberNode["PoolId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.poolId = privacyNumberNode["PoolId"].asString();
		if(!privacyNumberNode["Type"].isNull())
			outboundPhoneNumbersObject.privacyNumber.type = privacyNumberNode["Type"].asString();
		if(!privacyNumberNode["TelX"].isNull())
			outboundPhoneNumbersObject.privacyNumber.telX = privacyNumberNode["TelX"].asString();
		if(!privacyNumberNode["PoolName"].isNull())
			outboundPhoneNumbersObject.privacyNumber.poolName = privacyNumberNode["PoolName"].asString();
		if(!privacyNumberNode["PhoneNumber"].isNull())
			outboundPhoneNumbersObject.privacyNumber.phoneNumber = privacyNumberNode["PhoneNumber"].asString();
		if(!privacyNumberNode["Extra"].isNull())
			outboundPhoneNumbersObject.privacyNumber.extra = privacyNumberNode["Extra"].asString();
		if(!privacyNumberNode["BizId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.bizId = privacyNumberNode["BizId"].asString();
		if(!privacyNumberNode["SubId"].isNull())
			outboundPhoneNumbersObject.privacyNumber.subId = privacyNumberNode["SubId"].asString();
		if(!privacyNumberNode["RegionNameCity"].isNull())
			outboundPhoneNumbersObject.privacyNumber.regionNameCity = privacyNumberNode["RegionNameCity"].asString();
		outboundPhoneNumbers_.push_back(outboundPhoneNumbersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListOutboundPhoneNumberOfUserResult::getMessage()const
{
	return message_;
}

int ListOutboundPhoneNumberOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListOutboundPhoneNumberOfUserResult::PhoneNumber> ListOutboundPhoneNumberOfUserResult::getOutboundPhoneNumbers()const
{
	return outboundPhoneNumbers_;
}

std::string ListOutboundPhoneNumberOfUserResult::getCode()const
{
	return code_;
}

bool ListOutboundPhoneNumberOfUserResult::getSuccess()const
{
	return success_;
}

