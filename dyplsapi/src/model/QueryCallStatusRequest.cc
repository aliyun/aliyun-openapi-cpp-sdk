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

#include <alibabacloud/dyplsapi/model/QueryCallStatusRequest.h>

using AlibabaCloud::Dyplsapi::Model::QueryCallStatusRequest;

QueryCallStatusRequest::QueryCallStatusRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "QueryCallStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCallStatusRequest::~QueryCallStatusRequest()
{}

long QueryCallStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCallStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryCallStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCallStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryCallStatusRequest::getSubsId()const
{
	return subsId_;
}

void QueryCallStatusRequest::setSubsId(const std::string& subsId)
{
	subsId_ = subsId;
	setCoreParameter("SubsId", subsId);
}

std::string QueryCallStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCallStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryCallStatusRequest::getCallNo()const
{
	return callNo_;
}

void QueryCallStatusRequest::setCallNo(const std::string& callNo)
{
	callNo_ = callNo;
	setCoreParameter("CallNo", callNo);
}

long QueryCallStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCallStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryCallStatusRequest::getPoolKey()const
{
	return poolKey_;
}

void QueryCallStatusRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setCoreParameter("PoolKey", poolKey);
}

