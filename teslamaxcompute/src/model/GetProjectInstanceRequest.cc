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

#include <alibabacloud/teslamaxcompute/model/GetProjectInstanceRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetProjectInstanceRequest;

GetProjectInstanceRequest::GetProjectInstanceRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetProjectInstance")
{
	setMethod(HttpRequest::Method::Get);
}

GetProjectInstanceRequest::~GetProjectInstanceRequest()
{}

int GetProjectInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void GetProjectInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetProjectInstanceRequest::getProject()const
{
	return project_;
}

void GetProjectInstanceRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

int GetProjectInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void GetProjectInstanceRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string GetProjectInstanceRequest::getRegion()const
{
	return region_;
}

void GetProjectInstanceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetProjectInstanceRequest::getStatus()const
{
	return status_;
}

void GetProjectInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

