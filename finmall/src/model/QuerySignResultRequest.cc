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

#include <alibabacloud/finmall/model/QuerySignResultRequest.h>

using AlibabaCloud::Finmall::Model::QuerySignResultRequest;

QuerySignResultRequest::QuerySignResultRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "QuerySignResult")
{}

QuerySignResultRequest::~QuerySignResultRequest()
{}

std::string QuerySignResultRequest::getExtInfo()const
{
	return extInfo_;
}

void QuerySignResultRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string QuerySignResultRequest::getBizId()const
{
	return bizId_;
}

void QuerySignResultRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string QuerySignResultRequest::getSceneId()const
{
	return sceneId_;
}

void QuerySignResultRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string QuerySignResultRequest::getType()const
{
	return type_;
}

void QuerySignResultRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string QuerySignResultRequest::getUserId()const
{
	return userId_;
}

void QuerySignResultRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

