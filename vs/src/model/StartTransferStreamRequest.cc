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

#include <alibabacloud/vs/model/StartTransferStreamRequest.h>

using AlibabaCloud::Vs::Model::StartTransferStreamRequest;

StartTransferStreamRequest::StartTransferStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StartTransferStream")
{
	setMethod(HttpRequest::Method::Post);
}

StartTransferStreamRequest::~StartTransferStreamRequest()
{}

std::string StartTransferStreamRequest::getId()const
{
	return id_;
}

void StartTransferStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StartTransferStreamRequest::getShowLog()const
{
	return showLog_;
}

void StartTransferStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string StartTransferStreamRequest::getTranscode()const
{
	return transcode_;
}

void StartTransferStreamRequest::setTranscode(const std::string& transcode)
{
	transcode_ = transcode;
	setParameter("Transcode", transcode);
}

long StartTransferStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void StartTransferStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartTransferStreamRequest::getUrl()const
{
	return url_;
}

void StartTransferStreamRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

