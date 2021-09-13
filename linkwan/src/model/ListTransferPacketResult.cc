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

#include <alibabacloud/linkwan/model/ListTransferPacketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListTransferPacketResult::ListTransferPacketResult() :
	ServiceResult()
{}

ListTransferPacketResult::ListTransferPacketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransferPacketResult::~ListTransferPacketResult()
{}

void ListTransferPacketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Packet"];
	for (auto dataNodeListPacket : allListNode)
	{
		Data::Packet packetObject;
		if(!dataNodeListPacket["GwEui"].isNull())
			packetObject.gwEui = dataNodeListPacket["GwEui"].asString();
		if(!dataNodeListPacket["DevEui"].isNull())
			packetObject.devEui = dataNodeListPacket["DevEui"].asString();
		if(!dataNodeListPacket["DevAddr"].isNull())
			packetObject.devAddr = dataNodeListPacket["DevAddr"].asString();
		if(!dataNodeListPacket["Freq"].isNull())
			packetObject.freq = std::stof(dataNodeListPacket["Freq"].asString());
		if(!dataNodeListPacket["Datr"].isNull())
			packetObject.datr = dataNodeListPacket["Datr"].asString();
		if(!dataNodeListPacket["ClassMode"].isNull())
			packetObject.classMode = dataNodeListPacket["ClassMode"].asString();
		if(!dataNodeListPacket["Rssi"].isNull())
			packetObject.rssi = std::stoi(dataNodeListPacket["Rssi"].asString());
		if(!dataNodeListPacket["Lsnr"].isNull())
			packetObject.lsnr = std::stof(dataNodeListPacket["Lsnr"].asString());
		if(!dataNodeListPacket["FPort"].isNull())
			packetObject.fPort = std::stoi(dataNodeListPacket["FPort"].asString());
		if(!dataNodeListPacket["FreqBandPlanGroupId"].isNull())
			packetObject.freqBandPlanGroupId = std::stol(dataNodeListPacket["FreqBandPlanGroupId"].asString());
		if(!dataNodeListPacket["LogMillis"].isNull())
			packetObject.logMillis = std::stol(dataNodeListPacket["LogMillis"].asString());
		if(!dataNodeListPacket["HasMacCommand"].isNull())
			packetObject.hasMacCommand = dataNodeListPacket["HasMacCommand"].asString() == "true";
		if(!dataNodeListPacket["HasData"].isNull())
			packetObject.hasData = dataNodeListPacket["HasData"].asString() == "true";
		if(!dataNodeListPacket["Base64EncodedMacPayload"].isNull())
			packetObject.base64EncodedMacPayload = dataNodeListPacket["Base64EncodedMacPayload"].asString();
		if(!dataNodeListPacket["MacPayloadSize"].isNull())
			packetObject.macPayloadSize = std::stol(dataNodeListPacket["MacPayloadSize"].asString());
		if(!dataNodeListPacket["ProcessEvent"].isNull())
			packetObject.processEvent = dataNodeListPacket["ProcessEvent"].asString();
		if(!dataNodeListPacket["MessageType"].isNull())
			packetObject.messageType = dataNodeListPacket["MessageType"].asString();
		if(!dataNodeListPacket["FcntDown"].isNull())
			packetObject.fcntDown = std::stol(dataNodeListPacket["FcntDown"].asString());
		if(!dataNodeListPacket["FcntUp"].isNull())
			packetObject.fcntUp = std::stol(dataNodeListPacket["FcntUp"].asString());
		data_.list.push_back(packetObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListTransferPacketResult::Data ListTransferPacketResult::getData()const
{
	return data_;
}

std::string ListTransferPacketResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListTransferPacketResult::getCode()const
{
	return code_;
}

bool ListTransferPacketResult::getSuccess()const
{
	return success_;
}

