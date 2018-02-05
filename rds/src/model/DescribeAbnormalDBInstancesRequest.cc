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

#include <alibabacloud/rds/model/DescribeAbnormalDBInstancesRequest.h>

using AlibabaCloud::Rds::Model::DescribeAbnormalDBInstancesRequest;

DescribeAbnormalDBInstancesRequest::DescribeAbnormalDBInstancesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAbnormalDBInstances")
{}

DescribeAbnormalDBInstancesRequest::~DescribeAbnormalDBInstancesRequest()
{}

std::string DescribeAbnormalDBInstancesRequest::getTag4value()const
{
	return tag4value_;
}

void DescribeAbnormalDBInstancesRequest::setTag4value(const std::string& tag4value)
{
	tag4value_ = tag4value;
	setParameter("Tag4value", tag4value);
}

long DescribeAbnormalDBInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAbnormalDBInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAbnormalDBInstancesRequest::getTag2key()const
{
	return tag2key_;
}

void DescribeAbnormalDBInstancesRequest::setTag2key(const std::string& tag2key)
{
	tag2key_ = tag2key;
	setParameter("Tag2key", tag2key);
}

std::string DescribeAbnormalDBInstancesRequest::getTag5key()const
{
	return tag5key_;
}

void DescribeAbnormalDBInstancesRequest::setTag5key(const std::string& tag5key)
{
	tag5key_ = tag5key;
	setParameter("Tag5key", tag5key);
}

std::string DescribeAbnormalDBInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAbnormalDBInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAbnormalDBInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeAbnormalDBInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeAbnormalDBInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAbnormalDBInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAbnormalDBInstancesRequest::getTag3key()const
{
	return tag3key_;
}

void DescribeAbnormalDBInstancesRequest::setTag3key(const std::string& tag3key)
{
	tag3key_ = tag3key;
	setParameter("Tag3key", tag3key);
}

long DescribeAbnormalDBInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAbnormalDBInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAbnormalDBInstancesRequest::getTag5value()const
{
	return tag5value_;
}

void DescribeAbnormalDBInstancesRequest::setTag5value(const std::string& tag5value)
{
	tag5value_ = tag5value;
	setParameter("Tag5value", tag5value);
}

int DescribeAbnormalDBInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAbnormalDBInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAbnormalDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAbnormalDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAbnormalDBInstancesRequest::getTags()const
{
	return tags_;
}

void DescribeAbnormalDBInstancesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeAbnormalDBInstancesRequest::getTag1key()const
{
	return tag1key_;
}

void DescribeAbnormalDBInstancesRequest::setTag1key(const std::string& tag1key)
{
	tag1key_ = tag1key;
	setParameter("Tag1key", tag1key);
}

std::string DescribeAbnormalDBInstancesRequest::getTag1value()const
{
	return tag1value_;
}

void DescribeAbnormalDBInstancesRequest::setTag1value(const std::string& tag1value)
{
	tag1value_ = tag1value;
	setParameter("Tag1value", tag1value);
}

std::string DescribeAbnormalDBInstancesRequest::getTag2value()const
{
	return tag2value_;
}

void DescribeAbnormalDBInstancesRequest::setTag2value(const std::string& tag2value)
{
	tag2value_ = tag2value;
	setParameter("Tag2value", tag2value);
}

int DescribeAbnormalDBInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAbnormalDBInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAbnormalDBInstancesRequest::getTag4key()const
{
	return tag4key_;
}

void DescribeAbnormalDBInstancesRequest::setTag4key(const std::string& tag4key)
{
	tag4key_ = tag4key;
	setParameter("Tag4key", tag4key);
}

std::string DescribeAbnormalDBInstancesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAbnormalDBInstancesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAbnormalDBInstancesRequest::getTag3value()const
{
	return tag3value_;
}

void DescribeAbnormalDBInstancesRequest::setTag3value(const std::string& tag3value)
{
	tag3value_ = tag3value;
	setParameter("Tag3value", tag3value);
}

std::string DescribeAbnormalDBInstancesRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeAbnormalDBInstancesRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}

