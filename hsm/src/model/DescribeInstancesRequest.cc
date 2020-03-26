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

#include <alibabacloud/hsm/model/DescribeInstancesRequest.h>

using AlibabaCloud::Hsm::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "DescribeInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

std::string DescribeInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInstancesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeInstancesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesRequest::getLang()const
{
	return lang_;
}

void DescribeInstancesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeInstancesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeInstancesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstancesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int DescribeInstancesRequest::getHsmStatus()const
{
	return hsmStatus_;
}

void DescribeInstancesRequest::setHsmStatus(int hsmStatus)
{
	hsmStatus_ = hsmStatus;
	setParameter("HsmStatus", std::to_string(hsmStatus));
}

