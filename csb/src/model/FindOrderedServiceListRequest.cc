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

#include <alibabacloud/csb/model/FindOrderedServiceListRequest.h>

using AlibabaCloud::CSB::Model::FindOrderedServiceListRequest;

FindOrderedServiceListRequest::FindOrderedServiceListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindOrderedServiceList")
{
	setMethod(HttpRequest::Method::Get);
}

FindOrderedServiceListRequest::~FindOrderedServiceListRequest()
{}

std::string FindOrderedServiceListRequest::getProjectName()const
{
	return projectName_;
}

void FindOrderedServiceListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

bool FindOrderedServiceListRequest::getShowDelOrder()const
{
	return showDelOrder_;
}

void FindOrderedServiceListRequest::setShowDelOrder(bool showDelOrder)
{
	showDelOrder_ = showDelOrder;
	setParameter("ShowDelOrder", showDelOrder ? "true" : "false");
}

long FindOrderedServiceListRequest::getCsbId()const
{
	return csbId_;
}

void FindOrderedServiceListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

int FindOrderedServiceListRequest::getPageNum()const
{
	return pageNum_;
}

void FindOrderedServiceListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string FindOrderedServiceListRequest::getCredentialGroupName()const
{
	return credentialGroupName_;
}

void FindOrderedServiceListRequest::setCredentialGroupName(const std::string& credentialGroupName)
{
	credentialGroupName_ = credentialGroupName;
	setParameter("CredentialGroupName", credentialGroupName);
}

std::string FindOrderedServiceListRequest::getAccessKey()const
{
	return accessKey_;
}

void FindOrderedServiceListRequest::setAccessKey(const std::string& accessKey)
{
	accessKey_ = accessKey;
	setParameter("AccessKey", accessKey);
}

int FindOrderedServiceListRequest::getPageSize()const
{
	return pageSize_;
}

void FindOrderedServiceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string FindOrderedServiceListRequest::getServiceName()const
{
	return serviceName_;
}

void FindOrderedServiceListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

long FindOrderedServiceListRequest::getServiceId()const
{
	return serviceId_;
}

void FindOrderedServiceListRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", std::to_string(serviceId));
}

long FindOrderedServiceListRequest::getProjectId()const
{
	return projectId_;
}

void FindOrderedServiceListRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

