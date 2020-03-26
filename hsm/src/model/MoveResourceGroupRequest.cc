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

#include <alibabacloud/hsm/model/MoveResourceGroupRequest.h>

using AlibabaCloud::Hsm::Model::MoveResourceGroupRequest;

MoveResourceGroupRequest::MoveResourceGroupRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "MoveResourceGroup")
{
	setMethod(HttpRequest::Method::Post);
}

MoveResourceGroupRequest::~MoveResourceGroupRequest()
{}

std::string MoveResourceGroupRequest::getResourceId()const
{
	return resourceId_;
}

void MoveResourceGroupRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string MoveResourceGroupRequest::getResourceType()const
{
	return resourceType_;
}

void MoveResourceGroupRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string MoveResourceGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void MoveResourceGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string MoveResourceGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void MoveResourceGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string MoveResourceGroupRequest::getRegionId()const
{
	return regionId_;
}

void MoveResourceGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MoveResourceGroupRequest::getLang()const
{
	return lang_;
}

void MoveResourceGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

