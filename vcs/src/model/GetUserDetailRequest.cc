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

#include <alibabacloud/vcs/model/GetUserDetailRequest.h>

using AlibabaCloud::Vcs::Model::GetUserDetailRequest;

GetUserDetailRequest::GetUserDetailRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetUserDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetUserDetailRequest::~GetUserDetailRequest()
{}

std::string GetUserDetailRequest::getIsvSubId()const
{
	return isvSubId_;
}

void GetUserDetailRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string GetUserDetailRequest::getCorpId()const
{
	return corpId_;
}

void GetUserDetailRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

bool GetUserDetailRequest::getNeedFaceDetail()const
{
	return needFaceDetail_;
}

void GetUserDetailRequest::setNeedFaceDetail(bool needFaceDetail)
{
	needFaceDetail_ = needFaceDetail;
	setBodyParameter("NeedFaceDetail", needFaceDetail ? "true" : "false");
}

long GetUserDetailRequest::getUserId()const
{
	return userId_;
}

void GetUserDetailRequest::setUserId(long userId)
{
	userId_ = userId;
	setBodyParameter("UserId", std::to_string(userId));
}

