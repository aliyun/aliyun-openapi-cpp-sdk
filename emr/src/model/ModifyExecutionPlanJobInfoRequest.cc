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

#include <alibabacloud/emr/model/ModifyExecutionPlanJobInfoRequest.h>

using AlibabaCloud::Emr::Model::ModifyExecutionPlanJobInfoRequest;

ModifyExecutionPlanJobInfoRequest::ModifyExecutionPlanJobInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyExecutionPlanJobInfo")
{}

ModifyExecutionPlanJobInfoRequest::~ModifyExecutionPlanJobInfoRequest()
{}

long ModifyExecutionPlanJobInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExecutionPlanJobInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyExecutionPlanJobInfoRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExecutionPlanJobInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyExecutionPlanJobInfoRequest::getId()const
{
	return id_;
}

void ModifyExecutionPlanJobInfoRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::vector<std::string> ModifyExecutionPlanJobInfoRequest::getJobIdList()const
{
	return jobIdList_;
}

void ModifyExecutionPlanJobInfoRequest::setJobIdList(const std::vector<std::string>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int i = 0; i!= jobIdList.size(); i++)
		setCoreParameter("JobIdList."+ std::to_string(i), jobIdList.at(i));
}

std::string ModifyExecutionPlanJobInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyExecutionPlanJobInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

