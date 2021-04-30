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

#include <alibabacloud/arms/model/CreateAlertTemplateRequest.h>

using AlibabaCloud::ARMS::Model::CreateAlertTemplateRequest;

CreateAlertTemplateRequest::CreateAlertTemplateRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CreateAlertTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAlertTemplateRequest::~CreateAlertTemplateRequest()
{}

std::string CreateAlertTemplateRequest::getTemplateProvider()const
{
	return templateProvider_;
}

void CreateAlertTemplateRequest::setTemplateProvider(const std::string& templateProvider)
{
	templateProvider_ = templateProvider;
	setParameter("TemplateProvider", templateProvider);
}

std::string CreateAlertTemplateRequest::getAnnotations()const
{
	return annotations_;
}

void CreateAlertTemplateRequest::setAnnotations(const std::string& annotations)
{
	annotations_ = annotations;
	setParameter("Annotations", annotations);
}

std::string CreateAlertTemplateRequest::getRule()const
{
	return rule_;
}

void CreateAlertTemplateRequest::setRule(const std::string& rule)
{
	rule_ = rule;
	setParameter("Rule", rule);
}

std::string CreateAlertTemplateRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void CreateAlertTemplateRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string CreateAlertTemplateRequest::getType()const
{
	return type_;
}

void CreateAlertTemplateRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateAlertTemplateRequest::getMessage()const
{
	return message_;
}

void CreateAlertTemplateRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string CreateAlertTemplateRequest::getParentId()const
{
	return parentId_;
}

void CreateAlertTemplateRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string CreateAlertTemplateRequest::getLabels()const
{
	return labels_;
}

void CreateAlertTemplateRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

std::string CreateAlertTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlertTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAlertTemplateRequest::getName()const
{
	return name_;
}

void CreateAlertTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateAlertTemplateRequest::getMatchExpressions()const
{
	return matchExpressions_;
}

void CreateAlertTemplateRequest::setMatchExpressions(const std::string& matchExpressions)
{
	matchExpressions_ = matchExpressions;
	setParameter("MatchExpressions", matchExpressions);
}

