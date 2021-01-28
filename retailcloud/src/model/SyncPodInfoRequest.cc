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

#include <alibabacloud/retailcloud/model/SyncPodInfoRequest.h>

using AlibabaCloud::Retailcloud::Model::SyncPodInfoRequest;

SyncPodInfoRequest::SyncPodInfoRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "SyncPodInfo")
{
	setMethod(HttpRequest::Method::Post);
}

SyncPodInfoRequest::~SyncPodInfoRequest()
{}

std::string SyncPodInfoRequest::getReason()const
{
	return reason_;
}

void SyncPodInfoRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setParameter("Reason", reason);
}

std::string SyncPodInfoRequest::getRequestId()const
{
	return requestId_;
}

void SyncPodInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string SyncPodInfoRequest::getPodName()const
{
	return podName_;
}

void SyncPodInfoRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

std::string SyncPodInfoRequest::getSideCarType()const
{
	return sideCarType_;
}

void SyncPodInfoRequest::setSideCarType(const std::string& sideCarType)
{
	sideCarType_ = sideCarType;
	setParameter("SideCarType", sideCarType);
}

long SyncPodInfoRequest::getTaskId()const
{
	return taskId_;
}

void SyncPodInfoRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

bool SyncPodInfoRequest::getStatus()const
{
	return status_;
}

void SyncPodInfoRequest::setStatus(bool status)
{
	status_ = status;
	setParameter("Status", status ? "true" : "false");
}

