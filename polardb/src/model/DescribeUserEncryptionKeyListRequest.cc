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

#include <alibabacloud/polardb/model/DescribeUserEncryptionKeyListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeUserEncryptionKeyListRequest;

DescribeUserEncryptionKeyListRequest::DescribeUserEncryptionKeyListRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeUserEncryptionKeyList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserEncryptionKeyListRequest::~DescribeUserEncryptionKeyListRequest()
{}

long DescribeUserEncryptionKeyListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserEncryptionKeyListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserEncryptionKeyListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserEncryptionKeyListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserEncryptionKeyListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserEncryptionKeyListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeUserEncryptionKeyListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserEncryptionKeyListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserEncryptionKeyListRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeUserEncryptionKeyListRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeUserEncryptionKeyListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserEncryptionKeyListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeUserEncryptionKeyListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserEncryptionKeyListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserEncryptionKeyListRequest::getTDERegion()const
{
	return tDERegion_;
}

void DescribeUserEncryptionKeyListRequest::setTDERegion(const std::string& tDERegion)
{
	tDERegion_ = tDERegion;
	setParameter("TDERegion", tDERegion);
}

