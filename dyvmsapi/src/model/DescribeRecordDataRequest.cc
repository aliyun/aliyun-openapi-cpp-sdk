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

#include <alibabacloud/dyvmsapi/model/DescribeRecordDataRequest.h>

using AlibabaCloud::Dyvmsapi::Model::DescribeRecordDataRequest;

DescribeRecordDataRequest::DescribeRecordDataRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "DescribeRecordData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRecordDataRequest::~DescribeRecordDataRequest()
{}

long DescribeRecordDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRecordDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRecordDataRequest::getAccountType()const
{
	return accountType_;
}

void DescribeRecordDataRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", accountType);
}

std::string DescribeRecordDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRecordDataRequest::getAcid()const
{
	return acid_;
}

void DescribeRecordDataRequest::setAcid(const std::string& acid)
{
	acid_ = acid;
	setParameter("Acid", acid);
}

std::string DescribeRecordDataRequest::getAccountId()const
{
	return accountId_;
}

void DescribeRecordDataRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

int DescribeRecordDataRequest::getSecLevel()const
{
	return secLevel_;
}

void DescribeRecordDataRequest::setSecLevel(int secLevel)
{
	secLevel_ = secLevel;
	setParameter("SecLevel", std::to_string(secLevel));
}

std::string DescribeRecordDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRecordDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRecordDataRequest::getProdCode()const
{
	return prodCode_;
}

void DescribeRecordDataRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long DescribeRecordDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

