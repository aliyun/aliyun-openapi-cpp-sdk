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

#include <alibabacloud/mns-open/model/GetTopicAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

GetTopicAttributesResult::GetTopicAttributesResult() :
	ServiceResult()
{}

GetTopicAttributesResult::GetTopicAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTopicAttributesResult::~GetTopicAttributesResult()
{}

void GetTopicAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TopicName"].isNull())
		data_.topicName = dataNode["TopicName"].asString();
	if(!dataNode["MessageCount"].isNull())
		data_.messageCount = std::stol(dataNode["MessageCount"].asString());
	if(!dataNode["MaxMessageSize"].isNull())
		data_.maxMessageSize = std::stol(dataNode["MaxMessageSize"].asString());
	if(!dataNode["MessageRetentionPeriod"].isNull())
		data_.messageRetentionPeriod = std::stol(dataNode["MessageRetentionPeriod"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = std::stol(dataNode["LastModifyTime"].asString());
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

std::string GetTopicAttributesResult::getStatus()const
{
	return status_;
}

std::string GetTopicAttributesResult::getMessage()const
{
	return message_;
}

GetTopicAttributesResult::Data GetTopicAttributesResult::getData()const
{
	return data_;
}

long GetTopicAttributesResult::getCode()const
{
	return code_;
}

bool GetTopicAttributesResult::getSuccess()const
{
	return success_;
}

