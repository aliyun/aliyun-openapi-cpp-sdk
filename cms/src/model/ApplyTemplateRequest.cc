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

#include <alibabacloud/cms/model/ApplyTemplateRequest.h>

using AlibabaCloud::Cms::Model::ApplyTemplateRequest;

ApplyTemplateRequest::ApplyTemplateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ApplyTemplate")
{}

ApplyTemplateRequest::~ApplyTemplateRequest()
{}

long ApplyTemplateRequest::getEnableStartTime()const
{
	return enableStartTime_;
}

void ApplyTemplateRequest::setEnableStartTime(long enableStartTime)
{
	enableStartTime_ = enableStartTime;
	setParameter("EnableStartTime", std::to_string(enableStartTime));
}

std::string ApplyTemplateRequest::getApplyMode()const
{
	return applyMode_;
}

void ApplyTemplateRequest::setApplyMode(const std::string& applyMode)
{
	applyMode_ = applyMode;
	setParameter("ApplyMode", applyMode);
}

std::string ApplyTemplateRequest::getTemplateIds()const
{
	return templateIds_;
}

void ApplyTemplateRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setParameter("TemplateIds", templateIds);
}

long ApplyTemplateRequest::getEnableEndTime()const
{
	return enableEndTime_;
}

void ApplyTemplateRequest::setEnableEndTime(long enableEndTime)
{
	enableEndTime_ = enableEndTime;
	setParameter("EnableEndTime", std::to_string(enableEndTime));
}

long ApplyTemplateRequest::getGroupId()const
{
	return groupId_;
}

void ApplyTemplateRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

long ApplyTemplateRequest::getNotifyLevel()const
{
	return notifyLevel_;
}

void ApplyTemplateRequest::setNotifyLevel(long notifyLevel)
{
	notifyLevel_ = notifyLevel;
	setParameter("NotifyLevel", std::to_string(notifyLevel));
}

long ApplyTemplateRequest::getSilenceTime()const
{
	return silenceTime_;
}

void ApplyTemplateRequest::setSilenceTime(long silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", std::to_string(silenceTime));
}

