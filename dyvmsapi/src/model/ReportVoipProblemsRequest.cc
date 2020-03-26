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

#include <alibabacloud/dyvmsapi/model/ReportVoipProblemsRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ReportVoipProblemsRequest;

ReportVoipProblemsRequest::ReportVoipProblemsRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ReportVoipProblems")
{
	setMethod(HttpRequest::Method::Post);
}

ReportVoipProblemsRequest::~ReportVoipProblemsRequest()
{}

long ReportVoipProblemsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportVoipProblemsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportVoipProblemsRequest::getTitle()const
{
	return title_;
}

void ReportVoipProblemsRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string ReportVoipProblemsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportVoipProblemsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportVoipProblemsRequest::getVoipId()const
{
	return voipId_;
}

void ReportVoipProblemsRequest::setVoipId(const std::string& voipId)
{
	voipId_ = voipId;
	setParameter("VoipId", voipId);
}

std::string ReportVoipProblemsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportVoipProblemsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ReportVoipProblemsRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportVoipProblemsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportVoipProblemsRequest::getChannelId()const
{
	return channelId_;
}

void ReportVoipProblemsRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

std::string ReportVoipProblemsRequest::getDesc()const
{
	return desc_;
}

void ReportVoipProblemsRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setParameter("Desc", desc);
}

