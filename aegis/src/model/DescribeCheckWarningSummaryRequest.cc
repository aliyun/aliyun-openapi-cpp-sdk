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

#include <alibabacloud/aegis/model/DescribeCheckWarningSummaryRequest.h>

using AlibabaCloud::Aegis::Model::DescribeCheckWarningSummaryRequest;

DescribeCheckWarningSummaryRequest::DescribeCheckWarningSummaryRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeCheckWarningSummary")
{}

DescribeCheckWarningSummaryRequest::~DescribeCheckWarningSummaryRequest()
{}

std::string DescribeCheckWarningSummaryRequest::getRiskName()const
{
	return riskName_;
}

void DescribeCheckWarningSummaryRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", std::to_string(riskName));
}

std::string DescribeCheckWarningSummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCheckWarningSummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeCheckWarningSummaryRequest::getRiskStatus()const
{
	return riskStatus_;
}

void DescribeCheckWarningSummaryRequest::setRiskStatus(int riskStatus)
{
	riskStatus_ = riskStatus;
	setCoreParameter("RiskStatus", riskStatus);
}

int DescribeCheckWarningSummaryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCheckWarningSummaryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeCheckWarningSummaryRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeCheckWarningSummaryRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

int DescribeCheckWarningSummaryRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCheckWarningSummaryRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeCheckWarningSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeCheckWarningSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeCheckWarningSummaryRequest::getTypeName()const
{
	return typeName_;
}

void DescribeCheckWarningSummaryRequest::setTypeName(const std::string& typeName)
{
	typeName_ = typeName;
	setCoreParameter("TypeName", std::to_string(typeName));
}

std::string DescribeCheckWarningSummaryRequest::getStatus()const
{
	return status_;
}

void DescribeCheckWarningSummaryRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

std::string DescribeCheckWarningSummaryRequest::getUuids()const
{
	return uuids_;
}

void DescribeCheckWarningSummaryRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", std::to_string(uuids));
}

