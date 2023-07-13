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

#include <alibabacloud/mse/model/UpdateGatewayAuthConsumerResourceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

UpdateGatewayAuthConsumerResourceStatusResult::UpdateGatewayAuthConsumerResourceStatusResult() :
	ServiceResult()
{}

UpdateGatewayAuthConsumerResourceStatusResult::UpdateGatewayAuthConsumerResourceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGatewayAuthConsumerResourceStatusResult::~UpdateGatewayAuthConsumerResourceStatusResult()
{}

void UpdateGatewayAuthConsumerResourceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

std::string UpdateGatewayAuthConsumerResourceStatusResult::getMessage()const
{
	return message_;
}

int UpdateGatewayAuthConsumerResourceStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string UpdateGatewayAuthConsumerResourceStatusResult::getDynamicCode()const
{
	return dynamicCode_;
}

bool UpdateGatewayAuthConsumerResourceStatusResult::getData()const
{
	return data_;
}

std::string UpdateGatewayAuthConsumerResourceStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateGatewayAuthConsumerResourceStatusResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int UpdateGatewayAuthConsumerResourceStatusResult::getCode()const
{
	return code_;
}

bool UpdateGatewayAuthConsumerResourceStatusResult::getSuccess()const
{
	return success_;
}

