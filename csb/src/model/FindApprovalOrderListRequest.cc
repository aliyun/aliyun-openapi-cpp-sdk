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

#include <alibabacloud/csb/model/FindApprovalOrderListRequest.h>

using AlibabaCloud::CSB::Model::FindApprovalOrderListRequest;

FindApprovalOrderListRequest::FindApprovalOrderListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindApprovalOrderList")
{}

FindApprovalOrderListRequest::~FindApprovalOrderListRequest()
{}

std::string FindApprovalOrderListRequest::getProjectName()const
{
	return projectName_;
}

void FindApprovalOrderListRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string FindApprovalOrderListRequest::getRegionId()const
{
	return regionId_;
}

void FindApprovalOrderListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long FindApprovalOrderListRequest::getCsbId()const
{
	return csbId_;
}

void FindApprovalOrderListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", std::to_string(csbId));
}

std::string FindApprovalOrderListRequest::getAlias()const
{
	return alias_;
}

void FindApprovalOrderListRequest::setAlias(const std::string& alias)
{
	alias_ = alias;
	setCoreParameter("Alias", alias);
}

std::string FindApprovalOrderListRequest::getServiceName()const
{
	return serviceName_;
}

void FindApprovalOrderListRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long FindApprovalOrderListRequest::getServiceId()const
{
	return serviceId_;
}

void FindApprovalOrderListRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setCoreParameter("ServiceId", std::to_string(serviceId));
}

int FindApprovalOrderListRequest::getPageNum()const
{
	return pageNum_;
}

void FindApprovalOrderListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

bool FindApprovalOrderListRequest::getOnlyPending()const
{
	return onlyPending_;
}

void FindApprovalOrderListRequest::setOnlyPending(bool onlyPending)
{
	onlyPending_ = onlyPending;
	setCoreParameter("OnlyPending", onlyPending ? "true" : "false");
}

