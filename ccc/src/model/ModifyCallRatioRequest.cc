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

#include <alibabacloud/ccc/model/ModifyCallRatioRequest.h>

using AlibabaCloud::CCC::Model::ModifyCallRatioRequest;

ModifyCallRatioRequest::ModifyCallRatioRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyCallRatio")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyCallRatioRequest::~ModifyCallRatioRequest()
{}

std::string ModifyCallRatioRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyCallRatioRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyCallRatioRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifyCallRatioRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

std::string ModifyCallRatioRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ModifyCallRatioRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

int ModifyCallRatioRequest::getRatio()const
{
	return ratio_;
}

void ModifyCallRatioRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", std::to_string(ratio));
}

