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

#include <alibabacloud/emr/model/CreateClusterWithTemplateRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterWithTemplateRequest;

CreateClusterWithTemplateRequest::CreateClusterWithTemplateRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterWithTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterWithTemplateRequest::~CreateClusterWithTemplateRequest()
{}

long CreateClusterWithTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterWithTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterWithTemplateRequest::getUniqueTag()const
{
	return uniqueTag_;
}

void CreateClusterWithTemplateRequest::setUniqueTag(const std::string& uniqueTag)
{
	uniqueTag_ = uniqueTag;
	setParameter("UniqueTag", uniqueTag);
}

std::string CreateClusterWithTemplateRequest::getClusterName()const
{
	return clusterName_;
}

void CreateClusterWithTemplateRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateClusterWithTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterWithTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterWithTemplateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterWithTemplateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateClusterWithTemplateRequest::getTemplateBizId()const
{
	return templateBizId_;
}

void CreateClusterWithTemplateRequest::setTemplateBizId(const std::string& templateBizId)
{
	templateBizId_ = templateBizId;
	setParameter("TemplateBizId", templateBizId);
}

