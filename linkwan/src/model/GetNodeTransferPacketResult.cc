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

#include <alibabacloud/linkwan/model/GetNodeTransferPacketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetNodeTransferPacketResult::GetNodeTransferPacketResult() :
	ServiceResult()
{}

GetNodeTransferPacketResult::GetNodeTransferPacketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeTransferPacketResult::~GetNodeTransferPacketResult()
{}

void GetNodeTransferPacketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LogMillis"].isNull())
		data_.logMillis = std::stol(dataNode["LogMillis"].asString());
	if(!dataNode["GwEui"].isNull())
		data_.gwEui = dataNode["GwEui"].asString();
	if(!dataNode["DevEui"].isNull())
		data_.devEui = dataNode["DevEui"].asString();
	if(!dataNode["DevAddr"].isNull())
		data_.devAddr = dataNode["DevAddr"].asString();
	if(!dataNode["Freq"].isNull())
		data_.freq = std::stof(dataNode["Freq"].asString());
	if(!dataNode["Datr"].isNull())
		data_.datr = dataNode["Datr"].asString();
	if(!dataNode["ClassMode"].isNull())
		data_.classMode = dataNode["ClassMode"].asString();
	if(!dataNode["Rssi"].isNull())
		data_.rssi = std::stoi(dataNode["Rssi"].asString());
	if(!dataNode["Lsnr"].isNull())
		data_.lsnr = std::stof(dataNode["Lsnr"].asString());
	if(!dataNode["FPort"].isNull())
		data_.fPort = std::stoi(dataNode["FPort"].asString());
	if(!dataNode["FreqBandPlanGroupId"].isNull())
		data_.freqBandPlanGroupId = std::stol(dataNode["FreqBandPlanGroupId"].asString());
	if(!dataNode["HasMacCommand"].isNull())
		data_.hasMacCommand = dataNode["HasMacCommand"].asString() == "true";
	if(!dataNode["HasData"].isNull())
		data_.hasData = dataNode["HasData"].asString() == "true";
	if(!dataNode["Base64EncodedMacPayload"].isNull())
		data_.base64EncodedMacPayload = dataNode["Base64EncodedMacPayload"].asString();
	if(!dataNode["MacPayloadSize"].isNull())
		data_.macPayloadSize = std::stoi(dataNode["MacPayloadSize"].asString());
	if(!dataNode["ProcessEvent"].isNull())
		data_.processEvent = dataNode["ProcessEvent"].asString();
	if(!dataNode["MessageType"].isNull())
		data_.messageType = dataNode["MessageType"].asString();
	if(!dataNode["GwOwnerAliyunId"].isNull())
		data_.gwOwnerAliyunId = dataNode["GwOwnerAliyunId"].asString();
		auto allMacCommandCIDs = dataNode["MacCommandCIDs"]["CID"];
		for (auto value : allMacCommandCIDs)
			data_.macCommandCIDs.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNodeTransferPacketResult::Data GetNodeTransferPacketResult::getData()const
{
	return data_;
}

bool GetNodeTransferPacketResult::getSuccess()const
{
	return success_;
}

