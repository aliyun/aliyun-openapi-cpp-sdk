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

#include <alibabacloud/emr/model/RenderResourcePoolXmlForAdminRequest.h>

using AlibabaCloud::Emr::Model::RenderResourcePoolXmlForAdminRequest;

RenderResourcePoolXmlForAdminRequest::RenderResourcePoolXmlForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RenderResourcePoolXmlForAdmin")
{}

RenderResourcePoolXmlForAdminRequest::~RenderResourcePoolXmlForAdminRequest()
{}

long RenderResourcePoolXmlForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenderResourcePoolXmlForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenderResourcePoolXmlForAdminRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void RenderResourcePoolXmlForAdminRequest::setResourcePoolId(const std::string& resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setCoreParameter("ResourcePoolId", resourcePoolId);
}

std::string RenderResourcePoolXmlForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void RenderResourcePoolXmlForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string RenderResourcePoolXmlForAdminRequest::getUserId()const
{
	return userId_;
}

void RenderResourcePoolXmlForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string RenderResourcePoolXmlForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenderResourcePoolXmlForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RenderResourcePoolXmlForAdminRequest::getRegionId()const
{
	return regionId_;
}

void RenderResourcePoolXmlForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

