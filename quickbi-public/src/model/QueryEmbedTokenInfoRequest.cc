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

#include <alibabacloud/quickbi-public/model/QueryEmbedTokenInfoRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryEmbedTokenInfoRequest;

QueryEmbedTokenInfoRequest::QueryEmbedTokenInfoRequest() :
	RpcServiceRequest("quickbi-public", "2021-03-25", "QueryEmbedTokenInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEmbedTokenInfoRequest::~QueryEmbedTokenInfoRequest()
{}

std::string QueryEmbedTokenInfoRequest::getClientToken()const
{
	return clientToken_;
}

void QueryEmbedTokenInfoRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string QueryEmbedTokenInfoRequest::getAccessPoint()const
{
	return accessPoint_;
}

void QueryEmbedTokenInfoRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string QueryEmbedTokenInfoRequest::getSignType()const
{
	return signType_;
}

void QueryEmbedTokenInfoRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string QueryEmbedTokenInfoRequest::getToken()const
{
	return token_;
}

void QueryEmbedTokenInfoRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

