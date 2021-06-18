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

#include <alibabacloud/cloudesl/model/UpdateUserRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateUser")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest()
{}

std::string UpdateUserRequest::getExtraParams()const
{
	return extraParams_;
}

void UpdateUserRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string UpdateUserRequest::getDingTalkUserId()const
{
	return dingTalkUserId_;
}

void UpdateUserRequest::setDingTalkUserId(const std::string& dingTalkUserId)
{
	dingTalkUserId_ = dingTalkUserId;
	setBodyParameter("DingTalkUserId", dingTalkUserId);
}

std::string UpdateUserRequest::getUserId()const
{
	return userId_;
}

void UpdateUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

std::string UpdateUserRequest::getDingTalkCompanyId()const
{
	return dingTalkCompanyId_;
}

void UpdateUserRequest::setDingTalkCompanyId(const std::string& dingTalkCompanyId)
{
	dingTalkCompanyId_ = dingTalkCompanyId;
	setBodyParameter("DingTalkCompanyId", dingTalkCompanyId);
}

