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

#include <alibabacloud/snsuapi/model/BandStartSpeedUpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Snsuapi;
using namespace AlibabaCloud::Snsuapi::Model;

BandStartSpeedUpResult::BandStartSpeedUpResult() :
	ServiceResult()
{}

BandStartSpeedUpResult::BandStartSpeedUpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BandStartSpeedUpResult::~BandStartSpeedUpResult()
{}

void BandStartSpeedUpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();
	if(!value["ResultModule"].isNull())
		resultModule_ = value["ResultModule"].asString() == "true";

}

bool BandStartSpeedUpResult::getResultModule()const
{
	return resultModule_;
}

std::string BandStartSpeedUpResult::getResultMessage()const
{
	return resultMessage_;
}

std::string BandStartSpeedUpResult::getResultCode()const
{
	return resultCode_;
}

