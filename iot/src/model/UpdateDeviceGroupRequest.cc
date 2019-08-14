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

#include <alibabacloud/iot/model/UpdateDeviceGroupRequest.h>

using AlibabaCloud::Iot::Model::UpdateDeviceGroupRequest;

UpdateDeviceGroupRequest::UpdateDeviceGroupRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateDeviceGroup")
{}

UpdateDeviceGroupRequest::~UpdateDeviceGroupRequest()
{}

<<<<<<< HEAD
std::string UpdateDeviceGroupRequest::getGroupDesc()const
{
	return groupDesc_;
}

void UpdateDeviceGroupRequest::setGroupDesc(const std::string& groupDesc)
{
	groupDesc_ = groupDesc;
	setCoreParameter("GroupDesc", groupDesc);
}

std::string UpdateDeviceGroupRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateDeviceGroupRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateDeviceGroupRequest::getGroupId()const
{
	return groupId_;
}

void UpdateDeviceGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string UpdateDeviceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDeviceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

=======
std::string UpdateDeviceGroupRequest::getGroupDesc()const
{
	return groupDesc_;
}

void UpdateDeviceGroupRequest::setGroupDesc(const std::string& groupDesc)
{
	groupDesc_ = groupDesc;
	setCoreParameter("GroupDesc", groupDesc);
}

std::string UpdateDeviceGroupRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateDeviceGroupRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateDeviceGroupRequest::getGroupId()const
{
	return groupId_;
}

void UpdateDeviceGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string UpdateDeviceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDeviceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

>>>>>>> master
