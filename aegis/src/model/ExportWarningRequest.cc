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

#include <alibabacloud/aegis/model/ExportWarningRequest.h>

using AlibabaCloud::Aegis::Model::ExportWarningRequest;

ExportWarningRequest::ExportWarningRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ExportWarning")
{}

ExportWarningRequest::~ExportWarningRequest()
{}

std::string ExportWarningRequest::getStatusList()const
{
	return statusList_;
}

void ExportWarningRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string ExportWarningRequest::getRiskLevels()const
{
	return riskLevels_;
}

void ExportWarningRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setCoreParameter("RiskLevels", std::to_string(riskLevels));
}

std::string ExportWarningRequest::getExportType()const
{
	return exportType_;
}

void ExportWarningRequest::setExportType(const std::string& exportType)
{
	exportType_ = exportType;
	setCoreParameter("ExportType", std::to_string(exportType));
}

std::string ExportWarningRequest::getDealed()const
{
	return dealed_;
}

void ExportWarningRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

std::string ExportWarningRequest::getTypeNames()const
{
	return typeNames_;
}

void ExportWarningRequest::setTypeNames(const std::string& typeNames)
{
	typeNames_ = typeNames;
	setCoreParameter("TypeNames", std::to_string(typeNames));
}

int ExportWarningRequest::getIsSummaryExport()const
{
	return isSummaryExport_;
}

void ExportWarningRequest::setIsSummaryExport(int isSummaryExport)
{
	isSummaryExport_ = isSummaryExport;
	setCoreParameter("IsSummaryExport", isSummaryExport);
}

std::string ExportWarningRequest::getRiskName()const
{
	return riskName_;
}

void ExportWarningRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", std::to_string(riskName));
}

std::string ExportWarningRequest::getRiskIds()const
{
	return riskIds_;
}

void ExportWarningRequest::setRiskIds(const std::string& riskIds)
{
	riskIds_ = riskIds;
	setCoreParameter("RiskIds", std::to_string(riskIds));
}

std::string ExportWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long ExportWarningRequest::getStrategyId()const
{
	return strategyId_;
}

void ExportWarningRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

std::string ExportWarningRequest::getLang()const
{
	return lang_;
}

void ExportWarningRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string ExportWarningRequest::getTypeName()const
{
	return typeName_;
}

void ExportWarningRequest::setTypeName(const std::string& typeName)
{
	typeName_ = typeName;
	setCoreParameter("TypeName", std::to_string(typeName));
}

std::string ExportWarningRequest::getSubTypeNames()const
{
	return subTypeNames_;
}

void ExportWarningRequest::setSubTypeNames(const std::string& subTypeNames)
{
	subTypeNames_ = subTypeNames;
	setCoreParameter("SubTypeNames", std::to_string(subTypeNames));
}

std::string ExportWarningRequest::getUuids()const
{
	return uuids_;
}

void ExportWarningRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", std::to_string(uuids));
}

