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

#include <alibabacloud/jarvis/model/DescribeRiskTrendRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeRiskTrendRequest;

DescribeRiskTrendRequest::DescribeRiskTrendRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeRiskTrend")
{}

DescribeRiskTrendRequest::~DescribeRiskTrendRequest()
{}

std::string DescribeRiskTrendRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRiskTrendRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeRiskTrendRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DescribeRiskTrendRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setCoreParameter("QueryProduct", std::to_string(queryProduct));
}

std::string DescribeRiskTrendRequest::getLang()const
{
	return lang_;
}

void DescribeRiskTrendRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeRiskTrendRequest::getPeroid()const
{
	return peroid_;
}

void DescribeRiskTrendRequest::setPeroid(const std::string& peroid)
{
	peroid_ = peroid;
	setCoreParameter("Peroid", std::to_string(peroid));
}

std::string DescribeRiskTrendRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeRiskTrendRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

std::string DescribeRiskTrendRequest::getQueryRegionId()const
{
	return queryRegionId_;
}

void DescribeRiskTrendRequest::setQueryRegionId(const std::string& queryRegionId)
{
	queryRegionId_ = queryRegionId;
	setCoreParameter("QueryRegionId", std::to_string(queryRegionId));
}

