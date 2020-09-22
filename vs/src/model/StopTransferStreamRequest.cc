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

#include <alibabacloud/vs/model/StopTransferStreamRequest.h>

using AlibabaCloud::Vs::Model::StopTransferStreamRequest;

StopTransferStreamRequest::StopTransferStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StopTransferStream")
{
	setMethod(HttpRequest::Method::Post);
}

StopTransferStreamRequest::~StopTransferStreamRequest()
{}

std::string StopTransferStreamRequest::getId()const
{
	return id_;
}

void StopTransferStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StopTransferStreamRequest::getShowLog()const
{
	return showLog_;
}

void StopTransferStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string StopTransferStreamRequest::getTranscode()const
{
	return transcode_;
}

void StopTransferStreamRequest::setTranscode(const std::string& transcode)
{
	transcode_ = transcode;
	setParameter("Transcode", transcode);
}

long StopTransferStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void StopTransferStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

