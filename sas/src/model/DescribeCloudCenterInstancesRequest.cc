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

#include <alibabacloud/sas/model/DescribeCloudCenterInstancesRequest.h>

using AlibabaCloud::Sas::Model::DescribeCloudCenterInstancesRequest;

DescribeCloudCenterInstancesRequest::DescribeCloudCenterInstancesRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeCloudCenterInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCloudCenterInstancesRequest::~DescribeCloudCenterInstancesRequest()
{}

std::string DescribeCloudCenterInstancesRequest::getCriteria()const
{
	return criteria_;
}

void DescribeCloudCenterInstancesRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setCoreParameter("Criteria", criteria);
}

std::string DescribeCloudCenterInstancesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCloudCenterInstancesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

bool DescribeCloudCenterInstancesRequest::getNoPage()const
{
	return noPage_;
}

void DescribeCloudCenterInstancesRequest::setNoPage(bool noPage)
{
	noPage_ = noPage;
	setCoreParameter("NoPage", noPage ? "true" : "false");
}

int DescribeCloudCenterInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCloudCenterInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCloudCenterInstancesRequest::getLogicalExp()const
{
	return logicalExp_;
}

void DescribeCloudCenterInstancesRequest::setLogicalExp(const std::string& logicalExp)
{
	logicalExp_ = logicalExp;
	setCoreParameter("LogicalExp", logicalExp);
}

int DescribeCloudCenterInstancesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCloudCenterInstancesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeCloudCenterInstancesRequest::getMachineTypes()const
{
	return machineTypes_;
}

void DescribeCloudCenterInstancesRequest::setMachineTypes(const std::string& machineTypes)
{
	machineTypes_ = machineTypes;
	setCoreParameter("MachineTypes", machineTypes);
}

