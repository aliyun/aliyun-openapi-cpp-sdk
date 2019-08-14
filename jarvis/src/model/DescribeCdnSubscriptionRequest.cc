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

#include <alibabacloud/jarvis/model/DescribeCdnSubscriptionRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeCdnSubscriptionRequest;

DescribeCdnSubscriptionRequest::DescribeCdnSubscriptionRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeCdnSubscription")
{}

DescribeCdnSubscriptionRequest::~DescribeCdnSubscriptionRequest()
{}

std::string DescribeCdnSubscriptionRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCdnSubscriptionRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeCdnSubscriptionRequest::getSubscriptionState()const
{
	return subscriptionState_;
}

void DescribeCdnSubscriptionRequest::setSubscriptionState(int subscriptionState)
{
	subscriptionState_ = subscriptionState;
	setCoreParameter("SubscriptionState", std::to_string(subscriptionState));
}

int DescribeCdnSubscriptionRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCdnSubscriptionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeCdnSubscriptionRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCdnSubscriptionRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeCdnSubscriptionRequest::getLang()const
{
	return lang_;
}

void DescribeCdnSubscriptionRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeCdnSubscriptionRequest::getVendorName()const
{
	return vendorName_;
}

void DescribeCdnSubscriptionRequest::setVendorName(const std::string& vendorName)
{
	vendorName_ = vendorName;
	setCoreParameter("VendorName", vendorName);
}

std::string DescribeCdnSubscriptionRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeCdnSubscriptionRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

