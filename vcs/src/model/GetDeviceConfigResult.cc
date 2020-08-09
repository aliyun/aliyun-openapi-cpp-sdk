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

#include <alibabacloud/vcs/model/GetDeviceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetDeviceConfigResult::GetDeviceConfigResult() :
	ServiceResult()
{}

GetDeviceConfigResult::GetDeviceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeviceConfigResult::~GetDeviceConfigResult()
{}

void GetDeviceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOSDListNode = value["OSDList"]["OSDListItem"];
	for (auto valueOSDListOSDListItem : allOSDListNode)
	{
		OSDListItem oSDListObject;
		if(!valueOSDListOSDListItem["Text"].isNull())
			oSDListObject.text = valueOSDListOSDListItem["Text"].asString();
		if(!valueOSDListOSDListItem["LeftTopX"].isNull())
			oSDListObject.leftTopX = valueOSDListOSDListItem["LeftTopX"].asString();
		if(!valueOSDListOSDListItem["LeftTopY"].isNull())
			oSDListObject.leftTopY = valueOSDListOSDListItem["LeftTopY"].asString();
		oSDList_.push_back(oSDListObject);
	}
	if(!value["AudioEnable"].isNull())
		audioEnable_ = value["AudioEnable"].asString() == "true";
	if(!value["AudioFormat"].isNull())
		audioFormat_ = value["AudioFormat"].asString();
	if(!value["BitRate"].isNull())
		bitRate_ = value["BitRate"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DeviceAddress"].isNull())
		deviceAddress_ = value["DeviceAddress"].asString();
	if(!value["DeviceName"].isNull())
		deviceName_ = value["DeviceName"].asString();
	if(!value["EncodeFormat"].isNull())
		encodeFormat_ = value["EncodeFormat"].asString();
	if(!value["FrameRate"].isNull())
		frameRate_ = value["FrameRate"].asString();
	if(!value["GovLength"].isNull())
		govLength_ = std::stoi(value["GovLength"].asString());
	if(!value["Latitude"].isNull())
		latitude_ = value["Latitude"].asString();
	if(!value["Longitude"].isNull())
		longitude_ = value["Longitude"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["OSDTimeEnable"].isNull())
		oSDTimeEnable_ = value["OSDTimeEnable"].asString();
	if(!value["OSDTimeType"].isNull())
		oSDTimeType_ = value["OSDTimeType"].asString();
	if(!value["OSDTimeX"].isNull())
		oSDTimeX_ = value["OSDTimeX"].asString();
	if(!value["OSDTimeY"].isNull())
		oSDTimeY_ = value["OSDTimeY"].asString();
	if(!value["Resolution"].isNull())
		resolution_ = value["Resolution"].asString();
	if(!value["RetryInterval"].isNull())
		retryInterval_ = value["RetryInterval"].asString();
	if(!value["DeviceId"].isNull())
		deviceId_ = value["DeviceId"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["PassWord"].isNull())
		passWord_ = value["PassWord"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();
	if(!value["ServerId"].isNull())
		serverId_ = value["ServerId"].asString();
	if(!value["ServerPort"].isNull())
		serverPort_ = value["ServerPort"].asString();
	if(!value["ServerIp"].isNull())
		serverIp_ = value["ServerIp"].asString();

}

std::string GetDeviceConfigResult::getEncodeFormat()const
{
	return encodeFormat_;
}

std::string GetDeviceConfigResult::getMessage()const
{
	return message_;
}

std::string GetDeviceConfigResult::getDeviceId()const
{
	return deviceId_;
}

std::string GetDeviceConfigResult::getLatitude()const
{
	return latitude_;
}

std::vector<GetDeviceConfigResult::OSDListItem> GetDeviceConfigResult::getOSDList()const
{
	return oSDList_;
}

std::string GetDeviceConfigResult::getPassWord()const
{
	return passWord_;
}

std::string GetDeviceConfigResult::getOSDTimeY()const
{
	return oSDTimeY_;
}

std::string GetDeviceConfigResult::getOSDTimeEnable()const
{
	return oSDTimeEnable_;
}

std::string GetDeviceConfigResult::getServerId()const
{
	return serverId_;
}

std::string GetDeviceConfigResult::getDeviceAddress()const
{
	return deviceAddress_;
}

std::string GetDeviceConfigResult::getOSDTimeX()const
{
	return oSDTimeX_;
}

int GetDeviceConfigResult::getGovLength()const
{
	return govLength_;
}

std::string GetDeviceConfigResult::getAudioFormat()const
{
	return audioFormat_;
}

std::string GetDeviceConfigResult::getProtocol()const
{
	return protocol_;
}

bool GetDeviceConfigResult::getAudioEnable()const
{
	return audioEnable_;
}

std::string GetDeviceConfigResult::getFrameRate()const
{
	return frameRate_;
}

std::string GetDeviceConfigResult::getUserName()const
{
	return userName_;
}

std::string GetDeviceConfigResult::getServerIp()const
{
	return serverIp_;
}

std::string GetDeviceConfigResult::getCode()const
{
	return code_;
}

std::string GetDeviceConfigResult::getLongitude()const
{
	return longitude_;
}

std::string GetDeviceConfigResult::getRetryInterval()const
{
	return retryInterval_;
}

std::string GetDeviceConfigResult::getBitRate()const
{
	return bitRate_;
}

std::string GetDeviceConfigResult::getServerPort()const
{
	return serverPort_;
}

std::string GetDeviceConfigResult::getDeviceName()const
{
	return deviceName_;
}

std::string GetDeviceConfigResult::getOSDTimeType()const
{
	return oSDTimeType_;
}

std::string GetDeviceConfigResult::getResolution()const
{
	return resolution_;
}

