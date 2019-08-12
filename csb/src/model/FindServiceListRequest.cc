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

#include <alibabacloud/csb/model/FindServiceListRequest.h>

using AlibabaCloud::CSB::Model::FindServiceListRequest;

FindServiceListRequest::FindServiceListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindServiceList")
{}

FindServiceListRequest::~FindServiceListRequest()
{}

std::string FindServiceListRequest::getProjectName()const
{
	return projectName_;
}

void FindServiceListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", std::to_string(projectName));
}

bool FindServiceListRequest::getShowDelService()const
{
	return showDelService_;
}

void FindServiceListRequest::setShowDelService(bool showDelService)
{
	showDelService_ = showDelService;
	setCoreParameter("ShowDelService", showDelService ? "true" : "false");
}

int FindServiceListRequest::getCasShowType()const
{
	return casShowType_;
}

void FindServiceListRequest::setCasShowType(int casShowType)
{
	casShowType_ = casShowType;
	setCoreParameter("CasShowType", casShowType);
}

long FindServiceListRequest::getCsbId()const
{
	return csbId_;
}

void FindServiceListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", csbId);
}

std::string FindServiceListRequest::getRegionId()const
{
	return regionId_;
}

void FindServiceListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string FindServiceListRequest::getAlias()const
{
	return alias_;
}

void FindServiceListRequest::setAlias(const std::string& alias)
{
	alias_ = alias;
	setCoreParameter("Alias", std::to_string(alias));
}

std::string FindServiceListRequest::getServiceName()const
{
	return serviceName_;
}

void FindServiceListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

int FindServiceListRequest::getPageNum()const
{
	return pageNum_;
}

void FindServiceListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

