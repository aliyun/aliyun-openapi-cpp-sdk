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

#include <alibabacloud/ros/model/ValidateTemplateRequest.h>

using AlibabaCloud::ROS::Model::ValidateTemplateRequest;

ValidateTemplateRequest::ValidateTemplateRequest() :
	RpcServiceRequest("ros", "2019-09-10", "ValidateTemplate")
{}

ValidateTemplateRequest::~ValidateTemplateRequest()
{}

std::string ValidateTemplateRequest::getRegionId()const
{
	return regionId_;
}

void ValidateTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ValidateTemplateRequest::getTemplateBody()const
{
	return templateBody_;
}

void ValidateTemplateRequest::setTemplateBody(const std::string& templateBody)
{
	templateBody_ = templateBody;
	setCoreParameter("TemplateBody", templateBody);
}

std::string ValidateTemplateRequest::getTemplateURL()const
{
	return templateURL_;
}

void ValidateTemplateRequest::setTemplateURL(const std::string& templateURL)
{
	templateURL_ = templateURL;
	setCoreParameter("TemplateURL", templateURL);
}

