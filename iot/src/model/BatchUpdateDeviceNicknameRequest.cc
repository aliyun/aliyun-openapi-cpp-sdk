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

#include <alibabacloud/iot/model/BatchUpdateDeviceNicknameRequest.h>

using AlibabaCloud::Iot::Model::BatchUpdateDeviceNicknameRequest;

BatchUpdateDeviceNicknameRequest::BatchUpdateDeviceNicknameRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchUpdateDeviceNickname")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUpdateDeviceNicknameRequest::~BatchUpdateDeviceNicknameRequest()
{}

std::vector<BatchUpdateDeviceNicknameRequest::DeviceNicknameInfo> BatchUpdateDeviceNicknameRequest::getDeviceNicknameInfo()const
{
	return deviceNicknameInfo_;
}

void BatchUpdateDeviceNicknameRequest::setDeviceNicknameInfo(const std::vector<DeviceNicknameInfo>& deviceNicknameInfo)
{
	deviceNicknameInfo_ = deviceNicknameInfo;
	for(int dep1 = 0; dep1!= deviceNicknameInfo.size(); dep1++) {
		auto deviceNicknameInfoObj = deviceNicknameInfo.at(dep1);
		std::string deviceNicknameInfoObjStr = "DeviceNicknameInfo." + std::to_string(dep1);
		setCoreParameter(deviceNicknameInfoObjStr + ".IotId", deviceNicknameInfoObj.iotId);
		setCoreParameter(deviceNicknameInfoObjStr + ".Nickname", deviceNicknameInfoObj.nickname);
		setCoreParameter(deviceNicknameInfoObjStr + ".DeviceName", deviceNicknameInfoObj.deviceName);
		setCoreParameter(deviceNicknameInfoObjStr + ".ProductKey", deviceNicknameInfoObj.productKey);
	}
}

std::string BatchUpdateDeviceNicknameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchUpdateDeviceNicknameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchUpdateDeviceNicknameRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchUpdateDeviceNicknameRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

