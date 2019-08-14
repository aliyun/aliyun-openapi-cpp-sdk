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

#include <alibabacloud/emr/model/DeleteClusterTemplateRequest.h>

using AlibabaCloud::Emr::Model::DeleteClusterTemplateRequest;

DeleteClusterTemplateRequest::DeleteClusterTemplateRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteClusterTemplate")
{}

DeleteClusterTemplateRequest::~DeleteClusterTemplateRequest()
{}

long DeleteClusterTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteClusterTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteClusterTemplateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteClusterTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteClusterTemplateRequest::getBizId()const
{
	return bizId_;
}

void DeleteClusterTemplateRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string DeleteClusterTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteClusterTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

