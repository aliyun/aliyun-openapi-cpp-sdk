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

#include <alibabacloud/dyvmsapi/model/GetHotlineQualificationByOrderRequest.h>

using AlibabaCloud::Dyvmsapi::Model::GetHotlineQualificationByOrderRequest;

GetHotlineQualificationByOrderRequest::GetHotlineQualificationByOrderRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "GetHotlineQualificationByOrder")
{
	setMethod(HttpRequest::Method::Post);
}

GetHotlineQualificationByOrderRequest::~GetHotlineQualificationByOrderRequest()
{}

long GetHotlineQualificationByOrderRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetHotlineQualificationByOrderRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetHotlineQualificationByOrderRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetHotlineQualificationByOrderRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetHotlineQualificationByOrderRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetHotlineQualificationByOrderRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetHotlineQualificationByOrderRequest::getOrderId()const
{
	return orderId_;
}

void GetHotlineQualificationByOrderRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", orderId);
}

long GetHotlineQualificationByOrderRequest::getOwnerId()const
{
	return ownerId_;
}

void GetHotlineQualificationByOrderRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

