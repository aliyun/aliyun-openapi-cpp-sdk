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

#include <alibabacloud/ccc/model/GetServiceExtensionsRequest.h>

using AlibabaCloud::CCC::Model::GetServiceExtensionsRequest;

GetServiceExtensionsRequest::GetServiceExtensionsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetServiceExtensions")
{
	setMethod(HttpRequest::Method::Post);
}

GetServiceExtensionsRequest::~GetServiceExtensionsRequest()
{}

std::string GetServiceExtensionsRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceExtensionsRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string GetServiceExtensionsRequest::getInstanceId()const
{
	return instanceId_;
}

void GetServiceExtensionsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetServiceExtensionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetServiceExtensionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

