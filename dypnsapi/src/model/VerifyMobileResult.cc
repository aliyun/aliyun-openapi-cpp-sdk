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

#include <alibabacloud/dypnsapi/model/VerifyMobileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

VerifyMobileResult::VerifyMobileResult() :
	ServiceResult()
{}

VerifyMobileResult::VerifyMobileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifyMobileResult::~VerifyMobileResult()
{}

void VerifyMobileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto gateVerifyResultDTONode = value["GateVerifyResultDTO"];
	if(!gateVerifyResultDTONode["VerifyResult"].isNull())
		gateVerifyResultDTO_.verifyResult = gateVerifyResultDTONode["VerifyResult"].asString();
	if(!gateVerifyResultDTONode["VerifyId"].isNull())
		gateVerifyResultDTO_.verifyId = gateVerifyResultDTONode["VerifyId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

VerifyMobileResult::GateVerifyResultDTO VerifyMobileResult::getGateVerifyResultDTO()const
{
	return gateVerifyResultDTO_;
}

std::string VerifyMobileResult::getMessage()const
{
	return message_;
}

std::string VerifyMobileResult::getCode()const
{
	return code_;
}

