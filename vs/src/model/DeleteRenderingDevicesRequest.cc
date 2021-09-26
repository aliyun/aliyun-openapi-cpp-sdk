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

#include <alibabacloud/vs/model/DeleteRenderingDevicesRequest.h>

using AlibabaCloud::Vs::Model::DeleteRenderingDevicesRequest;

DeleteRenderingDevicesRequest::DeleteRenderingDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DeleteRenderingDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRenderingDevicesRequest::~DeleteRenderingDevicesRequest()
{}

std::string DeleteRenderingDevicesRequest::getShowLog()const
{
	return showLog_;
}

void DeleteRenderingDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DeleteRenderingDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRenderingDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRenderingDevicesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DeleteRenderingDevicesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

