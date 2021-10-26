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

#include <alibabacloud/quickbi-public/model/DeleteEmbedTokenRequest.h>

using AlibabaCloud::Quickbi_public::Model::DeleteEmbedTokenRequest;

DeleteEmbedTokenRequest::DeleteEmbedTokenRequest() :
	RpcServiceRequest("quickbi-public", "2021-03-25", "DeleteEmbedToken")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteEmbedTokenRequest::~DeleteEmbedTokenRequest()
{}

std::string DeleteEmbedTokenRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteEmbedTokenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteEmbedTokenRequest::getAccessPoint()const
{
	return accessPoint_;
}

void DeleteEmbedTokenRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string DeleteEmbedTokenRequest::getSignType()const
{
	return signType_;
}

void DeleteEmbedTokenRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string DeleteEmbedTokenRequest::getToken()const
{
	return token_;
}

void DeleteEmbedTokenRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

