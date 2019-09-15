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

#include <alibabacloud/aegis/model/ExportVulRequest.h>

using AlibabaCloud::Aegis::Model::ExportVulRequest;

ExportVulRequest::ExportVulRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ExportVul")
{}

ExportVulRequest::~ExportVulRequest()
{}

std::string ExportVulRequest::getStatusList()const
{
	return statusList_;
}

void ExportVulRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string ExportVulRequest::getRemark()const
{
	return remark_;
}

void ExportVulRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string ExportVulRequest::getType()const
{
	return type_;
}

void ExportVulRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ExportVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ExportVulRequest::getLang()const
{
	return lang_;
}

void ExportVulRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ExportVulRequest::getLevel()const
{
	return level_;
}

void ExportVulRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string ExportVulRequest::getResource()const
{
	return resource_;
}

void ExportVulRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string ExportVulRequest::getDealed()const
{
	return dealed_;
}

void ExportVulRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string ExportVulRequest::getBatchName()const
{
	return batchName_;
}

void ExportVulRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setCoreParameter("BatchName", batchName);
}

std::string ExportVulRequest::getAliasName()const
{
	return aliasName_;
}

void ExportVulRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

std::string ExportVulRequest::getName()const
{
	return name_;
}

void ExportVulRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ExportVulRequest::getNecessity()const
{
	return necessity_;
}

void ExportVulRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setCoreParameter("Necessity", necessity);
}

std::string ExportVulRequest::getUuids()const
{
	return uuids_;
}

void ExportVulRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

