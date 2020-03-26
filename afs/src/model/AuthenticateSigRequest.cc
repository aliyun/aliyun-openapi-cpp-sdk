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

#include <alibabacloud/afs/model/AuthenticateSigRequest.h>

using AlibabaCloud::Afs::Model::AuthenticateSigRequest;

AuthenticateSigRequest::AuthenticateSigRequest() :
	RpcServiceRequest("afs", "2018-01-12", "AuthenticateSig")
{
	setMethod(HttpRequest::Method::Post);
}

AuthenticateSigRequest::~AuthenticateSigRequest()
{}

std::string AuthenticateSigRequest::getRemoteIp()const
{
	return remoteIp_;
}

void AuthenticateSigRequest::setRemoteIp(const std::string& remoteIp)
{
	remoteIp_ = remoteIp;
	setParameter("RemoteIp", remoteIp);
}

std::string AuthenticateSigRequest::getSessionId()const
{
	return sessionId_;
}

void AuthenticateSigRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setParameter("SessionId", sessionId);
}

std::string AuthenticateSigRequest::getScene()const
{
	return scene_;
}

void AuthenticateSigRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string AuthenticateSigRequest::getSig()const
{
	return sig_;
}

void AuthenticateSigRequest::setSig(const std::string& sig)
{
	sig_ = sig;
	setParameter("Sig", sig);
}

std::string AuthenticateSigRequest::getSourceIp()const
{
	return sourceIp_;
}

void AuthenticateSigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string AuthenticateSigRequest::getToken()const
{
	return token_;
}

void AuthenticateSigRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string AuthenticateSigRequest::getAppKey()const
{
	return appKey_;
}

void AuthenticateSigRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

