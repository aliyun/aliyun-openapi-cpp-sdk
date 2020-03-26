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

#include <alibabacloud/dyplsapi/model/QuerySubsIdRequest.h>

using AlibabaCloud::Dyplsapi::Model::QuerySubsIdRequest;

QuerySubsIdRequest::QuerySubsIdRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "QuerySubsId")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySubsIdRequest::~QuerySubsIdRequest()
{}

long QuerySubsIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySubsIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySubsIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySubsIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySubsIdRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySubsIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySubsIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySubsIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QuerySubsIdRequest::getPoolKey()const
{
	return poolKey_;
}

void QuerySubsIdRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string QuerySubsIdRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void QuerySubsIdRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setParameter("PhoneNoX", phoneNoX);
}

