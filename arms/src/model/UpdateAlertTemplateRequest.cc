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

#include <alibabacloud/arms/model/UpdateAlertTemplateRequest.h>

using AlibabaCloud::ARMS::Model::UpdateAlertTemplateRequest;

UpdateAlertTemplateRequest::UpdateAlertTemplateRequest() :
	RpcServiceRequest("arms", "2019-08-08", "UpdateAlertTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAlertTemplateRequest::~UpdateAlertTemplateRequest()
{}

std::string UpdateAlertTemplateRequest::getAnnotations()const
{
	return annotations_;
}

void UpdateAlertTemplateRequest::setAnnotations(const std::string& annotations)
{
	annotations_ = annotations;
	setParameter("Annotations", annotations);
}

std::string UpdateAlertTemplateRequest::getRule()const
{
	return rule_;
}

void UpdateAlertTemplateRequest::setRule(const std::string& rule)
{
	rule_ = rule;
	setParameter("Rule", rule);
}

std::string UpdateAlertTemplateRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void UpdateAlertTemplateRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string UpdateAlertTemplateRequest::getType()const
{
	return type_;
}

void UpdateAlertTemplateRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UpdateAlertTemplateRequest::getMessage()const
{
	return message_;
}

void UpdateAlertTemplateRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string UpdateAlertTemplateRequest::getLabels()const
{
	return labels_;
}

void UpdateAlertTemplateRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

std::string UpdateAlertTemplateRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAlertTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateAlertTemplateRequest::getName()const
{
	return name_;
}

void UpdateAlertTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long UpdateAlertTemplateRequest::getId()const
{
	return id_;
}

void UpdateAlertTemplateRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateAlertTemplateRequest::getMatchExpressions()const
{
	return matchExpressions_;
}

void UpdateAlertTemplateRequest::setMatchExpressions(const std::string& matchExpressions)
{
	matchExpressions_ = matchExpressions;
	setParameter("MatchExpressions", matchExpressions);
}

bool UpdateAlertTemplateRequest::getStatus()const
{
	return status_;
}

void UpdateAlertTemplateRequest::setStatus(bool status)
{
	status_ = status;
	setParameter("Status", status ? "true" : "false");
}

