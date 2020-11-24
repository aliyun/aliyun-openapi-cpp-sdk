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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDeletionJobListRequest.h>

using AlibabaCloud::Hitsdb::Model::ExploreHiTSDBInstanceDeletionJobListRequest;

ExploreHiTSDBInstanceDeletionJobListRequest::ExploreHiTSDBInstanceDeletionJobListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ExploreHiTSDBInstanceDeletionJobList")
{
	setMethod(HttpRequest::Method::Post);
}

ExploreHiTSDBInstanceDeletionJobListRequest::~ExploreHiTSDBInstanceDeletionJobListRequest()
{}

long ExploreHiTSDBInstanceDeletionJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ExploreHiTSDBInstanceDeletionJobListRequest::getPageNumber()const
{
	return pageNumber_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getPassWord()const
{
	return passWord_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int ExploreHiTSDBInstanceDeletionJobListRequest::getPageSize()const
{
	return pageSize_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ExploreHiTSDBInstanceDeletionJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getJobType()const
{
	return jobType_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getInstanceId()const
{
	return instanceId_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ExploreHiTSDBInstanceDeletionJobListRequest::getUserName()const
{
	return userName_;
}

void ExploreHiTSDBInstanceDeletionJobListRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

