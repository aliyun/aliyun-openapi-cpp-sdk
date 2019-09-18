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

#include <alibabacloud/iot/model/BatchGetEdgeInstanceDeviceConfigRequest.h>

using AlibabaCloud::Iot::Model::BatchGetEdgeInstanceDeviceConfigRequest;

BatchGetEdgeInstanceDeviceConfigRequest::BatchGetEdgeInstanceDeviceConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchGetEdgeInstanceDeviceConfig")
{}

BatchGetEdgeInstanceDeviceConfigRequest::~BatchGetEdgeInstanceDeviceConfigRequest()
{}

std::string BatchGetEdgeInstanceDeviceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchGetEdgeInstanceDeviceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchGetEdgeInstanceDeviceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchGetEdgeInstanceDeviceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> BatchGetEdgeInstanceDeviceConfigRequest::getIotIds()const
{
	return iotIds_;
}

void BatchGetEdgeInstanceDeviceConfigRequest::setIotIds(const std::vector<std::string>& iotIds)
{
	iotIds_ = iotIds;
	for(int i = 0; i!= iotIds.size(); i++)
		setCoreParameter("IotIds."+ std::to_string(i), iotIds.at(i));
}

std::string BatchGetEdgeInstanceDeviceConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchGetEdgeInstanceDeviceConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

