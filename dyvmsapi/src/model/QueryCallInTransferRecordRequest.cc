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

#include <alibabacloud/dyvmsapi/model/QueryCallInTransferRecordRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryCallInTransferRecordRequest;

QueryCallInTransferRecordRequest::QueryCallInTransferRecordRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryCallInTransferRecord")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCallInTransferRecordRequest::~QueryCallInTransferRecordRequest()
{}

long QueryCallInTransferRecordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCallInTransferRecordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryCallInTransferRecordRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void QueryCallInTransferRecordRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string QueryCallInTransferRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCallInTransferRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long QueryCallInTransferRecordRequest::getPageSize()const
{
	return pageSize_;
}

void QueryCallInTransferRecordRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryCallInTransferRecordRequest::getQueryDate()const
{
	return queryDate_;
}

void QueryCallInTransferRecordRequest::setQueryDate(const std::string& queryDate)
{
	queryDate_ = queryDate;
	setParameter("QueryDate", queryDate);
}

std::string QueryCallInTransferRecordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCallInTransferRecordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QueryCallInTransferRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCallInTransferRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long QueryCallInTransferRecordRequest::getPageNo()const
{
	return pageNo_;
}

void QueryCallInTransferRecordRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string QueryCallInTransferRecordRequest::getCallInCaller()const
{
	return callInCaller_;
}

void QueryCallInTransferRecordRequest::setCallInCaller(const std::string& callInCaller)
{
	callInCaller_ = callInCaller;
	setParameter("CallInCaller", callInCaller);
}

