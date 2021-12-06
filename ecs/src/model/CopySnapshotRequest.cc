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

#include <alibabacloud/ecs/model/CopySnapshotRequest.h>

using AlibabaCloud::Ecs::Model::CopySnapshotRequest;

CopySnapshotRequest::CopySnapshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CopySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

CopySnapshotRequest::~CopySnapshotRequest()
{}

long CopySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopySnapshotRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CopySnapshotRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string CopySnapshotRequest::getDestinationRegionId()const
{
	return destinationRegionId_;
}

void CopySnapshotRequest::setDestinationRegionId(const std::string& destinationRegionId)
{
	destinationRegionId_ = destinationRegionId;
	setParameter("DestinationRegionId", destinationRegionId);
}

std::string CopySnapshotRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CopySnapshotRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CopySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void CopySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<CopySnapshotRequest::Tag> CopySnapshotRequest::getTag()const
{
	return tag_;
}

void CopySnapshotRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string CopySnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopySnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CopySnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void CopySnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CopySnapshotRequest::getDestinationSnapshotName()const
{
	return destinationSnapshotName_;
}

void CopySnapshotRequest::setDestinationSnapshotName(const std::string& destinationSnapshotName)
{
	destinationSnapshotName_ = destinationSnapshotName;
	setParameter("DestinationSnapshotName", destinationSnapshotName);
}

std::string CopySnapshotRequest::getDestinationSnapshotDescription()const
{
	return destinationSnapshotDescription_;
}

void CopySnapshotRequest::setDestinationSnapshotDescription(const std::string& destinationSnapshotDescription)
{
	destinationSnapshotDescription_ = destinationSnapshotDescription;
	setParameter("DestinationSnapshotDescription", destinationSnapshotDescription);
}

int CopySnapshotRequest::getRetentionDays()const
{
	return retentionDays_;
}

void CopySnapshotRequest::setRetentionDays(int retentionDays)
{
	retentionDays_ = retentionDays;
	setParameter("RetentionDays", std::to_string(retentionDays));
}

