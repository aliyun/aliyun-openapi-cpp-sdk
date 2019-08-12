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

#include <alibabacloud/polardb/model/DescribeDBClustersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClustersRequest;

DescribeDBClustersRequest::DescribeDBClustersRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusters")
{}

DescribeDBClustersRequest::~DescribeDBClustersRequest()
{}

long DescribeDBClustersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClustersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBClustersRequest::getDBClusterDescription()const
{
	return dBClusterDescription_;
}

void DescribeDBClustersRequest::setDBClusterDescription(const std::string& dBClusterDescription)
{
	dBClusterDescription_ = dBClusterDescription;
	setCoreParameter("DBClusterDescription", std::to_string(dBClusterDescription));
}

std::string DescribeDBClustersRequest::getDBClusterStatus()const
{
	return dBClusterStatus_;
}

void DescribeDBClustersRequest::setDBClusterStatus(const std::string& dBClusterStatus)
{
	dBClusterStatus_ = dBClusterStatus;
	setCoreParameter("DBClusterStatus", std::to_string(dBClusterStatus));
}

std::string DescribeDBClustersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClustersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeDBClustersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClustersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeDBClustersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClustersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeDBClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDBClustersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClustersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDBClustersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeDBClustersRequest::getDBType()const
{
	return dBType_;
}

void DescribeDBClustersRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setCoreParameter("DBType", std::to_string(dBType));
}

int DescribeDBClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDBClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::vector<DescribeDBClustersRequest::Tag> DescribeDBClustersRequest::getTag()const
{
	return tag_;
}

void DescribeDBClustersRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeDBClustersRequest::getDBClusterIds()const
{
	return dBClusterIds_;
}

void DescribeDBClustersRequest::setDBClusterIds(const std::string& dBClusterIds)
{
	dBClusterIds_ = dBClusterIds;
	setCoreParameter("DBClusterIds", std::to_string(dBClusterIds));
}

