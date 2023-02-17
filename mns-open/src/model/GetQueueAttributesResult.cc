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

#include <alibabacloud/mns-open/model/GetQueueAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

GetQueueAttributesResult::GetQueueAttributesResult() :
	ServiceResult()
{}

GetQueueAttributesResult::GetQueueAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQueueAttributesResult::~GetQueueAttributesResult()
{}

void GetQueueAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["QueueName"].isNull())
		data_.queueName = dataNode["QueueName"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = std::stol(dataNode["LastModifyTime"].asString());
	if(!dataNode["DelaySeconds"].isNull())
		data_.delaySeconds = std::stol(dataNode["DelaySeconds"].asString());
	if(!dataNode["MaximumMessageSize"].isNull())
		data_.maximumMessageSize = std::stol(dataNode["MaximumMessageSize"].asString());
	if(!dataNode["MessageRetentionPeriod"].isNull())
		data_.messageRetentionPeriod = std::stol(dataNode["MessageRetentionPeriod"].asString());
	if(!dataNode["VisibilityTimeout"].isNull())
		data_.visibilityTimeout = std::stol(dataNode["VisibilityTimeout"].asString());
	if(!dataNode["PollingWaitSeconds"].isNull())
		data_.pollingWaitSeconds = std::stol(dataNode["PollingWaitSeconds"].asString());
	if(!dataNode["ActiveMessages"].isNull())
		data_.activeMessages = std::stol(dataNode["ActiveMessages"].asString());
	if(!dataNode["InactiveMessages"].isNull())
		data_.inactiveMessages = std::stol(dataNode["InactiveMessages"].asString());
	if(!dataNode["DelayMessages"].isNull())
		data_.delayMessages = std::stol(dataNode["DelayMessages"].asString());
	if(!dataNode["LoggingEnabled"].isNull())
		data_.loggingEnabled = dataNode["LoggingEnabled"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetQueueAttributesResult::getStatus()const
{
	return status_;
}

std::string GetQueueAttributesResult::getMessage()const
{
	return message_;
}

GetQueueAttributesResult::Data GetQueueAttributesResult::getData()const
{
	return data_;
}

long GetQueueAttributesResult::getCode()const
{
	return code_;
}

bool GetQueueAttributesResult::getSuccess()const
{
	return success_;
}

