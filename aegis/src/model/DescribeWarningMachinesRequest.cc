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

#include <alibabacloud/aegis/model/DescribeWarningMachinesRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWarningMachinesRequest;

DescribeWarningMachinesRequest::DescribeWarningMachinesRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWarningMachines")
{}

DescribeWarningMachinesRequest::~DescribeWarningMachinesRequest()
{}

std::string DescribeWarningMachinesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWarningMachinesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWarningMachinesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWarningMachinesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeWarningMachinesRequest::getMachineName()const
{
	return machineName_;
}

void DescribeWarningMachinesRequest::setMachineName(const std::string& machineName)
{
	machineName_ = machineName;
	setCoreParameter("MachineName", machineName);
}

std::string DescribeWarningMachinesRequest::getLang()const
{
	return lang_;
}

void DescribeWarningMachinesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeWarningMachinesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWarningMachinesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeWarningMachinesRequest::getRiskId()const
{
	return riskId_;
}

void DescribeWarningMachinesRequest::setRiskId(long riskId)
{
	riskId_ = riskId;
	setCoreParameter("RiskId", std::to_string(riskId));
}

long DescribeWarningMachinesRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWarningMachinesRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string DescribeWarningMachinesRequest::getUuids()const
{
	return uuids_;
}

void DescribeWarningMachinesRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

