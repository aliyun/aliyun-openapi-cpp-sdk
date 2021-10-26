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

#include <alibabacloud/quickbi-public/model/CreateEmbedTokenRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateEmbedTokenRequest;

CreateEmbedTokenRequest::CreateEmbedTokenRequest() :
	RpcServiceRequest("quickbi-public", "2021-03-25", "CreateEmbedToken")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEmbedTokenRequest::~CreateEmbedTokenRequest()
{}

std::string CreateEmbedTokenRequest::getAccountName()const
{
	return accountName_;
}

void CreateEmbedTokenRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string CreateEmbedTokenRequest::getClientToken()const
{
	return clientToken_;
}

void CreateEmbedTokenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateEmbedTokenRequest::getWorksId()const
{
	return worksId_;
}

void CreateEmbedTokenRequest::setWorksId(const std::string& worksId)
{
	worksId_ = worksId;
	setParameter("WorksId", worksId);
}

std::string CreateEmbedTokenRequest::getAccessPoint()const
{
	return accessPoint_;
}

void CreateEmbedTokenRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

int CreateEmbedTokenRequest::getAccountType()const
{
	return accountType_;
}

void CreateEmbedTokenRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", std::to_string(accountType));
}

std::string CreateEmbedTokenRequest::getSignType()const
{
	return signType_;
}

void CreateEmbedTokenRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

int CreateEmbedTokenRequest::getExpireMin()const
{
	return expireMin_;
}

void CreateEmbedTokenRequest::setExpireMin(int expireMin)
{
	expireMin_ = expireMin;
	setParameter("ExpireMin", std::to_string(expireMin));
}

std::string CreateEmbedTokenRequest::getUserId()const
{
	return userId_;
}

void CreateEmbedTokenRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

