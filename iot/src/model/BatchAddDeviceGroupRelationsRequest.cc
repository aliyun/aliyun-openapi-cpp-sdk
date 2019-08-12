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

#include <alibabacloud/iot/model/BatchAddDeviceGroupRelationsRequest.h>

using AlibabaCloud::Iot::Model::BatchAddDeviceGroupRelationsRequest;

BatchAddDeviceGroupRelationsRequest::BatchAddDeviceGroupRelationsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchAddDeviceGroupRelations")
{}

BatchAddDeviceGroupRelationsRequest::~BatchAddDeviceGroupRelationsRequest()
{}

std::string BatchAddDeviceGroupRelationsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchAddDeviceGroupRelationsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string BatchAddDeviceGroupRelationsRequest::getGroupId()const
{
	return groupId_;
}

void BatchAddDeviceGroupRelationsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::vector<BatchAddDeviceGroupRelationsRequest::Device> BatchAddDeviceGroupRelationsRequest::getDevice()const
{
	return device_;
}

void BatchAddDeviceGroupRelationsRequest::setDevice(const std::vector<Device>& device)
{
	device_ = device;
	int i = 0;
	for(int i = 0; i!= device.size(); i++)	{
		auto obj = device.at(i);
		std::string str ="Device."+ std::to_string(i);
		setCoreParameter(str + ".DeviceName", std::to_string(obj.deviceName));
		setCoreParameter(str + ".ProductKey", std::to_string(obj.productKey));
	}
}

std::string BatchAddDeviceGroupRelationsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchAddDeviceGroupRelationsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

