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

#include <alibabacloud/aliyuncvc/model/SendScreenStartResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

SendScreenStartResult::SendScreenStartResult() :
	ServiceResult()
{}

SendScreenStartResult::SendScreenStartResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SendScreenStartResult::~SendScreenStartResult()
{}

void SendScreenStartResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ReceiverInfo"].isNull())
		data_.receiverInfo = dataNode["ReceiverInfo"].asString();
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	auto allIceServersNode = dataNode["IceServers"]["IceServersItem"];
	for (auto dataNodeIceServersIceServersItem : allIceServersNode)
	{
		Data::IceServersItem iceServersItemObject;
		if(!dataNodeIceServersIceServersItem["Credential"].isNull())
			iceServersItemObject.credential = dataNodeIceServersIceServersItem["Credential"].asString();
		if(!dataNodeIceServersIceServersItem["Url"].isNull())
			iceServersItemObject.url = dataNodeIceServersIceServersItem["Url"].asString();
		if(!dataNodeIceServersIceServersItem["UserName"].isNull())
			iceServersItemObject.userName = dataNodeIceServersIceServersItem["UserName"].asString();
		data_.iceServers.push_back(iceServersItemObject);
	}
	auto authWsChannelConfigNode = dataNode["AuthWsChannelConfig"];
	if(!authWsChannelConfigNode["AuthWsUrl"].isNull())
		data_.authWsChannelConfig.authWsUrl = authWsChannelConfigNode["AuthWsUrl"].asString();
	if(!authWsChannelConfigNode["Token"].isNull())
		data_.authWsChannelConfig.token = authWsChannelConfigNode["Token"].asString();
	if(!authWsChannelConfigNode["WsOuterReConnTime"].isNull())
		data_.authWsChannelConfig.wsOuterReConnTime = std::stoi(authWsChannelConfigNode["WsOuterReConnTime"].asString());
	auto shareConfigNode = dataNode["ShareConfig"];
	if(!shareConfigNode["MaxMultiScreenShareBitrate"].isNull())
		data_.shareConfig.maxMultiScreenShareBitrate = std::stoi(shareConfigNode["MaxMultiScreenShareBitrate"].asString());
	if(!shareConfigNode["MaxScreenShareBitrate"].isNull())
		data_.shareConfig.maxScreenShareBitrate = std::stoi(shareConfigNode["MaxScreenShareBitrate"].asString());
	if(!shareConfigNode["ShareConfigMaxFrameRate"].isNull())
		data_.shareConfig.shareConfigMaxFrameRate = std::stoi(shareConfigNode["ShareConfigMaxFrameRate"].asString());
	if(!shareConfigNode["ShareConfigMinFrameRate"].isNull())
		data_.shareConfig.shareConfigMinFrameRate = std::stoi(shareConfigNode["ShareConfigMinFrameRate"].asString());
	auto signallingServerConfigNode = dataNode["SignallingServerConfig"];
	if(!signallingServerConfigNode["ClientHeartBeatUrl"].isNull())
		data_.signallingServerConfig.clientHeartBeatUrl = signallingServerConfigNode["ClientHeartBeatUrl"].asString();
	if(!signallingServerConfigNode["GetMessageUrl"].isNull())
		data_.signallingServerConfig.getMessageUrl = signallingServerConfigNode["GetMessageUrl"].asString();
	if(!signallingServerConfigNode["GetReceiverInfoUrl"].isNull())
		data_.signallingServerConfig.getReceiverInfoUrl = signallingServerConfigNode["GetReceiverInfoUrl"].asString();
	if(!signallingServerConfigNode["SendMessageUrl"].isNull())
		data_.signallingServerConfig.sendMessageUrl = signallingServerConfigNode["SendMessageUrl"].asString();
	if(!signallingServerConfigNode["ShareScreenMeetingRobUrl"].isNull())
		data_.signallingServerConfig.shareScreenMeetingRobUrl = signallingServerConfigNode["ShareScreenMeetingRobUrl"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SendScreenStartResult::getMessage()const
{
	return message_;
}

SendScreenStartResult::Data SendScreenStartResult::getData()const
{
	return data_;
}

int SendScreenStartResult::getErrorCode()const
{
	return errorCode_;
}

bool SendScreenStartResult::getSuccess()const
{
	return success_;
}

