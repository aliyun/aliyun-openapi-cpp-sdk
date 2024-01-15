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

#include <alibabacloud/linkvisual/model/QueryVisionDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryVisionDeviceInfoResult::QueryVisionDeviceInfoResult() :
	ServiceResult()
{}

QueryVisionDeviceInfoResult::QueryVisionDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVisionDeviceInfoResult::~QueryVisionDeviceInfoResult()
{}

void QueryVisionDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["DeviceType"].isNull())
		data_.deviceType = std::stoi(dataNode["DeviceType"].asString());
	auto gbDeviceInfoNode = dataNode["GbDeviceInfo"];
	if(!gbDeviceInfoNode["GbId"].isNull())
		data_.gbDeviceInfo.gbId = gbDeviceInfoNode["GbId"].asString();
	if(!gbDeviceInfoNode["Password"].isNull())
		data_.gbDeviceInfo.password = gbDeviceInfoNode["Password"].asString();
	if(!gbDeviceInfoNode["NickName"].isNull())
		data_.gbDeviceInfo.nickName = gbDeviceInfoNode["NickName"].asString();
	if(!gbDeviceInfoNode["SubProductKey"].isNull())
		data_.gbDeviceInfo.subProductKey = gbDeviceInfoNode["SubProductKey"].asString();
	if(!gbDeviceInfoNode["DeviceProtocol"].isNull())
		data_.gbDeviceInfo.deviceProtocol = std::stoi(gbDeviceInfoNode["DeviceProtocol"].asString());
	if(!gbDeviceInfoNode["NetProtocol"].isNull())
		data_.gbDeviceInfo.netProtocol = std::stoi(gbDeviceInfoNode["NetProtocol"].asString());
	auto rtmpDeviceInfoNode = dataNode["RtmpDeviceInfo"];
	if(!rtmpDeviceInfoNode["StreamStatus"].isNull())
		data_.rtmpDeviceInfo.streamStatus = std::stoi(rtmpDeviceInfoNode["StreamStatus"].asString());
	if(!rtmpDeviceInfoNode["PushKeyExpireTime"].isNull())
		data_.rtmpDeviceInfo.pushKeyExpireTime = std::stoi(rtmpDeviceInfoNode["PushKeyExpireTime"].asString());
	if(!rtmpDeviceInfoNode["StreamName"].isNull())
		data_.rtmpDeviceInfo.streamName = rtmpDeviceInfoNode["StreamName"].asString();
	if(!rtmpDeviceInfoNode["PushAuthKey"].isNull())
		data_.rtmpDeviceInfo.pushAuthKey = rtmpDeviceInfoNode["PushAuthKey"].asString();
	if(!rtmpDeviceInfoNode["PullAuthKey"].isNull())
		data_.rtmpDeviceInfo.pullAuthKey = rtmpDeviceInfoNode["PullAuthKey"].asString();
	if(!rtmpDeviceInfoNode["PullKeyExpireTime"].isNull())
		data_.rtmpDeviceInfo.pullKeyExpireTime = std::stoi(rtmpDeviceInfoNode["PullKeyExpireTime"].asString());
	if(!rtmpDeviceInfoNode["PushUrlSample"].isNull())
		data_.rtmpDeviceInfo.pushUrlSample = rtmpDeviceInfoNode["PushUrlSample"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryVisionDeviceInfoResult::Data QueryVisionDeviceInfoResult::getData()const
{
	return data_;
}

std::string QueryVisionDeviceInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryVisionDeviceInfoResult::getCode()const
{
	return code_;
}

bool QueryVisionDeviceInfoResult::getSuccess()const
{
	return success_;
}

