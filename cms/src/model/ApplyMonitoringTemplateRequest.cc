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

#include <alibabacloud/cms/model/ApplyMonitoringTemplateRequest.h>

using AlibabaCloud::Cms::Model::ApplyMonitoringTemplateRequest;

ApplyMonitoringTemplateRequest::ApplyMonitoringTemplateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ApplyMonitoringTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyMonitoringTemplateRequest::~ApplyMonitoringTemplateRequest()
{}

std::string ApplyMonitoringTemplateRequest::getApplyMode()const
{
	return applyMode_;
}

void ApplyMonitoringTemplateRequest::setApplyMode(const std::string& applyMode)
{
	applyMode_ = applyMode;
	setCoreParameter("ApplyMode", applyMode);
}

std::string ApplyMonitoringTemplateRequest::getWebhook()const
{
	return webhook_;
}

void ApplyMonitoringTemplateRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setCoreParameter("Webhook", webhook);
}

std::string ApplyMonitoringTemplateRequest::getTemplateIds()const
{
	return templateIds_;
}

void ApplyMonitoringTemplateRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setCoreParameter("TemplateIds", templateIds);
}

long ApplyMonitoringTemplateRequest::getEnableEndTime()const
{
	return enableEndTime_;
}

void ApplyMonitoringTemplateRequest::setEnableEndTime(long enableEndTime)
{
	enableEndTime_ = enableEndTime;
	setCoreParameter("EnableEndTime", std::to_string(enableEndTime));
}

long ApplyMonitoringTemplateRequest::getGroupId()const
{
	return groupId_;
}

void ApplyMonitoringTemplateRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

long ApplyMonitoringTemplateRequest::getNotifyLevel()const
{
	return notifyLevel_;
}

void ApplyMonitoringTemplateRequest::setNotifyLevel(long notifyLevel)
{
	notifyLevel_ = notifyLevel;
	setCoreParameter("NotifyLevel", std::to_string(notifyLevel));
}

long ApplyMonitoringTemplateRequest::getEnableStartTime()const
{
	return enableStartTime_;
}

void ApplyMonitoringTemplateRequest::setEnableStartTime(long enableStartTime)
{
	enableStartTime_ = enableStartTime;
	setCoreParameter("EnableStartTime", std::to_string(enableStartTime));
}

long ApplyMonitoringTemplateRequest::getSilenceTime()const
{
	return silenceTime_;
}

void ApplyMonitoringTemplateRequest::setSilenceTime(long silenceTime)
{
	silenceTime_ = silenceTime;
	setCoreParameter("SilenceTime", std::to_string(silenceTime));
}

