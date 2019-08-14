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

#include <alibabacloud/ram/model/CreateVirtualMFADeviceRequest.h>

using AlibabaCloud::Ram::Model::CreateVirtualMFADeviceRequest;

CreateVirtualMFADeviceRequest::CreateVirtualMFADeviceRequest() :
	RpcServiceRequest("ram", "2015-05-01", "CreateVirtualMFADevice")
{}

CreateVirtualMFADeviceRequest::~CreateVirtualMFADeviceRequest()
{}

std::string CreateVirtualMFADeviceRequest::getVirtualMFADeviceName()const
{
	return virtualMFADeviceName_;
}

void CreateVirtualMFADeviceRequest::setVirtualMFADeviceName(const std::string& virtualMFADeviceName)
{
	virtualMFADeviceName_ = virtualMFADeviceName;
	setCoreParameter("VirtualMFADeviceName", virtualMFADeviceName);
}

