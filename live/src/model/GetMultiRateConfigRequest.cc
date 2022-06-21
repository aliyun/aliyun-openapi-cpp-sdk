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

#include <alibabacloud/live/model/GetMultiRateConfigRequest.h>

using AlibabaCloud::Live::Model::GetMultiRateConfigRequest;

GetMultiRateConfigRequest::GetMultiRateConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "GetMultiRateConfig")
{
	setMethod(HttpRequest::Method::Post);
}

GetMultiRateConfigRequest::~GetMultiRateConfigRequest()
{}

std::string GetMultiRateConfigRequest::getApp()const
{
	return app_;
}

void GetMultiRateConfigRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

std::string GetMultiRateConfigRequest::getGroupId()const
{
	return groupId_;
}

void GetMultiRateConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string GetMultiRateConfigRequest::getDomainName()const
{
	return domainName_;
}

void GetMultiRateConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long GetMultiRateConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMultiRateConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

