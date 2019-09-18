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

#include <alibabacloud/snsuapi/model/BandOfferOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Snsuapi;
using namespace AlibabaCloud::Snsuapi::Model;

BandOfferOrderResult::BandOfferOrderResult() :
	ServiceResult()
{}

BandOfferOrderResult::BandOfferOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BandOfferOrderResult::~BandOfferOrderResult()
{}

void BandOfferOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultModuleNode = value["ResultModule"];
	if(!resultModuleNode["LxOrderId"].isNull())
		resultModule_.lxOrderId = std::stol(resultModuleNode["LxOrderId"].asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

BandOfferOrderResult::ResultModule BandOfferOrderResult::getResultModule()const
{
	return resultModule_;
}

std::string BandOfferOrderResult::getResultMessage()const
{
	return resultMessage_;
}

std::string BandOfferOrderResult::getResultCode()const
{
	return resultCode_;
}

