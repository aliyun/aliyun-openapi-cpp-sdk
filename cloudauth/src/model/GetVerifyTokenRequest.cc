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

#include <alibabacloud/cloudauth/model/GetVerifyTokenRequest.h>

using AlibabaCloud::Cloudauth::Model::GetVerifyTokenRequest;

GetVerifyTokenRequest::GetVerifyTokenRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "GetVerifyToken")
{}

GetVerifyTokenRequest::~GetVerifyTokenRequest()
{}

std::string GetVerifyTokenRequest::getUserData()const
{
	return userData_;
}

void GetVerifyTokenRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

long GetVerifyTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVerifyTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetVerifyTokenRequest::getBiz()const
{
	return biz_;
}

void GetVerifyTokenRequest::setBiz(const std::string& biz)
{
	biz_ = biz;
	setParameter("Biz", biz);
}

std::string GetVerifyTokenRequest::getSourceIp()const
{
	return sourceIp_;
}

void GetVerifyTokenRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string GetVerifyTokenRequest::getBinding()const
{
	return binding_;
}

void GetVerifyTokenRequest::setBinding(const std::string& binding)
{
	binding_ = binding;
	setParameter("Binding", binding);
}

std::string GetVerifyTokenRequest::getVerifyConfigs()const
{
	return verifyConfigs_;
}

void GetVerifyTokenRequest::setVerifyConfigs(const std::string& verifyConfigs)
{
	verifyConfigs_ = verifyConfigs;
	setParameter("VerifyConfigs", verifyConfigs);
}

std::string GetVerifyTokenRequest::getTicketId()const
{
	return ticketId_;
}

void GetVerifyTokenRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", ticketId);
}

