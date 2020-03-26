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

#include <alibabacloud/adb/model/DescribeLoghubDetailRequest.h>

using AlibabaCloud::Adb::Model::DescribeLoghubDetailRequest;

DescribeLoghubDetailRequest::DescribeLoghubDetailRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeLoghubDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLoghubDetailRequest::~DescribeLoghubDetailRequest()
{}

long DescribeLoghubDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoghubDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLoghubDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLoghubDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLoghubDetailRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoghubDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeLoghubDetailRequest::getProjectName()const
{
	return projectName_;
}

void DescribeLoghubDetailRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string DescribeLoghubDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoghubDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoghubDetailRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoghubDetailRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoghubDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoghubDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoghubDetailRequest::getExportName()const
{
	return exportName_;
}

void DescribeLoghubDetailRequest::setExportName(const std::string& exportName)
{
	exportName_ = exportName;
	setParameter("ExportName", exportName);
}

