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

#include <alibabacloud/emr/model/DecommissionHostComponentRequest.h>

using AlibabaCloud::Emr::Model::DecommissionHostComponentRequest;

DecommissionHostComponentRequest::DecommissionHostComponentRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DecommissionHostComponent")
{
	setMethod(HttpRequest::Method::Post);
}

DecommissionHostComponentRequest::~DecommissionHostComponentRequest()
{}

long DecommissionHostComponentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DecommissionHostComponentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DecommissionHostComponentRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void DecommissionHostComponentRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setParameter("HostInstanceId", hostInstanceId);
}

std::string DecommissionHostComponentRequest::getComponentName()const
{
	return componentName_;
}

void DecommissionHostComponentRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setParameter("ComponentName", componentName);
}

std::string DecommissionHostComponentRequest::getClusterId()const
{
	return clusterId_;
}

void DecommissionHostComponentRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DecommissionHostComponentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DecommissionHostComponentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DecommissionHostComponentRequest::getTimeoutSeconds()const
{
	return timeoutSeconds_;
}

void DecommissionHostComponentRequest::setTimeoutSeconds(long timeoutSeconds)
{
	timeoutSeconds_ = timeoutSeconds;
	setParameter("TimeoutSeconds", std::to_string(timeoutSeconds));
}

std::string DecommissionHostComponentRequest::getRegionId()const
{
	return regionId_;
}

void DecommissionHostComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DecommissionHostComponentRequest::getServiceName()const
{
	return serviceName_;
}

void DecommissionHostComponentRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

