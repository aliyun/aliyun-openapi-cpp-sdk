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

#include <alibabacloud/aegis/model/DescribeWarningRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWarningRequest;

DescribeWarningRequest::DescribeWarningRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWarning")
{}

DescribeWarningRequest::~DescribeWarningRequest()
{}

std::string DescribeWarningRequest::getTypeNames()const
{
	return typeNames_;
}

void DescribeWarningRequest::setTypeNames(const std::string& typeNames)
{
	typeNames_ = typeNames;
	setCoreParameter("TypeNames", std::to_string(typeNames));
}

std::string DescribeWarningRequest::getRiskName()const
{
	return riskName_;
}

void DescribeWarningRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", std::to_string(riskName));
}

std::string DescribeWarningRequest::getStatusList()const
{
	return statusList_;
}

void DescribeWarningRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string DescribeWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeWarningRequest::getRiskLevels()const
{
	return riskLevels_;
}

void DescribeWarningRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setCoreParameter("RiskLevels", std::to_string(riskLevels));
}

int DescribeWarningRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWarningRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeWarningRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWarningRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

int DescribeWarningRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWarningRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeWarningRequest::getDealed()const
{
	return dealed_;
}

void DescribeWarningRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

std::string DescribeWarningRequest::getSubTypeNames()const
{
	return subTypeNames_;
}

void DescribeWarningRequest::setSubTypeNames(const std::string& subTypeNames)
{
	subTypeNames_ = subTypeNames;
	setCoreParameter("SubTypeNames", std::to_string(subTypeNames));
}

std::string DescribeWarningRequest::getUuids()const
{
	return uuids_;
}

void DescribeWarningRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", std::to_string(uuids));
}

