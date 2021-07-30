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

#include <alibabacloud/dyvmsapi/model/ListHotlineTransferNumberRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListHotlineTransferNumberRequest;

ListHotlineTransferNumberRequest::ListHotlineTransferNumberRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListHotlineTransferNumber")
{
	setMethod(HttpRequest::Method::Post);
}

ListHotlineTransferNumberRequest::~ListHotlineTransferNumberRequest()
{}

long ListHotlineTransferNumberRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListHotlineTransferNumberRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListHotlineTransferNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListHotlineTransferNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListHotlineTransferNumberRequest::getHotlineNumber()const
{
	return hotlineNumber_;
}

void ListHotlineTransferNumberRequest::setHotlineNumber(const std::string& hotlineNumber)
{
	hotlineNumber_ = hotlineNumber;
	setParameter("HotlineNumber", hotlineNumber);
}

int ListHotlineTransferNumberRequest::getPageSize()const
{
	return pageSize_;
}

void ListHotlineTransferNumberRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListHotlineTransferNumberRequest::getQualificationId()const
{
	return qualificationId_;
}

void ListHotlineTransferNumberRequest::setQualificationId(const std::string& qualificationId)
{
	qualificationId_ = qualificationId;
	setParameter("QualificationId", qualificationId);
}

std::string ListHotlineTransferNumberRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListHotlineTransferNumberRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListHotlineTransferNumberRequest::getOwnerId()const
{
	return ownerId_;
}

void ListHotlineTransferNumberRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ListHotlineTransferNumberRequest::getPageNo()const
{
	return pageNo_;
}

void ListHotlineTransferNumberRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

