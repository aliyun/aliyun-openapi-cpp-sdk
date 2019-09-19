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

#include <alibabacloud/iot/model/UpdateEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::UpdateEdgeInstanceRequest;

UpdateEdgeInstanceRequest::UpdateEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateEdgeInstance")
{}

UpdateEdgeInstanceRequest::~UpdateEdgeInstanceRequest()
{}

bool UpdateEdgeInstanceRequest::getBizEnable()const
{
	return bizEnable_;
}

void UpdateEdgeInstanceRequest::setBizEnable(bool bizEnable)
{
	bizEnable_ = bizEnable;
	setCoreParameter("BizEnable", bizEnable ? "true" : "false");
}

int UpdateEdgeInstanceRequest::getSpec()const
{
	return spec_;
}

void UpdateEdgeInstanceRequest::setSpec(int spec)
{
	spec_ = spec;
	setCoreParameter("Spec", std::to_string(spec));
}

std::string UpdateEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateEdgeInstanceRequest::getTags()const
{
	return tags_;
}

void UpdateEdgeInstanceRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string UpdateEdgeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateEdgeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string UpdateEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateEdgeInstanceRequest::getName()const
{
	return name_;
}

void UpdateEdgeInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

