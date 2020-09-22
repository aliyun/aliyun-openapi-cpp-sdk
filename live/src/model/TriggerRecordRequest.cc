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

#include <alibabacloud/live/model/TriggerRecordRequest.h>

using AlibabaCloud::Live::Model::TriggerRecordRequest;

TriggerRecordRequest::TriggerRecordRequest() :
	RpcServiceRequest("live", "2016-11-01", "TriggerRecord")
{
	setMethod(HttpRequest::Method::Post);
}

TriggerRecordRequest::~TriggerRecordRequest()
{}

int TriggerRecordRequest::getSource()const
{
	return source_;
}

void TriggerRecordRequest::setSource(int source)
{
	source_ = source;
	setParameter("Source", std::to_string(source));
}

std::string TriggerRecordRequest::getUserData()const
{
	return userData_;
}

void TriggerRecordRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string TriggerRecordRequest::getAppName()const
{
	return appName_;
}

void TriggerRecordRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string TriggerRecordRequest::getStreamName()const
{
	return streamName_;
}

void TriggerRecordRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string TriggerRecordRequest::getAvMode()const
{
	return avMode_;
}

void TriggerRecordRequest::setAvMode(const std::string& avMode)
{
	avMode_ = avMode;
	setParameter("AvMode", avMode);
}

std::string TriggerRecordRequest::getStorePath()const
{
	return storePath_;
}

void TriggerRecordRequest::setStorePath(const std::string& storePath)
{
	storePath_ = storePath;
	setParameter("StorePath", storePath);
}

std::string TriggerRecordRequest::getDomainName()const
{
	return domainName_;
}

void TriggerRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long TriggerRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void TriggerRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string TriggerRecordRequest::getForceTranscode()const
{
	return forceTranscode_;
}

void TriggerRecordRequest::setForceTranscode(const std::string& forceTranscode)
{
	forceTranscode_ = forceTranscode;
	setParameter("ForceTranscode", forceTranscode);
}

bool TriggerRecordRequest::getNeedRecord()const
{
	return needRecord_;
}

void TriggerRecordRequest::setNeedRecord(bool needRecord)
{
	needRecord_ = needRecord;
	setParameter("NeedRecord", needRecord ? "true" : "false");
}

