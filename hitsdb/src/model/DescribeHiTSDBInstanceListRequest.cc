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

#include <alibabacloud/hitsdb/model/DescribeHiTSDBInstanceListRequest.h>

using AlibabaCloud::Hitsdb::Model::DescribeHiTSDBInstanceListRequest;

DescribeHiTSDBInstanceListRequest::DescribeHiTSDBInstanceListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "DescribeHiTSDBInstanceList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHiTSDBInstanceListRequest::~DescribeHiTSDBInstanceListRequest()
{}

long DescribeHiTSDBInstanceListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHiTSDBInstanceListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeHiTSDBInstanceListRequest::getStatusList()const
{
	return statusList_;
}

void DescribeHiTSDBInstanceListRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

int DescribeHiTSDBInstanceListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeHiTSDBInstanceListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeHiTSDBInstanceListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHiTSDBInstanceListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHiTSDBInstanceListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeHiTSDBInstanceListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeHiTSDBInstanceListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeHiTSDBInstanceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeHiTSDBInstanceListRequest::getQueryStr()const
{
	return queryStr_;
}

void DescribeHiTSDBInstanceListRequest::setQueryStr(const std::string& queryStr)
{
	queryStr_ = queryStr;
	setParameter("QueryStr", queryStr);
}

std::string DescribeHiTSDBInstanceListRequest::getEngineType()const
{
	return engineType_;
}

void DescribeHiTSDBInstanceListRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

std::string DescribeHiTSDBInstanceListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHiTSDBInstanceListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHiTSDBInstanceListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHiTSDBInstanceListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeHiTSDBInstanceListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHiTSDBInstanceListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHiTSDBInstanceListRequest::getAppKey()const
{
	return appKey_;
}

void DescribeHiTSDBInstanceListRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

