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

#include <alibabacloud/mns-open/model/GetSubscriptionAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

GetSubscriptionAttributesResult::GetSubscriptionAttributesResult() :
	ServiceResult()
{}

GetSubscriptionAttributesResult::GetSubscriptionAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubscriptionAttributesResult::~GetSubscriptionAttributesResult()
{}

void GetSubscriptionAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SubscriptionName"].isNull())
		data_.subscriptionName = dataNode["SubscriptionName"].asString();
	if(!dataNode["TopicOwner"].isNull())
		data_.topicOwner = dataNode["TopicOwner"].asString();
	if(!dataNode["TopicName"].isNull())
		data_.topicName = dataNode["TopicName"].asString();
	if(!dataNode["Endpoint"].isNull())
		data_.endpoint = dataNode["Endpoint"].asString();
	if(!dataNode["FilterTag"].isNull())
		data_.filterTag = dataNode["FilterTag"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = std::stol(dataNode["LastModifyTime"].asString());
	if(!dataNode["NotifyStrategy"].isNull())
		data_.notifyStrategy = dataNode["NotifyStrategy"].asString();
	if(!dataNode["NotifyContentFormat"].isNull())
		data_.notifyContentFormat = dataNode["NotifyContentFormat"].asString();
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetSubscriptionAttributesResult::getStatus()const
{
	return status_;
}

std::string GetSubscriptionAttributesResult::getMessage()const
{
	return message_;
}

GetSubscriptionAttributesResult::Data GetSubscriptionAttributesResult::getData()const
{
	return data_;
}

long GetSubscriptionAttributesResult::getCode()const
{
	return code_;
}

bool GetSubscriptionAttributesResult::getSuccess()const
{
	return success_;
}

