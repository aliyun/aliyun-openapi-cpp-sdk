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

#include <alibabacloud/ecs/model/DescribeLaunchTemplateVersionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLaunchTemplateVersionsRequest;

DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeLaunchTemplateVersions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLaunchTemplateVersionsRequest::~DescribeLaunchTemplateVersionsRequest()
{}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", launchTemplateName);
}

long DescribeLaunchTemplateVersionsRequest::getMaxVersion()const
{
	return maxVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMaxVersion(long maxVersion)
{
	maxVersion_ = maxVersion;
	setCoreParameter("MaxVersion", std::to_string(maxVersion));
}

long DescribeLaunchTemplateVersionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DescribeLaunchTemplateVersionsRequest::getDefaultVersion()const
{
	return defaultVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setDefaultVersion(bool defaultVersion)
{
	defaultVersion_ = defaultVersion;
	setCoreParameter("DefaultVersion", defaultVersion ? "true" : "false");
}

long DescribeLaunchTemplateVersionsRequest::getMinVersion()const
{
	return minVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMinVersion(long minVersion)
{
	minVersion_ = minVersion;
	setCoreParameter("MinVersion", std::to_string(minVersion));
}

int DescribeLaunchTemplateVersionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLaunchTemplateVersionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLaunchTemplateVersionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLaunchTemplateVersionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeLaunchTemplateVersionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLaunchTemplateVersionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

std::string DescribeLaunchTemplateVersionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeLaunchTemplateVersionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<long> DescribeLaunchTemplateVersionsRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateVersion(const std::vector<long>& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	for(int dep1 = 0; dep1!= launchTemplateVersion.size(); dep1++) {
		setCoreParameter("LaunchTemplateVersion."+ std::to_string(dep1), std::to_string(launchTemplateVersion.at(dep1)));
	}
}

bool DescribeLaunchTemplateVersionsRequest::getDetailFlag()const
{
	return detailFlag_;
}

void DescribeLaunchTemplateVersionsRequest::setDetailFlag(bool detailFlag)
{
	detailFlag_ = detailFlag;
	setCoreParameter("DetailFlag", detailFlag ? "true" : "false");
}

