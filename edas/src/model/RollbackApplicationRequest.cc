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

#include <alibabacloud/edas/model/RollbackApplicationRequest.h>

using AlibabaCloud::Edas::Model::RollbackApplicationRequest;

RollbackApplicationRequest::RollbackApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_rollback");
	setMethod(HttpRequest::Method::Post);
}

RollbackApplicationRequest::~RollbackApplicationRequest()
{}

std::string RollbackApplicationRequest::getAppId()const
{
	return appId_;
}

void RollbackApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string RollbackApplicationRequest::getGroupId()const
{
	return groupId_;
}

void RollbackApplicationRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int RollbackApplicationRequest::getBatchWaitTime()const
{
	return batchWaitTime_;
}

void RollbackApplicationRequest::setBatchWaitTime(int batchWaitTime)
{
	batchWaitTime_ = batchWaitTime;
	setParameter("BatchWaitTime", std::to_string(batchWaitTime));
}

int RollbackApplicationRequest::getBatch()const
{
	return batch_;
}

void RollbackApplicationRequest::setBatch(int batch)
{
	batch_ = batch;
	setParameter("Batch", std::to_string(batch));
}

std::string RollbackApplicationRequest::getHistoryVersion()const
{
	return historyVersion_;
}

void RollbackApplicationRequest::setHistoryVersion(const std::string& historyVersion)
{
	historyVersion_ = historyVersion;
	setParameter("HistoryVersion", historyVersion);
}

