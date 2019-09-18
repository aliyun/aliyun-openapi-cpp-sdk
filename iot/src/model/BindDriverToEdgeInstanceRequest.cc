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

#include <alibabacloud/iot/model/BindDriverToEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::BindDriverToEdgeInstanceRequest;

BindDriverToEdgeInstanceRequest::BindDriverToEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BindDriverToEdgeInstance")
{}

BindDriverToEdgeInstanceRequest::~BindDriverToEdgeInstanceRequest()
{}

std::string BindDriverToEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindDriverToEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BindDriverToEdgeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void BindDriverToEdgeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string BindDriverToEdgeInstanceRequest::getDriverId()const
{
	return driverId_;
}

void BindDriverToEdgeInstanceRequest::setDriverId(const std::string& driverId)
{
	driverId_ = driverId;
	setCoreParameter("DriverId", driverId);
}

std::string BindDriverToEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BindDriverToEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

