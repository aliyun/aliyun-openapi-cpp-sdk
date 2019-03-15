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

#include <alibabacloud/finmall/model/GetSignContractUrlRequest.h>

using AlibabaCloud::Finmall::Model::GetSignContractUrlRequest;

GetSignContractUrlRequest::GetSignContractUrlRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "GetSignContractUrl")
{}

GetSignContractUrlRequest::~GetSignContractUrlRequest()
{}

std::string GetSignContractUrlRequest::getExtInfo()const
{
	return extInfo_;
}

void GetSignContractUrlRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string GetSignContractUrlRequest::getBizId()const
{
	return bizId_;
}

void GetSignContractUrlRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string GetSignContractUrlRequest::getSceneId()const
{
	return sceneId_;
}

void GetSignContractUrlRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string GetSignContractUrlRequest::getReturnUrl()const
{
	return returnUrl_;
}

void GetSignContractUrlRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setParameter("ReturnUrl", returnUrl);
}

std::string GetSignContractUrlRequest::getUserId()const
{
	return userId_;
}

void GetSignContractUrlRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

