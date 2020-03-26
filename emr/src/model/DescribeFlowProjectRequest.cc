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

#include <alibabacloud/emr/model/DescribeFlowProjectRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowProjectRequest;

DescribeFlowProjectRequest::DescribeFlowProjectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowProject")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowProjectRequest::~DescribeFlowProjectRequest()
{}

std::string DescribeFlowProjectRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeFlowProjectRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

