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

#include <alibabacloud/aegis/model/DescribeAssetListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAssetListRequest;

DescribeAssetListRequest::DescribeAssetListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAssetList")
{}

DescribeAssetListRequest::~DescribeAssetListRequest()
{}

int DescribeAssetListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAssetListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAssetListRequest::getFilterConditions()const
{
	return filterConditions_;
}

void DescribeAssetListRequest::setFilterConditions(const std::string& filterConditions)
{
	filterConditions_ = filterConditions;
	setCoreParameter("FilterConditions", filterConditions);
}

std::string DescribeAssetListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAssetListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeAssetListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAssetListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAssetListRequest::getFrom()const
{
	return from_;
}

void DescribeAssetListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeAssetListRequest::getLang()const
{
	return lang_;
}

void DescribeAssetListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

