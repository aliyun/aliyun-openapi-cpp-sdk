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

#include <alibabacloud/vs/model/OperateRenderingDevicesRequest.h>

using AlibabaCloud::Vs::Model::OperateRenderingDevicesRequest;

OperateRenderingDevicesRequest::OperateRenderingDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "OperateRenderingDevices")
{
	setMethod(HttpRequest::Method::Post);
}

OperateRenderingDevicesRequest::~OperateRenderingDevicesRequest()
{}

bool OperateRenderingDevicesRequest::getForceStop()const
{
	return forceStop_;
}

void OperateRenderingDevicesRequest::setForceStop(bool forceStop)
{
	forceStop_ = forceStop;
	setParameter("ForceStop", forceStop ? "true" : "false");
}

std::string OperateRenderingDevicesRequest::getShowLog()const
{
	return showLog_;
}

void OperateRenderingDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long OperateRenderingDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void OperateRenderingDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string OperateRenderingDevicesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void OperateRenderingDevicesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string OperateRenderingDevicesRequest::getOperation()const
{
	return operation_;
}

void OperateRenderingDevicesRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

