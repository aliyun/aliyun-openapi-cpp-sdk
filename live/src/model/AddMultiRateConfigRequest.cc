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

#include <alibabacloud/live/model/AddMultiRateConfigRequest.h>

using AlibabaCloud::Live::Model::AddMultiRateConfigRequest;

AddMultiRateConfigRequest::AddMultiRateConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddMultiRateConfig")
{
	setMethod(HttpRequest::Method::Post);
}

AddMultiRateConfigRequest::~AddMultiRateConfigRequest()
{}

std::string AddMultiRateConfigRequest::getApp()const
{
	return app_;
}

void AddMultiRateConfigRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

std::string AddMultiRateConfigRequest::getGroupId()const
{
	return groupId_;
}

void AddMultiRateConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string AddMultiRateConfigRequest::getTemplates()const
{
	return templates_;
}

void AddMultiRateConfigRequest::setTemplates(const std::string& templates)
{
	templates_ = templates;
	setParameter("Templates", templates);
}

std::string AddMultiRateConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddMultiRateConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long AddMultiRateConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMultiRateConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddMultiRateConfigRequest::getIsLazy()const
{
	return isLazy_;
}

void AddMultiRateConfigRequest::setIsLazy(const std::string& isLazy)
{
	isLazy_ = isLazy;
	setParameter("IsLazy", isLazy);
}

std::string AddMultiRateConfigRequest::getAvFormat()const
{
	return avFormat_;
}

void AddMultiRateConfigRequest::setAvFormat(const std::string& avFormat)
{
	avFormat_ = avFormat;
	setParameter("AvFormat", avFormat);
}

std::string AddMultiRateConfigRequest::getIsTimeAlign()const
{
	return isTimeAlign_;
}

void AddMultiRateConfigRequest::setIsTimeAlign(const std::string& isTimeAlign)
{
	isTimeAlign_ = isTimeAlign;
	setParameter("IsTimeAlign", isTimeAlign);
}

