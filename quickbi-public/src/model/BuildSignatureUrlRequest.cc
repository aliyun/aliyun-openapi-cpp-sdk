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

#include <alibabacloud/quickbi-public/model/BuildSignatureUrlRequest.h>

using AlibabaCloud::Quickbi_public::Model::BuildSignatureUrlRequest;

BuildSignatureUrlRequest::BuildSignatureUrlRequest() :
	RpcServiceRequest("quickbi-public", "2021-03-25", "BuildSignatureUrl")
{
	setMethod(HttpRequest::Method::Post);
}

BuildSignatureUrlRequest::~BuildSignatureUrlRequest()
{}

std::string BuildSignatureUrlRequest::getWatermark()const
{
	return watermark_;
}

void BuildSignatureUrlRequest::setWatermark(const std::string& watermark)
{
	watermark_ = watermark;
	setParameter("Watermark", watermark);
}

std::string BuildSignatureUrlRequest::getClientToken()const
{
	return clientToken_;
}

void BuildSignatureUrlRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string BuildSignatureUrlRequest::getAccessPoint()const
{
	return accessPoint_;
}

void BuildSignatureUrlRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

int BuildSignatureUrlRequest::getAccountType()const
{
	return accountType_;
}

void BuildSignatureUrlRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", std::to_string(accountType));
}

std::string BuildSignatureUrlRequest::getSignType()const
{
	return signType_;
}

void BuildSignatureUrlRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string BuildSignatureUrlRequest::getUserId()const
{
	return userId_;
}

void BuildSignatureUrlRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string BuildSignatureUrlRequest::getAccountName()const
{
	return accountName_;
}

void BuildSignatureUrlRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string BuildSignatureUrlRequest::getWorksId()const
{
	return worksId_;
}

void BuildSignatureUrlRequest::setWorksId(const std::string& worksId)
{
	worksId_ = worksId;
	setParameter("WorksId", worksId);
}

bool BuildSignatureUrlRequest::getWithHost()const
{
	return withHost_;
}

void BuildSignatureUrlRequest::setWithHost(bool withHost)
{
	withHost_ = withHost;
	setParameter("WithHost", withHost ? "true" : "false");
}

int BuildSignatureUrlRequest::getExpireMin()const
{
	return expireMin_;
}

void BuildSignatureUrlRequest::setExpireMin(int expireMin)
{
	expireMin_ = expireMin;
	setParameter("ExpireMin", std::to_string(expireMin));
}

