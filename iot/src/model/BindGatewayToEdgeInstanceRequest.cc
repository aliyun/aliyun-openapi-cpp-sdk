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

#include <alibabacloud/iot/model/BindGatewayToEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::BindGatewayToEdgeInstanceRequest;

BindGatewayToEdgeInstanceRequest::BindGatewayToEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BindGatewayToEdgeInstance")
{}

BindGatewayToEdgeInstanceRequest::~BindGatewayToEdgeInstanceRequest()
{}

std::string BindGatewayToEdgeInstanceRequest::getProductKey()const
{
	return productKey_;
}

void BindGatewayToEdgeInstanceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string BindGatewayToEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindGatewayToEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BindGatewayToEdgeInstanceRequest::getIotId()const
{
	return iotId_;
}

void BindGatewayToEdgeInstanceRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string BindGatewayToEdgeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void BindGatewayToEdgeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string BindGatewayToEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BindGatewayToEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string BindGatewayToEdgeInstanceRequest::getDeviceName()const
{
	return deviceName_;
}

void BindGatewayToEdgeInstanceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

