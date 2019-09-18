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

#include <alibabacloud/iot/model/BatchDeleteDeviceGroupRelationsRequest.h>

using AlibabaCloud::Iot::Model::BatchDeleteDeviceGroupRelationsRequest;

BatchDeleteDeviceGroupRelationsRequest::BatchDeleteDeviceGroupRelationsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchDeleteDeviceGroupRelations")
{}

BatchDeleteDeviceGroupRelationsRequest::~BatchDeleteDeviceGroupRelationsRequest()
{}

std::string BatchDeleteDeviceGroupRelationsRequest::getGroupId()const
{
	return groupId_;
}

void BatchDeleteDeviceGroupRelationsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string BatchDeleteDeviceGroupRelationsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchDeleteDeviceGroupRelationsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchDeleteDeviceGroupRelationsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchDeleteDeviceGroupRelationsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::vector<BatchDeleteDeviceGroupRelationsRequest::Device> BatchDeleteDeviceGroupRelationsRequest::getDevice()const
{
	return device_;
}

void BatchDeleteDeviceGroupRelationsRequest::setDevice(const std::vector<Device>& device)
{
	device_ = device;
	int i = 0;
	for(int i = 0; i!= device.size(); i++)	{
		auto obj = device.at(i);
		std::string str ="Device."+ std::to_string(i);
		setCoreParameter(str + ".DeviceName", obj.deviceName);
		setCoreParameter(str + ".ProductKey", obj.productKey);
	}
}

