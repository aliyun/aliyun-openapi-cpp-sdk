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

#include <alibabacloud/csb/model/FindApproveServiceListRequest.h>

using AlibabaCloud::CSB::Model::FindApproveServiceListRequest;

FindApproveServiceListRequest::FindApproveServiceListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindApproveServiceList")
{}

FindApproveServiceListRequest::~FindApproveServiceListRequest()
{}

std::string FindApproveServiceListRequest::getProjectName()const
{
	return projectName_;
}

void FindApproveServiceListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", std::to_string(projectName));
}

std::string FindApproveServiceListRequest::getApproveLevel()const
{
	return approveLevel_;
}

void FindApproveServiceListRequest::setApproveLevel(const std::string& approveLevel)
{
	approveLevel_ = approveLevel;
	setCoreParameter("ApproveLevel", std::to_string(approveLevel));
}

bool FindApproveServiceListRequest::getShowDelService()const
{
	return showDelService_;
}

void FindApproveServiceListRequest::setShowDelService(bool showDelService)
{
	showDelService_ = showDelService;
	setCoreParameter("ShowDelService", showDelService ? "true" : "false");
}

long FindApproveServiceListRequest::getCsbId()const
{
	return csbId_;
}

void FindApproveServiceListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", csbId);
}

std::string FindApproveServiceListRequest::getRegionId()const
{
	return regionId_;
}

void FindApproveServiceListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string FindApproveServiceListRequest::getAlias()const
{
	return alias_;
}

void FindApproveServiceListRequest::setAlias(const std::string& alias)
{
	alias_ = alias;
	setCoreParameter("Alias", std::to_string(alias));
}

std::string FindApproveServiceListRequest::getServiceName()const
{
	return serviceName_;
}

void FindApproveServiceListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

