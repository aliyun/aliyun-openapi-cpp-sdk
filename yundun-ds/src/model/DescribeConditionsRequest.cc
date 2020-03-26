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

#include <alibabacloud/yundun-ds/model/DescribeConditionsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeConditionsRequest;

DescribeConditionsRequest::DescribeConditionsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeConditions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeConditionsRequest::~DescribeConditionsRequest()
{}

std::string DescribeConditionsRequest::getProductCode()const
{
	return productCode_;
}

void DescribeConditionsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

int DescribeConditionsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeConditionsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeConditionsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeConditionsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeConditionsRequest::getSearchType()const
{
	return searchType_;
}

void DescribeConditionsRequest::setSearchType(int searchType)
{
	searchType_ = searchType;
	setParameter("SearchType", std::to_string(searchType));
}

std::string DescribeConditionsRequest::getLang()const
{
	return lang_;
}

void DescribeConditionsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeConditionsRequest::getQueryType()const
{
	return queryType_;
}

void DescribeConditionsRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", std::to_string(queryType));
}

