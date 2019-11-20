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

#include <alibabacloud/iot/model/BatchGetDeviceDriverRequest.h>

using AlibabaCloud::Iot::Model::BatchGetDeviceDriverRequest;

BatchGetDeviceDriverRequest::BatchGetDeviceDriverRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchGetDeviceDriver")
{
	setMethod(HttpRequest::Method::Post);
}

BatchGetDeviceDriverRequest::~BatchGetDeviceDriverRequest()
{}

std::string BatchGetDeviceDriverRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchGetDeviceDriverRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchGetDeviceDriverRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchGetDeviceDriverRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> BatchGetDeviceDriverRequest::getIotIds()const
{
	return iotIds_;
}

void BatchGetDeviceDriverRequest::setIotIds(const std::vector<std::string>& iotIds)
{
	iotIds_ = iotIds;
	for(int dep1 = 0; dep1!= iotIds.size(); dep1++) {
		setCoreParameter("IotIds."+ std::to_string(dep1), iotIds.at(dep1));
	}
}

std::string BatchGetDeviceDriverRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchGetDeviceDriverRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

