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

#include <alibabacloud/csb/model/FindOrderedListRequest.h>

using AlibabaCloud::CSB::Model::FindOrderedListRequest;

FindOrderedListRequest::FindOrderedListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindOrderedList")
{
	setMethod(HttpRequest::Method::Get);
}

FindOrderedListRequest::~FindOrderedListRequest()
{}

std::string FindOrderedListRequest::getProjectName()const
{
	return projectName_;
}

void FindOrderedListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

bool FindOrderedListRequest::getShowDelOrder()const
{
	return showDelOrder_;
}

void FindOrderedListRequest::setShowDelOrder(bool showDelOrder)
{
	showDelOrder_ = showDelOrder;
	setParameter("ShowDelOrder", showDelOrder ? "true" : "false");
}

long FindOrderedListRequest::getCsbId()const
{
	return csbId_;
}

void FindOrderedListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

int FindOrderedListRequest::getPageNum()const
{
	return pageNum_;
}

void FindOrderedListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string FindOrderedListRequest::getCredentialGroupName()const
{
	return credentialGroupName_;
}

void FindOrderedListRequest::setCredentialGroupName(const std::string& credentialGroupName)
{
	credentialGroupName_ = credentialGroupName;
	setParameter("CredentialGroupName", credentialGroupName);
}

std::string FindOrderedListRequest::getAlias()const
{
	return alias_;
}

void FindOrderedListRequest::setAlias(const std::string& alias)
{
	alias_ = alias;
	setParameter("Alias", alias);
}

std::string FindOrderedListRequest::getServiceName()const
{
	return serviceName_;
}

void FindOrderedListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

long FindOrderedListRequest::getServiceId()const
{
	return serviceId_;
}

void FindOrderedListRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", std::to_string(serviceId));
}

std::string FindOrderedListRequest::getStatus()const
{
	return status_;
}

void FindOrderedListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

