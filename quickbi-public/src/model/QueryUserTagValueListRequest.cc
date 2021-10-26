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

#include <alibabacloud/quickbi-public/model/QueryUserTagValueListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryUserTagValueListRequest;

QueryUserTagValueListRequest::QueryUserTagValueListRequest() :
	RpcServiceRequest("quickbi-public", "2020-08-02", "QueryUserTagValueList")
{
	setMethod(HttpRequest::Method::Get);
}

QueryUserTagValueListRequest::~QueryUserTagValueListRequest()
{}

std::string QueryUserTagValueListRequest::getAccessPoint()const
{
	return accessPoint_;
}

void QueryUserTagValueListRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string QueryUserTagValueListRequest::getSignType()const
{
	return signType_;
}

void QueryUserTagValueListRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string QueryUserTagValueListRequest::getUserId()const
{
	return userId_;
}

void QueryUserTagValueListRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

