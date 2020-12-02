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

#include <alibabacloud/idrsservice/model/CreateLiveDetectionRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateLiveDetectionRequest;

CreateLiveDetectionRequest::CreateLiveDetectionRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateLiveDetection")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLiveDetectionRequest::~CreateLiveDetectionRequest()
{}

std::string CreateLiveDetectionRequest::getClientToken()const
{
	return clientToken_;
}

void CreateLiveDetectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateLiveDetectionRequest::getLiveId()const
{
	return liveId_;
}

void CreateLiveDetectionRequest::setLiveId(const std::string& liveId)
{
	liveId_ = liveId;
	setParameter("LiveId", liveId);
}

std::string CreateLiveDetectionRequest::getUserId()const
{
	return userId_;
}

void CreateLiveDetectionRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string CreateLiveDetectionRequest::getMetaUrl()const
{
	return metaUrl_;
}

void CreateLiveDetectionRequest::setMetaUrl(const std::string& metaUrl)
{
	metaUrl_ = metaUrl;
	setParameter("MetaUrl", metaUrl);
}

std::string CreateLiveDetectionRequest::getRuleId()const
{
	return ruleId_;
}

void CreateLiveDetectionRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

