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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDepartsRequest::~DescribeDepartsRequest()
{}

int DescribeDepartsRequest::getAccountType()const
{
	return accountType_;
}

void DescribeDepartsRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", std::to_string(accountType));
}

std::string DescribeDepartsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDepartsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDepartsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDepartsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDepartsRequest::getLang()const
{
	return lang_;
}

void DescribeDepartsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDepartsRequest::getKey()const
{
	return key_;
}

void DescribeDepartsRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

int DescribeDepartsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDepartsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeDepartsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDepartsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

