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

#include <alibabacloud/dyvmsapi/model/ListHotlineTransferRegisterFileRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListHotlineTransferRegisterFileRequest;

ListHotlineTransferRegisterFileRequest::ListHotlineTransferRegisterFileRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListHotlineTransferRegisterFile")
{
	setMethod(HttpRequest::Method::Post);
}

ListHotlineTransferRegisterFileRequest::~ListHotlineTransferRegisterFileRequest()
{}

long ListHotlineTransferRegisterFileRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListHotlineTransferRegisterFileRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListHotlineTransferRegisterFileRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListHotlineTransferRegisterFileRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListHotlineTransferRegisterFileRequest::getHotlineNumber()const
{
	return hotlineNumber_;
}

void ListHotlineTransferRegisterFileRequest::setHotlineNumber(const std::string& hotlineNumber)
{
	hotlineNumber_ = hotlineNumber;
	setParameter("HotlineNumber", hotlineNumber);
}

int ListHotlineTransferRegisterFileRequest::getPageSize()const
{
	return pageSize_;
}

void ListHotlineTransferRegisterFileRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListHotlineTransferRegisterFileRequest::getQualificationId()const
{
	return qualificationId_;
}

void ListHotlineTransferRegisterFileRequest::setQualificationId(const std::string& qualificationId)
{
	qualificationId_ = qualificationId;
	setParameter("QualificationId", qualificationId);
}

std::string ListHotlineTransferRegisterFileRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListHotlineTransferRegisterFileRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListHotlineTransferRegisterFileRequest::getOwnerId()const
{
	return ownerId_;
}

void ListHotlineTransferRegisterFileRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ListHotlineTransferRegisterFileRequest::getPageNo()const
{
	return pageNo_;
}

void ListHotlineTransferRegisterFileRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

