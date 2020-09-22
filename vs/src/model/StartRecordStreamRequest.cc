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

#include <alibabacloud/vs/model/StartRecordStreamRequest.h>

using AlibabaCloud::Vs::Model::StartRecordStreamRequest;

StartRecordStreamRequest::StartRecordStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StartRecordStream")
{
	setMethod(HttpRequest::Method::Post);
}

StartRecordStreamRequest::~StartRecordStreamRequest()
{}

std::string StartRecordStreamRequest::getId()const
{
	return id_;
}

void StartRecordStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StartRecordStreamRequest::getShowLog()const
{
	return showLog_;
}

void StartRecordStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string StartRecordStreamRequest::getPlayDomain()const
{
	return playDomain_;
}

void StartRecordStreamRequest::setPlayDomain(const std::string& playDomain)
{
	playDomain_ = playDomain;
	setParameter("PlayDomain", playDomain);
}

std::string StartRecordStreamRequest::getApp()const
{
	return app_;
}

void StartRecordStreamRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

long StartRecordStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void StartRecordStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartRecordStreamRequest::getName()const
{
	return name_;
}

void StartRecordStreamRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

