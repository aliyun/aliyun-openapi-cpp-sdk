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

#include <alibabacloud/mse/model/DeleteGatewayAuthConsumerResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

DeleteGatewayAuthConsumerResourceResult::DeleteGatewayAuthConsumerResourceResult() :
	ServiceResult()
{}

DeleteGatewayAuthConsumerResourceResult::DeleteGatewayAuthConsumerResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteGatewayAuthConsumerResourceResult::~DeleteGatewayAuthConsumerResourceResult()
{}

void DeleteGatewayAuthConsumerResourceResult::parse(const std::string &payload)
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

std::string DeleteGatewayAuthConsumerResourceResult::getMessage()const
{
	return message_;
}

int DeleteGatewayAuthConsumerResourceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DeleteGatewayAuthConsumerResourceResult::getDynamicCode()const
{
	return dynamicCode_;
}

bool DeleteGatewayAuthConsumerResourceResult::getData()const
{
	return data_;
}

std::string DeleteGatewayAuthConsumerResourceResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteGatewayAuthConsumerResourceResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int DeleteGatewayAuthConsumerResourceResult::getCode()const
{
	return code_;
}

bool DeleteGatewayAuthConsumerResourceResult::getSuccess()const
{
	return success_;
}

