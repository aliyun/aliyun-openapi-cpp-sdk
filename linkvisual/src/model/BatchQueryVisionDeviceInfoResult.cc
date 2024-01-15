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

#include <alibabacloud/linkvisual/model/BatchQueryVisionDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

BatchQueryVisionDeviceInfoResult::BatchQueryVisionDeviceInfoResult() :
	ServiceResult()
{}

BatchQueryVisionDeviceInfoResult::BatchQueryVisionDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchQueryVisionDeviceInfoResult::~BatchQueryVisionDeviceInfoResult()
{}

void BatchQueryVisionDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDeviceInfoListNode = dataNode["DeviceInfoList"]["DeviceInfo"];
	for (auto dataNodeDeviceInfoListDeviceInfo : allDeviceInfoListNode)
	{
		Data::DeviceInfo deviceInfoObject;
		if(!dataNodeDeviceInfoListDeviceInfo["Description"].isNull())
			deviceInfoObject.description = dataNodeDeviceInfoListDeviceInfo["Description"].asString();
		if(!dataNodeDeviceInfoListDeviceInfo["DeviceType"].isNull())
			deviceInfoObject.deviceType = std::stoi(dataNodeDeviceInfoListDeviceInfo["DeviceType"].asString());
		if(!dataNodeDeviceInfoListDeviceInfo["IotId"].isNull())
			deviceInfoObject.iotId = dataNodeDeviceInfoListDeviceInfo["IotId"].asString();
		auto gbDeviceInfoNode = value["GbDeviceInfo"];
		if(!gbDeviceInfoNode["GbId"].isNull())
			deviceInfoObject.gbDeviceInfo.gbId = gbDeviceInfoNode["GbId"].asString();
		if(!gbDeviceInfoNode["Password"].isNull())
			deviceInfoObject.gbDeviceInfo.password = gbDeviceInfoNode["Password"].asString();
		if(!gbDeviceInfoNode["NickName"].isNull())
			deviceInfoObject.gbDeviceInfo.nickName = gbDeviceInfoNode["NickName"].asString();
		if(!gbDeviceInfoNode["SubProductKey"].isNull())
			deviceInfoObject.gbDeviceInfo.subProductKey = gbDeviceInfoNode["SubProductKey"].asString();
		if(!gbDeviceInfoNode["DeviceProtocol"].isNull())
			deviceInfoObject.gbDeviceInfo.deviceProtocol = std::stoi(gbDeviceInfoNode["DeviceProtocol"].asString());
		if(!gbDeviceInfoNode["NetProtocol"].isNull())
			deviceInfoObject.gbDeviceInfo.netProtocol = std::stoi(gbDeviceInfoNode["NetProtocol"].asString());
		auto rtmpDeviceInfoNode = value["RtmpDeviceInfo"];
		if(!rtmpDeviceInfoNode["StreamStatus"].isNull())
			deviceInfoObject.rtmpDeviceInfo.streamStatus = std::stoi(rtmpDeviceInfoNode["StreamStatus"].asString());
		if(!rtmpDeviceInfoNode["PushKeyExpireTime"].isNull())
			deviceInfoObject.rtmpDeviceInfo.pushKeyExpireTime = std::stoi(rtmpDeviceInfoNode["PushKeyExpireTime"].asString());
		if(!rtmpDeviceInfoNode["StreamName"].isNull())
			deviceInfoObject.rtmpDeviceInfo.streamName = rtmpDeviceInfoNode["StreamName"].asString();
		if(!rtmpDeviceInfoNode["PushAuthKey"].isNull())
			deviceInfoObject.rtmpDeviceInfo.pushAuthKey = rtmpDeviceInfoNode["PushAuthKey"].asString();
		if(!rtmpDeviceInfoNode["PullAuthKey"].isNull())
			deviceInfoObject.rtmpDeviceInfo.pullAuthKey = rtmpDeviceInfoNode["PullAuthKey"].asString();
		if(!rtmpDeviceInfoNode["PullKeyExpireTime"].isNull())
			deviceInfoObject.rtmpDeviceInfo.pullKeyExpireTime = std::stoi(rtmpDeviceInfoNode["PullKeyExpireTime"].asString());
		if(!rtmpDeviceInfoNode["PushUrlSample"].isNull())
			deviceInfoObject.rtmpDeviceInfo.pushUrlSample = rtmpDeviceInfoNode["PushUrlSample"].asString();
		data_.deviceInfoList.push_back(deviceInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

BatchQueryVisionDeviceInfoResult::Data BatchQueryVisionDeviceInfoResult::getData()const
{
	return data_;
}

std::string BatchQueryVisionDeviceInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchQueryVisionDeviceInfoResult::getCode()const
{
	return code_;
}

bool BatchQueryVisionDeviceInfoResult::getSuccess()const
{
	return success_;
}

