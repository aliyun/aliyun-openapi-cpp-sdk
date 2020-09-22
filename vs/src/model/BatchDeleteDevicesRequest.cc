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

#include <alibabacloud/vs/model/BatchDeleteDevicesRequest.h>

using AlibabaCloud::Vs::Model::BatchDeleteDevicesRequest;

BatchDeleteDevicesRequest::BatchDeleteDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchDeleteDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchDeleteDevicesRequest::~BatchDeleteDevicesRequest()
{}

std::string BatchDeleteDevicesRequest::getId()const
{
	return id_;
}

void BatchDeleteDevicesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string BatchDeleteDevicesRequest::getShowLog()const
{
	return showLog_;
}

void BatchDeleteDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchDeleteDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchDeleteDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

