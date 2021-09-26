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

#include <alibabacloud/vs/model/DescribeClusterDevicesRequest.h>

using AlibabaCloud::Vs::Model::DescribeClusterDevicesRequest;

DescribeClusterDevicesRequest::DescribeClusterDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeClusterDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterDevicesRequest::~DescribeClusterDevicesRequest()
{}

std::string DescribeClusterDevicesRequest::getDescription()const
{
	return description_;
}

void DescribeClusterDevicesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long DescribeClusterDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeClusterDevicesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeClusterDevicesRequest::getShowLog()const
{
	return showLog_;
}

void DescribeClusterDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeClusterDevicesRequest::getSpecification()const
{
	return specification_;
}

void DescribeClusterDevicesRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

std::string DescribeClusterDevicesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterDevicesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DescribeClusterDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeClusterDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeClusterDevicesRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeClusterDevicesRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

