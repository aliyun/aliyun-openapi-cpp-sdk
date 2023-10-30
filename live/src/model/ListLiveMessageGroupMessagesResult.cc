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

#include <alibabacloud/live/model/ListLiveMessageGroupMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListLiveMessageGroupMessagesResult::ListLiveMessageGroupMessagesResult() :
	ServiceResult()
{}

ListLiveMessageGroupMessagesResult::ListLiveMessageGroupMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveMessageGroupMessagesResult::~ListLiveMessageGroupMessagesResult()
{}

void ListLiveMessageGroupMessagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMessageListNode = value["MessageList"]["Messages"];
	for (auto valueMessageListMessages : allMessageListNode)
	{
		Messages messageListObject;
		if(!valueMessageListMessages["Body"].isNull())
			messageListObject.body = valueMessageListMessages["Body"].asString();
		if(!valueMessageListMessages["Timestamp"].isNull())
			messageListObject.timestamp = std::stol(valueMessageListMessages["Timestamp"].asString());
		if(!valueMessageListMessages["MsgTid"].isNull())
			messageListObject.msgTid = valueMessageListMessages["MsgTid"].asString();
		if(!valueMessageListMessages["MsgType"].isNull())
			messageListObject.msgType = std::stol(valueMessageListMessages["MsgType"].asString());
		if(!valueMessageListMessages["SeqNumber"].isNull())
			messageListObject.seqNumber = std::stol(valueMessageListMessages["SeqNumber"].asString());
		if(!valueMessageListMessages["TotalMessages"].isNull())
			messageListObject.totalMessages = std::stol(valueMessageListMessages["TotalMessages"].asString());
		auto senderNode = value["Sender"];
		if(!senderNode["UserId"].isNull())
			messageListObject.sender.userId = senderNode["UserId"].asString();
		if(!senderNode["UserInfo"].isNull())
			messageListObject.sender.userInfo = senderNode["UserInfo"].asString();
		messageList_.push_back(messageListObject);
	}
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = std::stol(value["NextPageToken"].asString());
	if(!value["Hasmore"].isNull())
		hasmore_ = value["Hasmore"].asString() == "true";

}

bool ListLiveMessageGroupMessagesResult::getHasmore()const
{
	return hasmore_;
}

long ListLiveMessageGroupMessagesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListLiveMessageGroupMessagesResult::Messages> ListLiveMessageGroupMessagesResult::getMessageList()const
{
	return messageList_;
}

std::string ListLiveMessageGroupMessagesResult::getGroupId()const
{
	return groupId_;
}

