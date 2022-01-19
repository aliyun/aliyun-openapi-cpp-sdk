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

#include <alibabacloud/mse/model/CreateZnodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateZnodeResult::CreateZnodeResult() :
	ServiceResult()
{}

CreateZnodeResult::CreateZnodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateZnodeResult::~CreateZnodeResult()
{}

void CreateZnodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Data"].isNull())
		data_.data = dataNode["Data"].asString();
	if(!dataNode["Path"].isNull())
		data_.path = dataNode["Path"].asString();
	if(!dataNode["Dir"].isNull())
		data_.dir = dataNode["Dir"].asString() == "true";
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateZnodeResult::getHttpCode()const
{
	return httpCode_;
}

std::string CreateZnodeResult::getMessage()const
{
	return message_;
}

CreateZnodeResult::Data CreateZnodeResult::getData()const
{
	return data_;
}

std::string CreateZnodeResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateZnodeResult::getSuccess()const
{
	return success_;
}

