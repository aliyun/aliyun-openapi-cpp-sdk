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

#include <alibabacloud/arms/model/ImportAppAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::ImportAppAlertRulesRequest;

ImportAppAlertRulesRequest::ImportAppAlertRulesRequest() :
	RpcServiceRequest("arms", "2019-02-19", "ImportAppAlertRules")
{}

ImportAppAlertRulesRequest::~ImportAppAlertRulesRequest()
{}

bool ImportAppAlertRulesRequest::getIsAutoStart()const
{
	return isAutoStart_;
}

void ImportAppAlertRulesRequest::setIsAutoStart(bool isAutoStart)
{
	isAutoStart_ = isAutoStart;
	setCoreParameter("IsAutoStart", isAutoStart);
}

std::string ImportAppAlertRulesRequest::getRegionId()const
{
	return regionId_;
}

void ImportAppAlertRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ImportAppAlertRulesRequest::getContactGroupIds()const
{
	return contactGroupIds_;
}

void ImportAppAlertRulesRequest::setContactGroupIds(const std::string& contactGroupIds)
{
	contactGroupIds_ = contactGroupIds;
	setCoreParameter("ContactGroupIds", contactGroupIds);
}

std::string ImportAppAlertRulesRequest::getPids()const
{
	return pids_;
}

void ImportAppAlertRulesRequest::setPids(const std::string& pids)
{
	pids_ = pids;
	setCoreParameter("Pids", pids);
}

std::string ImportAppAlertRulesRequest::getTemplateAlertId()const
{
	return templateAlertId_;
}

void ImportAppAlertRulesRequest::setTemplateAlertId(const std::string& templateAlertId)
{
	templateAlertId_ = templateAlertId;
	setCoreParameter("TemplateAlertId", templateAlertId);
}

