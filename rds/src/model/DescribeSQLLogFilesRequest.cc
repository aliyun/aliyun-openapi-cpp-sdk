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

#include <alibabacloud/rds/model/DescribeSQLLogFilesRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLLogFilesRequest;

DescribeSQLLogFilesRequest::DescribeSQLLogFilesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLLogFiles")
{}

DescribeSQLLogFilesRequest::~DescribeSQLLogFilesRequest()
{}

long DescribeSQLLogFilesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLLogFilesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeSQLLogFilesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogFilesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSQLLogFilesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogFilesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int DescribeSQLLogFilesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLLogFilesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSQLLogFilesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogFilesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSQLLogFilesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLLogFilesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSQLLogFilesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLLogFilesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeSQLLogFilesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLLogFilesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSQLLogFilesRequest::getFileName()const
{
	return fileName_;
}

void DescribeSQLLogFilesRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

