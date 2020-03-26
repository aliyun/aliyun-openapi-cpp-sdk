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

#include <alibabacloud/jarvis/model/DescribeRiskListDetailRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeRiskListDetailRequest;

DescribeRiskListDetailRequest::DescribeRiskListDetailRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeRiskListDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRiskListDetailRequest::~DescribeRiskListDetailRequest()
{}

std::string DescribeRiskListDetailRequest::getRiskType()const
{
	return riskType_;
}

void DescribeRiskListDetailRequest::setRiskType(const std::string& riskType)
{
	riskType_ = riskType;
	setParameter("RiskType", riskType);
}

std::string DescribeRiskListDetailRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeRiskListDetailRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeRiskListDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRiskListDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeRiskListDetailRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRiskListDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRiskListDetailRequest::getLang()const
{
	return lang_;
}

void DescribeRiskListDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DescribeRiskListDetailRequest::getSrcUid()const
{
	return srcUid_;
}

void DescribeRiskListDetailRequest::setSrcUid(long srcUid)
{
	srcUid_ = srcUid;
	setParameter("SrcUid", std::to_string(srcUid));
}

int DescribeRiskListDetailRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeRiskListDetailRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeRiskListDetailRequest::getRiskDescribe()const
{
	return riskDescribe_;
}

void DescribeRiskListDetailRequest::setRiskDescribe(const std::string& riskDescribe)
{
	riskDescribe_ = riskDescribe;
	setParameter("RiskDescribe", riskDescribe);
}

std::string DescribeRiskListDetailRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DescribeRiskListDetailRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setParameter("QueryProduct", queryProduct);
}

std::string DescribeRiskListDetailRequest::getQueryRegionId()const
{
	return queryRegionId_;
}

void DescribeRiskListDetailRequest::setQueryRegionId(const std::string& queryRegionId)
{
	queryRegionId_ = queryRegionId;
	setParameter("QueryRegionId", queryRegionId);
}

std::string DescribeRiskListDetailRequest::getStatus()const
{
	return status_;
}

void DescribeRiskListDetailRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

