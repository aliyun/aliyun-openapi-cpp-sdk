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

#include <alibabacloud/dysmsapi/model/BatchSendMessageToGlobeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

BatchSendMessageToGlobeResult::BatchSendMessageToGlobeResult() :
	ServiceResult()
{}

BatchSendMessageToGlobeResult::BatchSendMessageToGlobeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchSendMessageToGlobeResult::~BatchSendMessageToGlobeResult()
{}

void BatchSendMessageToGlobeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResponseCode"].isNull())
		responseCode_ = value["ResponseCode"].asString();
	if(!value["FailedList"].isNull())
		failedList_ = value["FailedList"].asString();
	if(!value["ResponseDescription"].isNull())
		responseDescription_ = value["ResponseDescription"].asString();
	if(!value["From"].isNull())
		from_ = value["From"].asString();
	if(!value["MessageIdList"].isNull())
		messageIdList_ = value["MessageIdList"].asString();
	if(!value["SuccessCount"].isNull())
		successCount_ = value["SuccessCount"].asString();

}

std::string BatchSendMessageToGlobeResult::getResponseCode()const
{
	return responseCode_;
}

std::string BatchSendMessageToGlobeResult::getFailedList()const
{
	return failedList_;
}

std::string BatchSendMessageToGlobeResult::getResponseDescription()const
{
	return responseDescription_;
}

std::string BatchSendMessageToGlobeResult::getFrom()const
{
	return from_;
}

std::string BatchSendMessageToGlobeResult::getMessageIdList()const
{
	return messageIdList_;
}

std::string BatchSendMessageToGlobeResult::getSuccessCount()const
{
	return successCount_;
}

