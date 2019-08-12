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

#include <alibabacloud/emr/model/DescribeFlowJobRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowJobRequest;

DescribeFlowJobRequest::DescribeFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowJob")
{}

DescribeFlowJobRequest::~DescribeFlowJobRequest()
{}

std::string DescribeFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFlowJobRequest::getId()const
{
	return id_;
}

void DescribeFlowJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DescribeFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

