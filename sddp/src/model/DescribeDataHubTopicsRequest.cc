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

#include <alibabacloud/sddp/model/DescribeDataHubTopicsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataHubTopicsRequest;

DescribeDataHubTopicsRequest::DescribeDataHubTopicsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeDataHubTopics")
{}

DescribeDataHubTopicsRequest::~DescribeDataHubTopicsRequest()
{}

std::string DescribeDataHubTopicsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataHubTopicsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeDataHubTopicsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataHubTopicsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

int DescribeDataHubTopicsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataHubTopicsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeDataHubTopicsRequest::getDepartId()const
{
	return departId_;
}

void DescribeDataHubTopicsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setCoreParameter("DepartId", std::to_string(departId));
}

int DescribeDataHubTopicsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataHubTopicsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeDataHubTopicsRequest::getLang()const
{
	return lang_;
}

void DescribeDataHubTopicsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeDataHubTopicsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeDataHubTopicsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string DescribeDataHubTopicsRequest::getKey()const
{
	return key_;
}

void DescribeDataHubTopicsRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

