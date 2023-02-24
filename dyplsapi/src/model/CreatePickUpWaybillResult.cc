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

#include <alibabacloud/dyplsapi/model/CreatePickUpWaybillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

CreatePickUpWaybillResult::CreatePickUpWaybillResult() :
	ServiceResult()
{}

CreatePickUpWaybillResult::CreatePickUpWaybillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePickUpWaybillResult::~CreatePickUpWaybillResult()
{}

void CreatePickUpWaybillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString();
	if(!dataNode["CpCode"].isNull())
		data_.cpCode = dataNode["CpCode"].asString();
	if(!dataNode["MailNo"].isNull())
		data_.mailNo = dataNode["MailNo"].asString();
	if(!dataNode["ErrorCode"].isNull())
		data_.errorCode = dataNode["ErrorCode"].asString();
	if(!dataNode["ErrorMsg"].isNull())
		data_.errorMsg = dataNode["ErrorMsg"].asString();
	if(!dataNode["GotCode"].isNull())
		data_.gotCode = dataNode["GotCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreatePickUpWaybillResult::getMessage()const
{
	return message_;
}

int CreatePickUpWaybillResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreatePickUpWaybillResult::Data CreatePickUpWaybillResult::getData()const
{
	return data_;
}

