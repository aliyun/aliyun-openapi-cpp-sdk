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

std::string DescribeWarningRequest::getStatusList()const
{
	return statusList_;
}

void DescribeWarningRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string DescribeWarningRequest::getRiskLevels()const
{
	return riskLevels_;
}

void DescribeWarningRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setCoreParameter("RiskLevels", riskLevels);
}

std::string DescribeWarningRequest::getRiskName()const
{
	return riskName_;
}

void DescribeWarningRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", riskName);
}

std::string DescribeWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWarningRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWarningRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeWarningRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWarningRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeWarningRequest::getDealed()const
{
	return dealed_;
}

void DescribeWarningRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string DescribeWarningRequest::getTypeNames()const
{
	return typeNames_;
}

void DescribeWarningRequest::setTypeNames(const std::string& typeNames)
{
	typeNames_ = typeNames;
	setCoreParameter("TypeNames", typeNames);
}

long DescribeWarningRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWarningRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string DescribeWarningRequest::getSubTypeNames()const
{
	return subTypeNames_;
}

void DescribeWarningRequest::setSubTypeNames(const std::string& subTypeNames)
{
	subTypeNames_ = subTypeNames;
	setCoreParameter("SubTypeNames", subTypeNames);
}

std::string DescribeWarningRequest::getUuids()const
{
	return uuids_;
}

void DescribeWarningRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

