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

#include <alibabacloud/imm/model/GetOfficeConversionTaskRequest.h>

using AlibabaCloud::Imm::Model::GetOfficeConversionTaskRequest;

GetOfficeConversionTaskRequest::GetOfficeConversionTaskRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetOfficeConversionTask")
{}

GetOfficeConversionTaskRequest::~GetOfficeConversionTaskRequest()
{}

std::string GetOfficeConversionTaskRequest::getRegionId()const
{
	return regionId_;
}

void GetOfficeConversionTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetOfficeConversionTaskRequest::getProject()const
{
	return project_;
}

void GetOfficeConversionTaskRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetOfficeConversionTaskRequest::getTaskId()const
{
	return taskId_;
}

void GetOfficeConversionTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string GetOfficeConversionTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOfficeConversionTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

