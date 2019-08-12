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

#include <alibabacloud/dyvmsapi/model/CreateRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CreateRobotTaskRequest;

CreateRobotTaskRequest::CreateRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CreateRobotTask")
{}

CreateRobotTaskRequest::~CreateRobotTaskRequest()
{}

long CreateRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateRobotTaskRequest::getRecallStateCodes()const
{
	return recallStateCodes_;
}

void CreateRobotTaskRequest::setRecallStateCodes(const std::string& recallStateCodes)
{
	recallStateCodes_ = recallStateCodes;
	setCoreParameter("RecallStateCodes", std::to_string(recallStateCodes));
}

std::string CreateRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateRobotTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateRobotTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", std::to_string(taskName));
}

int CreateRobotTaskRequest::getRetryType()const
{
	return retryType_;
}

void CreateRobotTaskRequest::setRetryType(int retryType)
{
	retryType_ = retryType;
	setCoreParameter("RetryType", retryType);
}

long CreateRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long CreateRobotTaskRequest::getDialogId()const
{
	return dialogId_;
}

void CreateRobotTaskRequest::setDialogId(long dialogId)
{
	dialogId_ = dialogId;
	setCoreParameter("DialogId", dialogId);
}

std::string CreateRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int CreateRobotTaskRequest::getRecallTimes()const
{
	return recallTimes_;
}

void CreateRobotTaskRequest::setRecallTimes(int recallTimes)
{
	recallTimes_ = recallTimes;
	setCoreParameter("RecallTimes", recallTimes);
}

std::string CreateRobotTaskRequest::getCaller()const
{
	return caller_;
}

void CreateRobotTaskRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setCoreParameter("Caller", std::to_string(caller));
}

bool CreateRobotTaskRequest::getNumberStatusIdent()const
{
	return numberStatusIdent_;
}

void CreateRobotTaskRequest::setNumberStatusIdent(bool numberStatusIdent)
{
	numberStatusIdent_ = numberStatusIdent;
	setCoreParameter("NumberStatusIdent", numberStatusIdent ? "true" : "false");
}

std::string CreateRobotTaskRequest::getCorpName()const
{
	return corpName_;
}

void CreateRobotTaskRequest::setCorpName(const std::string& corpName)
{
	corpName_ = corpName;
	setCoreParameter("CorpName", std::to_string(corpName));
}

int CreateRobotTaskRequest::getRecallInterval()const
{
	return recallInterval_;
}

void CreateRobotTaskRequest::setRecallInterval(int recallInterval)
{
	recallInterval_ = recallInterval;
	setCoreParameter("RecallInterval", recallInterval);
}

bool CreateRobotTaskRequest::getIsSelfLine()const
{
	return isSelfLine_;
}

void CreateRobotTaskRequest::setIsSelfLine(bool isSelfLine)
{
	isSelfLine_ = isSelfLine;
	setCoreParameter("IsSelfLine", isSelfLine ? "true" : "false");
}

