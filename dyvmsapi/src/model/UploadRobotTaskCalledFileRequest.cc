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

#include <alibabacloud/dyvmsapi/model/UploadRobotTaskCalledFileRequest.h>

using AlibabaCloud::Dyvmsapi::Model::UploadRobotTaskCalledFileRequest;

UploadRobotTaskCalledFileRequest::UploadRobotTaskCalledFileRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "UploadRobotTaskCalledFile")
{}

UploadRobotTaskCalledFileRequest::~UploadRobotTaskCalledFileRequest()
{}

long UploadRobotTaskCalledFileRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UploadRobotTaskCalledFileRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UploadRobotTaskCalledFileRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UploadRobotTaskCalledFileRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UploadRobotTaskCalledFileRequest::getCalledNumber()const
{
	return calledNumber_;
}

void UploadRobotTaskCalledFileRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

std::string UploadRobotTaskCalledFileRequest::getTtsParamHead()const
{
	return ttsParamHead_;
}

void UploadRobotTaskCalledFileRequest::setTtsParamHead(const std::string& ttsParamHead)
{
	ttsParamHead_ = ttsParamHead;
	setCoreParameter("TtsParamHead", ttsParamHead);
}

std::string UploadRobotTaskCalledFileRequest::getTtsParam()const
{
	return ttsParam_;
}

void UploadRobotTaskCalledFileRequest::setTtsParam(const std::string& ttsParam)
{
	ttsParam_ = ttsParam;
	setCoreParameter("TtsParam", ttsParam);
}

long UploadRobotTaskCalledFileRequest::getId()const
{
	return id_;
}

void UploadRobotTaskCalledFileRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

long UploadRobotTaskCalledFileRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadRobotTaskCalledFileRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UploadRobotTaskCalledFileRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UploadRobotTaskCalledFileRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

