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

#include <alibabacloud/iot/model/CreateDeviceGroupRequest.h>

using AlibabaCloud::Iot::Model::CreateDeviceGroupRequest;

CreateDeviceGroupRequest::CreateDeviceGroupRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDeviceGroup")
{}

CreateDeviceGroupRequest::~CreateDeviceGroupRequest()
{}

std::string CreateDeviceGroupRequest::getGroupDesc()const
{
	return groupDesc_;
}

void CreateDeviceGroupRequest::setGroupDesc(const std::string& groupDesc)
{
	groupDesc_ = groupDesc;
	setCoreParameter("GroupDesc", groupDesc);
}

std::string CreateDeviceGroupRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDeviceGroupRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDeviceGroupRequest::getSuperGroupId()const
{
	return superGroupId_;
}

void CreateDeviceGroupRequest::setSuperGroupId(const std::string& superGroupId)
{
	superGroupId_ = superGroupId;
	setCoreParameter("SuperGroupId", superGroupId);
}

std::string CreateDeviceGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateDeviceGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string CreateDeviceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDeviceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

