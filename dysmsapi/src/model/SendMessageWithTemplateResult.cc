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

#include <alibabacloud/dysmsapi/model/SendMessageWithTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

SendMessageWithTemplateResult::SendMessageWithTemplateResult() :
	ServiceResult()
{}

SendMessageWithTemplateResult::SendMessageWithTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SendMessageWithTemplateResult::~SendMessageWithTemplateResult()
{}

void SendMessageWithTemplateResult::parse(const std::string &payload)
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
	if(!value["ResponseCode"].isNull())
		responseCode_ = value["ResponseCode"].asString();
	if(!value["ResponseDescription"].isNull())
		responseDescription_ = value["ResponseDescription"].asString();
	if(!value["Segments"].isNull())
		segments_ = value["Segments"].asString();
	if(!value["To"].isNull())
		to_ = value["To"].asString();
	if(!value["MessageId"].isNull())
		messageId_ = value["MessageId"].asString();

}

std::string SendMessageWithTemplateResult::getResponseCode()const
{
	return responseCode_;
}

SendMessageWithTemplateResult::NumberDetail SendMessageWithTemplateResult::getNumberDetail()const
{
	return numberDetail_;
}

std::string SendMessageWithTemplateResult::getResponseDescription()const
{
	return responseDescription_;
}

std::string SendMessageWithTemplateResult::getSegments()const
{
	return segments_;
}

std::string SendMessageWithTemplateResult::getTo()const
{
	return to_;
}

std::string SendMessageWithTemplateResult::getMessageId()const
{
	return messageId_;
}

