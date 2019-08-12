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
	setCoreParameter("EnableStartTime", enableStartTime);
}

std::string ApplyTemplateRequest::getApplyMode()const
{
	return applyMode_;
}

void ApplyTemplateRequest::setApplyMode(const std::string& applyMode)
{
	applyMode_ = applyMode;
	setCoreParameter("ApplyMode", std::to_string(applyMode));
}

std::string ApplyTemplateRequest::getTemplateIds()const
{
	return templateIds_;
}

void ApplyTemplateRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setCoreParameter("TemplateIds", std::to_string(templateIds));
}

long ApplyTemplateRequest::getEnableEndTime()const
{
	return enableEndTime_;
}

void ApplyTemplateRequest::setEnableEndTime(long enableEndTime)
{
	enableEndTime_ = enableEndTime;
	setCoreParameter("EnableEndTime", enableEndTime);
}

long ApplyTemplateRequest::getGroupId()const
{
	return groupId_;
}

void ApplyTemplateRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long ApplyTemplateRequest::getNotifyLevel()const
{
	return notifyLevel_;
}

void ApplyTemplateRequest::setNotifyLevel(long notifyLevel)
{
	notifyLevel_ = notifyLevel;
	setCoreParameter("NotifyLevel", notifyLevel);
}

long ApplyTemplateRequest::getSilenceTime()const
{
	return silenceTime_;
}

void ApplyTemplateRequest::setSilenceTime(long silenceTime)
{
	silenceTime_ = silenceTime;
	setCoreParameter("SilenceTime", silenceTime);
}

