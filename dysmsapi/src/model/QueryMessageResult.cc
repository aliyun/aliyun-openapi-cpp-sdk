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

#include <alibabacloud/dysmsapi/model/QueryMessageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QueryMessageResult::QueryMessageResult() :
	ServiceResult()
{}

QueryMessageResult::QueryMessageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMessageResult::~QueryMessageResult()
{}

void QueryMessageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto numberDetailNode = value["NumberDetail"];
	if(!numberDetailNode["Carrier"].isNull())
		numberDetail_.carrier = numberDetailNode["Carrier"].asString();
	if(!numberDetailNode["Region"].isNull())
		numberDetail_.region = numberDetailNode["Region"].asString();
	if(!numberDetailNode["Country"].isNull())
		numberDetail_.country = numberDetailNode["Country"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ErrorDescription"].isNull())
		errorDescription_ = value["ErrorDescription"].asString();
	if(!value["ResponseCode"].isNull())
		responseCode_ = value["ResponseCode"].asString();
	if(!value["ReceiveDate"].isNull())
		receiveDate_ = value["ReceiveDate"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ResponseDescription"].isNull())
		responseDescription_ = value["ResponseDescription"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["SendDate"].isNull())
		sendDate_ = value["SendDate"].asString();
	if(!value["To"].isNull())
		to_ = value["To"].asString();
	if(!value["MessageId"].isNull())
		messageId_ = value["MessageId"].asString();

}

std::string QueryMessageResult::getStatus()const
{
	return status_;
}

std::string QueryMessageResult::getErrorDescription()const
{
	return errorDescription_;
}

std::string QueryMessageResult::getResponseCode()const
{
	return responseCode_;
}

QueryMessageResult::NumberDetail QueryMessageResult::getNumberDetail()const
{
	return numberDetail_;
}

std::string QueryMessageResult::getReceiveDate()const
{
	return receiveDate_;
}

std::string QueryMessageResult::getMessage()const
{
	return message_;
}

std::string QueryMessageResult::getResponseDescription()const
{
	return responseDescription_;
}

std::string QueryMessageResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryMessageResult::getSendDate()const
{
	return sendDate_;
}

std::string QueryMessageResult::getTo()const
{
	return to_;
}

std::string QueryMessageResult::getMessageId()const
{
	return messageId_;
}

