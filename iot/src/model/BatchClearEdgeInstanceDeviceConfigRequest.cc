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

#include <alibabacloud/iot/model/BatchClearEdgeInstanceDeviceConfigRequest.h>

using AlibabaCloud::Iot::Model::BatchClearEdgeInstanceDeviceConfigRequest;

BatchClearEdgeInstanceDeviceConfigRequest::BatchClearEdgeInstanceDeviceConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchClearEdgeInstanceDeviceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

BatchClearEdgeInstanceDeviceConfigRequest::~BatchClearEdgeInstanceDeviceConfigRequest()
{}

std::string BatchClearEdgeInstanceDeviceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchClearEdgeInstanceDeviceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchClearEdgeInstanceDeviceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchClearEdgeInstanceDeviceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> BatchClearEdgeInstanceDeviceConfigRequest::getIotIds()const
{
	return iotIds_;
}

void BatchClearEdgeInstanceDeviceConfigRequest::setIotIds(const std::vector<std::string>& iotIds)
{
	iotIds_ = iotIds;
	for(int dep1 = 0; dep1!= iotIds.size(); dep1++)
		setCoreParameter("IotIds."+ std::to_string(dep1), iotIds.at(dep1));
}

std::string BatchClearEdgeInstanceDeviceConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchClearEdgeInstanceDeviceConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

