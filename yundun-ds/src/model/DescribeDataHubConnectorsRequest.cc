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

#include <alibabacloud/yundun-ds/model/DescribeDataHubConnectorsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDataHubConnectorsRequest;

DescribeDataHubConnectorsRequest::DescribeDataHubConnectorsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDataHubConnectors")
{}

DescribeDataHubConnectorsRequest::~DescribeDataHubConnectorsRequest()
{}

long DescribeDataHubConnectorsRequest::getTopicId()const
{
	return topicId_;
}

void DescribeDataHubConnectorsRequest::setTopicId(long topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", topicId);
}

std::string DescribeDataHubConnectorsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataHubConnectorsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeDataHubConnectorsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataHubConnectorsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

int DescribeDataHubConnectorsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataHubConnectorsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeDataHubConnectorsRequest::getDepartId()const
{
	return departId_;
}

void DescribeDataHubConnectorsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setCoreParameter("DepartId", departId);
}

int DescribeDataHubConnectorsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataHubConnectorsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeDataHubConnectorsRequest::getLang()const
{
	return lang_;
}

void DescribeDataHubConnectorsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

long DescribeDataHubConnectorsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeDataHubConnectorsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeDataHubConnectorsRequest::getKey()const
{
	return key_;
}

void DescribeDataHubConnectorsRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", std::to_string(key));
}

