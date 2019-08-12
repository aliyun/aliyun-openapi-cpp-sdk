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

#include <alibabacloud/dyvmsapi/model/QueryCallDetailByCallIdRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryCallDetailByCallIdRequest;

QueryCallDetailByCallIdRequest::QueryCallDetailByCallIdRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryCallDetailByCallId")
{}

QueryCallDetailByCallIdRequest::~QueryCallDetailByCallIdRequest()
{}

std::string QueryCallDetailByCallIdRequest::getCallId()const
{
	return callId_;
}

void QueryCallDetailByCallIdRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", std::to_string(callId));
}

long QueryCallDetailByCallIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCallDetailByCallIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long QueryCallDetailByCallIdRequest::getQueryDate()const
{
	return queryDate_;
}

void QueryCallDetailByCallIdRequest::setQueryDate(long queryDate)
{
	queryDate_ = queryDate;
	setCoreParameter("QueryDate", queryDate);
}

std::string QueryCallDetailByCallIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCallDetailByCallIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long QueryCallDetailByCallIdRequest::getProdId()const
{
	return prodId_;
}

void QueryCallDetailByCallIdRequest::setProdId(long prodId)
{
	prodId_ = prodId;
	setCoreParameter("ProdId", prodId);
}

long QueryCallDetailByCallIdRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCallDetailByCallIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryCallDetailByCallIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCallDetailByCallIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

