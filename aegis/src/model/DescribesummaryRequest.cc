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

#include <alibabacloud/aegis/model/DescribesummaryRequest.h>

using AlibabaCloud::Aegis::Model::DescribesummaryRequest;

DescribesummaryRequest::DescribesummaryRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "Describesummary")
{}

DescribesummaryRequest::~DescribesummaryRequest()
{}

std::string DescribesummaryRequest::getTypeNames()const
{
	return typeNames_;
}

void DescribesummaryRequest::setTypeNames(const std::string& typeNames)
{
	typeNames_ = typeNames;
	setCoreParameter("TypeNames", std::to_string(typeNames));
}

std::string DescribesummaryRequest::getRiskName()const
{
	return riskName_;
}

void DescribesummaryRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", std::to_string(riskName));
}

std::string DescribesummaryRequest::getStatusList()const
{
	return statusList_;
}

void DescribesummaryRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string DescribesummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribesummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribesummaryRequest::getRiskLevels()const
{
	return riskLevels_;
}

void DescribesummaryRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setCoreParameter("RiskLevels", std::to_string(riskLevels));
}

int DescribesummaryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribesummaryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribesummaryRequest::getDealed()const
{
	return dealed_;
}

void DescribesummaryRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

long DescribesummaryRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribesummaryRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

int DescribesummaryRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribesummaryRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribesummaryRequest::getSubTypeNames()const
{
	return subTypeNames_;
}

void DescribesummaryRequest::setSubTypeNames(const std::string& subTypeNames)
{
	subTypeNames_ = subTypeNames;
	setCoreParameter("SubTypeNames", std::to_string(subTypeNames));
}

std::string DescribesummaryRequest::getUuids()const
{
	return uuids_;
}

void DescribesummaryRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", std::to_string(uuids));
}

