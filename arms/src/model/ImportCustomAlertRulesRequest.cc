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

#include <alibabacloud/arms/model/ImportCustomAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::ImportCustomAlertRulesRequest;

ImportCustomAlertRulesRequest::ImportCustomAlertRulesRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ImportCustomAlertRules")
{
	setMethod(HttpRequest::Method::Post);
}

ImportCustomAlertRulesRequest::~ImportCustomAlertRulesRequest()
{}

bool ImportCustomAlertRulesRequest::getIsAutoStart()const
{
	return isAutoStart_;
}

void ImportCustomAlertRulesRequest::setIsAutoStart(bool isAutoStart)
{
	isAutoStart_ = isAutoStart;
	setParameter("IsAutoStart", isAutoStart ? "true" : "false");
}

std::string ImportCustomAlertRulesRequest::getRegionId()const
{
	return regionId_;
}

void ImportCustomAlertRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ImportCustomAlertRulesRequest::getContactGroupIds()const
{
	return contactGroupIds_;
}

void ImportCustomAlertRulesRequest::setContactGroupIds(const std::string& contactGroupIds)
{
	contactGroupIds_ = contactGroupIds;
	setParameter("ContactGroupIds", contactGroupIds);
}

std::string ImportCustomAlertRulesRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void ImportCustomAlertRulesRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string ImportCustomAlertRulesRequest::getTemplageAlertConfig()const
{
	return templageAlertConfig_;
}

void ImportCustomAlertRulesRequest::setTemplageAlertConfig(const std::string& templageAlertConfig)
{
	templageAlertConfig_ = templageAlertConfig;
	setParameter("TemplageAlertConfig", templageAlertConfig);
}

