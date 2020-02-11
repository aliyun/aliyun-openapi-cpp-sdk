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

#include <alibabacloud/ecs/model/DescribeImagesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImagesRequest;

DescribeImagesRequest::DescribeImagesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeImages")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImagesRequest::~DescribeImagesRequest()
{}

std::string DescribeImagesRequest::getActionType()const
{
	return actionType_;
}

void DescribeImagesRequest::setActionType(const std::string& actionType)
{
	actionType_ = actionType;
	setParameter("ActionType", actionType);
}

long DescribeImagesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImagesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeImagesRequest::getImageId()const
{
	return imageId_;
}

void DescribeImagesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string DescribeImagesRequest::getSnapshotId()const
{
	return snapshotId_;
}

void DescribeImagesRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string DescribeImagesRequest::getUsage()const
{
	return usage_;
}

void DescribeImagesRequest::setUsage(const std::string& usage)
{
	usage_ = usage;
	setParameter("Usage", usage);
}

int DescribeImagesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeImagesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeImagesRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void DescribeImagesRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string DescribeImagesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeImagesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

bool DescribeImagesRequest::getIsSupportIoOptimized()const
{
	return isSupportIoOptimized_;
}

void DescribeImagesRequest::setIsSupportIoOptimized(bool isSupportIoOptimized)
{
	isSupportIoOptimized_ = isSupportIoOptimized;
	setParameter("IsSupportIoOptimized", isSupportIoOptimized ? "true" : "false");
}

std::string DescribeImagesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeImagesRequest::getImageName()const
{
	return imageName_;
}

void DescribeImagesRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

bool DescribeImagesRequest::getIsSupportCloudinit()const
{
	return isSupportCloudinit_;
}

void DescribeImagesRequest::setIsSupportCloudinit(bool isSupportCloudinit)
{
	isSupportCloudinit_ = isSupportCloudinit;
	setParameter("IsSupportCloudinit", isSupportCloudinit ? "true" : "false");
}

int DescribeImagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeImagesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeImagesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::vector<DescribeImagesRequest::Tag> DescribeImagesRequest::getTag()const
{
	return tag_;
}

void DescribeImagesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeImagesRequest::getArchitecture()const
{
	return architecture_;
}

void DescribeImagesRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setParameter("Architecture", architecture);
}

bool DescribeImagesRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeImagesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeImagesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImagesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImagesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeImagesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool DescribeImagesRequest::getShowExpired()const
{
	return showExpired_;
}

void DescribeImagesRequest::setShowExpired(bool showExpired)
{
	showExpired_ = showExpired;
	setParameter("ShowExpired", showExpired ? "true" : "false");
}

std::string DescribeImagesRequest::getOSType()const
{
	return oSType_;
}

void DescribeImagesRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setParameter("OSType", oSType);
}

long DescribeImagesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImagesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeImagesRequest::Filter> DescribeImagesRequest::getFilter()const
{
	return filter_;
}

void DescribeImagesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1 + 1);
		setParameter(filterObjStr + ".Value", filterObj.value);
		setParameter(filterObjStr + ".Key", filterObj.key);
	}
}

std::string DescribeImagesRequest::getStatus()const
{
	return status_;
}

void DescribeImagesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

