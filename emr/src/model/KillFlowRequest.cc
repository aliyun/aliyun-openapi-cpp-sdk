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

#include <alibabacloud/emr/model/KillFlowRequest.h>

using AlibabaCloud::Emr::Model::KillFlowRequest;

KillFlowRequest::KillFlowRequest() :
	RpcServiceRequest("emr", "2016-04-08", "KillFlow")
{}

KillFlowRequest::~KillFlowRequest()
{}

std::string KillFlowRequest::getFlowInstanceId()const
{
	return flowInstanceId_;
}

void KillFlowRequest::setFlowInstanceId(const std::string& flowInstanceId)
{
	flowInstanceId_ = flowInstanceId;
	setCoreParameter("FlowInstanceId", flowInstanceId);
}

std::string KillFlowRequest::getRegionId()const
{
	return regionId_;
}

void KillFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string KillFlowRequest::getProjectId()const
{
	return projectId_;
}

void KillFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

