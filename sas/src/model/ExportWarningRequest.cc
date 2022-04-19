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

#include <alibabacloud/sas/model/ExportWarningRequest.h>

using AlibabaCloud::Sas::Model::ExportWarningRequest;

ExportWarningRequest::ExportWarningRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ExportWarning")
{
	setMethod(HttpRequest::Method::Post);
}

ExportWarningRequest::~ExportWarningRequest()
{}

int ExportWarningRequest::getIsCleartextPwd()const
{
	return isCleartextPwd_;
}

void ExportWarningRequest::setIsCleartextPwd(int isCleartextPwd)
{
	isCleartextPwd_ = isCleartextPwd;
	setParameter("IsCleartextPwd", std::to_string(isCleartextPwd));
}

std::string ExportWarningRequest::getStatusList()const
{
	return statusList_;
}

void ExportWarningRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string ExportWarningRequest::getRiskLevels()const
{
	return riskLevels_;
}

void ExportWarningRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setParameter("RiskLevels", riskLevels);
}

std::string ExportWarningRequest::getRiskName()const
{
	return riskName_;
}

void ExportWarningRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setParameter("RiskName", riskName);
}

std::string ExportWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ExportWarningRequest::getLang()const
{
	return lang_;
}

void ExportWarningRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ExportWarningRequest::getExportType()const
{
	return exportType_;
}

void ExportWarningRequest::setExportType(const std::string& exportType)
{
	exportType_ = exportType;
	setParameter("ExportType", exportType);
}

std::string ExportWarningRequest::getDealed()const
{
	return dealed_;
}

void ExportWarningRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

std::string ExportWarningRequest::getTypeNames()const
{
	return typeNames_;
}

void ExportWarningRequest::setTypeNames(const std::string& typeNames)
{
	typeNames_ = typeNames;
	setParameter("TypeNames", typeNames);
}

int ExportWarningRequest::getIsSummaryExport()const
{
	return isSummaryExport_;
}

void ExportWarningRequest::setIsSummaryExport(int isSummaryExport)
{
	isSummaryExport_ = isSummaryExport;
	setParameter("IsSummaryExport", std::to_string(isSummaryExport));
}

std::string ExportWarningRequest::getRiskIds()const
{
	return riskIds_;
}

void ExportWarningRequest::setRiskIds(const std::string& riskIds)
{
	riskIds_ = riskIds;
	setParameter("RiskIds", riskIds);
}

long ExportWarningRequest::getStrategyId()const
{
	return strategyId_;
}

void ExportWarningRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setParameter("StrategyId", std::to_string(strategyId));
}

std::string ExportWarningRequest::getTypeName()const
{
	return typeName_;
}

void ExportWarningRequest::setTypeName(const std::string& typeName)
{
	typeName_ = typeName;
	setParameter("TypeName", typeName);
}

std::string ExportWarningRequest::getSubTypeNames()const
{
	return subTypeNames_;
}

void ExportWarningRequest::setSubTypeNames(const std::string& subTypeNames)
{
	subTypeNames_ = subTypeNames;
	setParameter("SubTypeNames", subTypeNames);
}

std::string ExportWarningRequest::getUuids()const
{
	return uuids_;
}

void ExportWarningRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

