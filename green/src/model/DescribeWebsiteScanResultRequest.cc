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

#include <alibabacloud/green/model/DescribeWebsiteScanResultRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteScanResultRequest;

DescribeWebsiteScanResultRequest::DescribeWebsiteScanResultRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteScanResult")
{}

DescribeWebsiteScanResultRequest::~DescribeWebsiteScanResultRequest()
{}

int DescribeWebsiteScanResultRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeWebsiteScanResultRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

std::string DescribeWebsiteScanResultRequest::getSubServiceModule()const
{
	return subServiceModule_;
}

void DescribeWebsiteScanResultRequest::setSubServiceModule(const std::string& subServiceModule)
{
	subServiceModule_ = subServiceModule;
	setCoreParameter("SubServiceModule", subServiceModule);
}

std::string DescribeWebsiteScanResultRequest::getSiteUrl()const
{
	return siteUrl_;
}

void DescribeWebsiteScanResultRequest::setSiteUrl(const std::string& siteUrl)
{
	siteUrl_ = siteUrl;
	setCoreParameter("SiteUrl", siteUrl);
}

std::string DescribeWebsiteScanResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteScanResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeWebsiteScanResultRequest::getHandleStatus()const
{
	return handleStatus_;
}

void DescribeWebsiteScanResultRequest::setHandleStatus(const std::string& handleStatus)
{
	handleStatus_ = handleStatus;
	setCoreParameter("HandleStatus", handleStatus);
}

std::string DescribeWebsiteScanResultRequest::getDomain()const
{
	return domain_;
}

void DescribeWebsiteScanResultRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

int DescribeWebsiteScanResultRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWebsiteScanResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeWebsiteScanResultRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWebsiteScanResultRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeWebsiteScanResultRequest::getLabel()const
{
	return label_;
}

void DescribeWebsiteScanResultRequest::setLabel(const std::string& label)
{
	label_ = label;
	setCoreParameter("Label", label);
}

std::string DescribeWebsiteScanResultRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteScanResultRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

