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

#include <alibabacloud/csb/model/FindOrderableListRequest.h>

using AlibabaCloud::CSB::Model::FindOrderableListRequest;

FindOrderableListRequest::FindOrderableListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindOrderableList")
{}

FindOrderableListRequest::~FindOrderableListRequest()
{}

std::string FindOrderableListRequest::getProjectName()const
{
	return projectName_;
}

void FindOrderableListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

long FindOrderableListRequest::getCsbId()const
{
	return csbId_;
}

void FindOrderableListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", std::to_string(csbId));
}

std::string FindOrderableListRequest::getRegionId()const
{
	return regionId_;
}

void FindOrderableListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string FindOrderableListRequest::getAlias()const
{
	return alias_;
}

void FindOrderableListRequest::setAlias(const std::string& alias)
{
	alias_ = alias;
	setCoreParameter("Alias", alias);
}

std::string FindOrderableListRequest::getServiceName()const
{
	return serviceName_;
}

void FindOrderableListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

int FindOrderableListRequest::getPageNum()const
{
	return pageNum_;
}

void FindOrderableListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

