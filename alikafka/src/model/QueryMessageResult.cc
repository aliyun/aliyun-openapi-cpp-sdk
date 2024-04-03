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

#include <alibabacloud/alikafka/model/QueryMessageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

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
	auto allMessageListNode = value["MessageList"]["MessageVO"];
	for (auto valueMessageListMessageVO : allMessageListNode)
	{
		MessageVO messageListObject;
		if(!valueMessageListMessageVO["Topic"].isNull())
			messageListObject.topic = valueMessageListMessageVO["Topic"].asString();
		if(!valueMessageListMessageVO["Partition"].isNull())
			messageListObject.partition = std::stol(valueMessageListMessageVO["Partition"].asString());
		if(!valueMessageListMessageVO["Offset"].isNull())
			messageListObject.offset = std::stol(valueMessageListMessageVO["Offset"].asString());
		if(!valueMessageListMessageVO["Timestamp"].isNull())
			messageListObject.timestamp = std::stol(valueMessageListMessageVO["Timestamp"].asString());
		if(!valueMessageListMessageVO["TimestampType"].isNull())
			messageListObject.timestampType = valueMessageListMessageVO["TimestampType"].asString();
		if(!valueMessageListMessageVO["Checksum"].isNull())
			messageListObject.checksum = std::stol(valueMessageListMessageVO["Checksum"].asString());
		if(!valueMessageListMessageVO["SerializedKeySize"].isNull())
			messageListObject.serializedKeySize = std::stoi(valueMessageListMessageVO["SerializedKeySize"].asString());
		if(!valueMessageListMessageVO["SerializedValueSize"].isNull())
			messageListObject.serializedValueSize = std::stoi(valueMessageListMessageVO["SerializedValueSize"].asString());
		if(!valueMessageListMessageVO["Key"].isNull())
			messageListObject.key = valueMessageListMessageVO["Key"].asString();
		if(!valueMessageListMessageVO["Value"].isNull())
			messageListObject.value = valueMessageListMessageVO["Value"].asString();
		if(!valueMessageListMessageVO["KeyTruncated"].isNull())
			messageListObject.keyTruncated = valueMessageListMessageVO["KeyTruncated"].asString() == "true";
		if(!valueMessageListMessageVO["ValueTruncated"].isNull())
			messageListObject.valueTruncated = valueMessageListMessageVO["ValueTruncated"].asString() == "true";
		if(!valueMessageListMessageVO["TruncatedKeySize"].isNull())
			messageListObject.truncatedKeySize = std::stoi(valueMessageListMessageVO["TruncatedKeySize"].asString());
		if(!valueMessageListMessageVO["TruncatedValueSize"].isNull())
			messageListObject.truncatedValueSize = std::stoi(valueMessageListMessageVO["TruncatedValueSize"].asString());
		messageList_.push_back(messageListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryMessageResult::getMessage()const
{
	return message_;
}

int QueryMessageResult::getCode()const
{
	return code_;
}

std::vector<QueryMessageResult::MessageVO> QueryMessageResult::getMessageList()const
{
	return messageList_;
}

bool QueryMessageResult::getSuccess()const
{
	return success_;
}

