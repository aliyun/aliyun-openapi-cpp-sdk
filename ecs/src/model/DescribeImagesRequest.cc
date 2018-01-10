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

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImagesRequest::DescribeImagesRequest() :
	EcsRequest("DescribeImages")
{}

DescribeImagesRequest::~DescribeImagesRequest()
{}

std::string DescribeImagesRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeImagesRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
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

std::string DescribeImagesRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeImagesRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeImagesRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeImagesRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setParameter("Filter2Value", filter2Value);
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

std::string DescribeImagesRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeImagesRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
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

std::string DescribeImagesRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeImagesRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

bool DescribeImagesRequest::getIsSupportIoOptimized()const
{
	return isSupportIoOptimized_;
}

void DescribeImagesRequest::setIsSupportIoOptimized(bool isSupportIoOptimized)
{
	isSupportIoOptimized_ = isSupportIoOptimized;
	setParameter("IsSupportIoOptimized", std::to_string(isSupportIoOptimized));
}

std::string DescribeImagesRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeImagesRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setParameter("Filter1Key", filter1Key);
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
	setParameter("IsSupportCloudinit", std::to_string(isSupportCloudinit));
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

std::string DescribeImagesRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeImagesRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
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
	setParameter("DryRun", std::to_string(dryRun));
}

std::string DescribeImagesRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeImagesRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
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
	setParameter("ShowExpired", std::to_string(showExpired));
}

std::string DescribeImagesRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeImagesRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setParameter("Filter1Value", filter1Value);
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

std::string DescribeImagesRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeImagesRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setParameter("Filter2Key", filter2Key);
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

std::string DescribeImagesRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeImagesRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string DescribeImagesRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeImagesRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeImagesRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeImagesRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string DescribeImagesRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeImagesRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
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

