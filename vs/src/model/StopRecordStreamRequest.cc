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

#include <alibabacloud/vs/model/StopRecordStreamRequest.h>

using AlibabaCloud::Vs::Model::StopRecordStreamRequest;

StopRecordStreamRequest::StopRecordStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StopRecordStream")
{
	setMethod(HttpRequest::Method::Post);
}

StopRecordStreamRequest::~StopRecordStreamRequest()
{}

std::string StopRecordStreamRequest::getId()const
{
	return id_;
}

void StopRecordStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StopRecordStreamRequest::getShowLog()const
{
	return showLog_;
}

void StopRecordStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string StopRecordStreamRequest::getPlayDomain()const
{
	return playDomain_;
}

void StopRecordStreamRequest::setPlayDomain(const std::string& playDomain)
{
	playDomain_ = playDomain;
	setParameter("PlayDomain", playDomain);
}

std::string StopRecordStreamRequest::getApp()const
{
	return app_;
}

void StopRecordStreamRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

long StopRecordStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void StopRecordStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopRecordStreamRequest::getName()const
{
	return name_;
}

void StopRecordStreamRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

