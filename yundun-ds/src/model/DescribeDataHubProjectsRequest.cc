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

#include <alibabacloud/yundun-ds/model/DescribeDataHubProjectsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDataHubProjectsRequest;

DescribeDataHubProjectsRequest::DescribeDataHubProjectsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDataHubProjects")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataHubProjectsRequest::~DescribeDataHubProjectsRequest()
{}

std::string DescribeDataHubProjectsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataHubProjectsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDataHubProjectsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataHubProjectsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDataHubProjectsRequest::getLang()const
{
	return lang_;
}

void DescribeDataHubProjectsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDataHubProjectsRequest::getKey()const
{
	return key_;
}

void DescribeDataHubProjectsRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

int DescribeDataHubProjectsRequest::getQueryType()const
{
	return queryType_;
}

void DescribeDataHubProjectsRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", std::to_string(queryType));
}

int DescribeDataHubProjectsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataHubProjectsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeDataHubProjectsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataHubProjectsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeDataHubProjectsRequest::getDepartId()const
{
	return departId_;
}

void DescribeDataHubProjectsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setParameter("DepartId", std::to_string(departId));
}

