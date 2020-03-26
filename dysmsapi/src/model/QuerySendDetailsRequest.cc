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

#include <alibabacloud/dysmsapi/model/QuerySendDetailsRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySendDetailsRequest;

QuerySendDetailsRequest::QuerySendDetailsRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySendDetails")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySendDetailsRequest::~QuerySendDetailsRequest()
{}

long QuerySendDetailsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySendDetailsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySendDetailsRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void QuerySendDetailsRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string QuerySendDetailsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySendDetailsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QuerySendDetailsRequest::getSendDate()const
{
	return sendDate_;
}

void QuerySendDetailsRequest::setSendDate(const std::string& sendDate)
{
	sendDate_ = sendDate;
	setParameter("SendDate", sendDate);
}

long QuerySendDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySendDetailsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySendDetailsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySendDetailsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySendDetailsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QuerySendDetailsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long QuerySendDetailsRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySendDetailsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySendDetailsRequest::getBizId()const
{
	return bizId_;
}

void QuerySendDetailsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

