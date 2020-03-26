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

#include <alibabacloud/yundun-ds/model/DescribeDepartCountsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDepartCountsRequest;

DescribeDepartCountsRequest::DescribeDepartCountsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDepartCounts")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDepartCountsRequest::~DescribeDepartCountsRequest()
{}

std::string DescribeDepartCountsRequest::getTypeCode()const
{
	return typeCode_;
}

void DescribeDepartCountsRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string DescribeDepartCountsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDepartCountsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDepartCountsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDepartCountsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDepartCountsRequest::getLang()const
{
	return lang_;
}

void DescribeDepartCountsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeDepartCountsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDepartCountsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeDepartCountsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDepartCountsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeDepartCountsRequest::getDepartName()const
{
	return departName_;
}

void DescribeDepartCountsRequest::setDepartName(const std::string& departName)
{
	departName_ = departName;
	setParameter("DepartName", departName);
}

