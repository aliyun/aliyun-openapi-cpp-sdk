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

#include <alibabacloud/idrsservice/model/UpdateLiveRequest.h>

using AlibabaCloud::Idrsservice::Model::UpdateLiveRequest;

UpdateLiveRequest::UpdateLiveRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "UpdateLive")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateLiveRequest::~UpdateLiveRequest()
{}

std::string UpdateLiveRequest::getLiveId()const
{
	return liveId_;
}

void UpdateLiveRequest::setLiveId(const std::string& liveId)
{
	liveId_ = liveId;
	setParameter("LiveId", liveId);
}

std::string UpdateLiveRequest::getUserId()const
{
	return userId_;
}

void UpdateLiveRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string UpdateLiveRequest::getStatus()const
{
	return status_;
}

void UpdateLiveRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

