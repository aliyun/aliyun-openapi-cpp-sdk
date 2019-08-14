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

#include <alibabacloud/emr/model/RenderResourcePoolXmlRequest.h>

using AlibabaCloud::Emr::Model::RenderResourcePoolXmlRequest;

RenderResourcePoolXmlRequest::RenderResourcePoolXmlRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RenderResourcePoolXml")
{}

RenderResourcePoolXmlRequest::~RenderResourcePoolXmlRequest()
{}

long RenderResourcePoolXmlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenderResourcePoolXmlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenderResourcePoolXmlRequest::getRegionId()const
{
	return regionId_;
}

void RenderResourcePoolXmlRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RenderResourcePoolXmlRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void RenderResourcePoolXmlRequest::setResourcePoolId(const std::string& resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setCoreParameter("ResourcePoolId", resourcePoolId);
}

std::string RenderResourcePoolXmlRequest::getClusterId()const
{
	return clusterId_;
}

void RenderResourcePoolXmlRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string RenderResourcePoolXmlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenderResourcePoolXmlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

