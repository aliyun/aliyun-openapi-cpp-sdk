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

#include <alibabacloud/vs/model/ResetRenderingDevicesRequest.h>

using AlibabaCloud::Vs::Model::ResetRenderingDevicesRequest;

ResetRenderingDevicesRequest::ResetRenderingDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ResetRenderingDevices")
{
	setMethod(HttpRequest::Method::Post);
}

ResetRenderingDevicesRequest::~ResetRenderingDevicesRequest()
{}

std::string ResetRenderingDevicesRequest::getShowLog()const
{
	return showLog_;
}

void ResetRenderingDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ResetRenderingDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetRenderingDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ResetRenderingDevicesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ResetRenderingDevicesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

