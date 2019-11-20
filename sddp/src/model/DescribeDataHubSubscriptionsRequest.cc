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

#include <alibabacloud/sddp/model/DescribeDataHubSubscriptionsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataHubSubscriptionsRequest;

DescribeDataHubSubscriptionsRequest::DescribeDataHubSubscriptionsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeDataHubSubscriptions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataHubSubscriptionsRequest::~DescribeDataHubSubscriptionsRequest()
{}

long DescribeDataHubSubscriptionsRequest::getTopicId()const
{
	return topicId_;
}

void DescribeDataHubSubscriptionsRequest::setTopicId(long topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", std::to_string(topicId));
}

std::string DescribeDataHubSubscriptionsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataHubSubscriptionsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeDataHubSubscriptionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataHubSubscriptionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDataHubSubscriptionsRequest::getLang()const
{
	return lang_;
}

void DescribeDataHubSubscriptionsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeDataHubSubscriptionsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeDataHubSubscriptionsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string DescribeDataHubSubscriptionsRequest::getKey()const
{
	return key_;
}

void DescribeDataHubSubscriptionsRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

int DescribeDataHubSubscriptionsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataHubSubscriptionsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

int DescribeDataHubSubscriptionsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataHubSubscriptionsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeDataHubSubscriptionsRequest::getDepartId()const
{
	return departId_;
}

void DescribeDataHubSubscriptionsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setCoreParameter("DepartId", std::to_string(departId));
}

