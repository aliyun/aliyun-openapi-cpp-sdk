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

#include <alibabacloud/green/model/DescribeCloudMonitorServicesRequest.h>

using AlibabaCloud::Green::Model::DescribeCloudMonitorServicesRequest;

DescribeCloudMonitorServicesRequest::DescribeCloudMonitorServicesRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeCloudMonitorServices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCloudMonitorServicesRequest::~DescribeCloudMonitorServicesRequest()
{}

std::string DescribeCloudMonitorServicesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCloudMonitorServicesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCloudMonitorServicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCloudMonitorServicesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeCloudMonitorServicesRequest::getPage()const
{
	return page_;
}

void DescribeCloudMonitorServicesRequest::setPage(const std::string& page)
{
	page_ = page;
	setParameter("Page", page);
}

