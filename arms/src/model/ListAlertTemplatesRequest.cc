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

#include <alibabacloud/arms/model/ListAlertTemplatesRequest.h>

using AlibabaCloud::ARMS::Model::ListAlertTemplatesRequest;

ListAlertTemplatesRequest::ListAlertTemplatesRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ListAlertTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

ListAlertTemplatesRequest::~ListAlertTemplatesRequest()
{}

std::string ListAlertTemplatesRequest::getAlertProvider()const
{
	return alertProvider_;
}

void ListAlertTemplatesRequest::setAlertProvider(const std::string& alertProvider)
{
	alertProvider_ = alertProvider;
	setParameter("AlertProvider", alertProvider);
}

std::string ListAlertTemplatesRequest::getTemplateProvider()const
{
	return templateProvider_;
}

void ListAlertTemplatesRequest::setTemplateProvider(const std::string& templateProvider)
{
	templateProvider_ = templateProvider;
	setParameter("TemplateProvider", templateProvider);
}

std::string ListAlertTemplatesRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void ListAlertTemplatesRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string ListAlertTemplatesRequest::getType()const
{
	return type_;
}

void ListAlertTemplatesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ListAlertTemplatesRequest::getLabels()const
{
	return labels_;
}

void ListAlertTemplatesRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

std::string ListAlertTemplatesRequest::getRegionId()const
{
	return regionId_;
}

void ListAlertTemplatesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAlertTemplatesRequest::getName()const
{
	return name_;
}

void ListAlertTemplatesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool ListAlertTemplatesRequest::getStatus()const
{
	return status_;
}

void ListAlertTemplatesRequest::setStatus(bool status)
{
	status_ = status;
	setParameter("Status", status ? "true" : "false");
}

