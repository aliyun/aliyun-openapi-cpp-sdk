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

#include <alibabacloud/iot/model/BatchUnbindDeviceFromEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::BatchUnbindDeviceFromEdgeInstanceRequest;

BatchUnbindDeviceFromEdgeInstanceRequest::BatchUnbindDeviceFromEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchUnbindDeviceFromEdgeInstance")
{}

BatchUnbindDeviceFromEdgeInstanceRequest::~BatchUnbindDeviceFromEdgeInstanceRequest()
{}

std::string BatchUnbindDeviceFromEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchUnbindDeviceFromEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchUnbindDeviceFromEdgeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchUnbindDeviceFromEdgeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> BatchUnbindDeviceFromEdgeInstanceRequest::getIotIds()const
{
	return iotIds_;
}

void BatchUnbindDeviceFromEdgeInstanceRequest::setIotIds(const std::vector<std::string>& iotIds)
{
	iotIds_ = iotIds;
	for(int i = 0; i!= iotIds.size(); i++)
		setCoreParameter("IotIds."+ std::to_string(i), iotIds.at(i));
}

std::string BatchUnbindDeviceFromEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchUnbindDeviceFromEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

