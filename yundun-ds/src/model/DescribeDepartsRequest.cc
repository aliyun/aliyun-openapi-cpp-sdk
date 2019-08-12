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

#include <alibabacloud/yundun-ds/model/DescribeDepartsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDepartsRequest;

DescribeDepartsRequest::DescribeDepartsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDeparts")
{}

DescribeDepartsRequest::~DescribeDepartsRequest()
{}

std::string DescribeDepartsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDepartsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeDepartsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDepartsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

int DescribeDepartsRequest::getAccountType()const
{
	return accountType_;
}

void DescribeDepartsRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

int DescribeDepartsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDepartsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeDepartsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDepartsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeDepartsRequest::getLang()const
{
	return lang_;
}

void DescribeDepartsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDepartsRequest::getKey()const
{
	return key_;
}

void DescribeDepartsRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

