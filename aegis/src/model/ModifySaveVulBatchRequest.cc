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

#include <alibabacloud/aegis/model/ModifySaveVulBatchRequest.h>

using AlibabaCloud::Aegis::Model::ModifySaveVulBatchRequest;

ModifySaveVulBatchRequest::ModifySaveVulBatchRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifySaveVulBatch")
{}

ModifySaveVulBatchRequest::~ModifySaveVulBatchRequest()
{}

std::string ModifySaveVulBatchRequest::getStatusList()const
{
	return statusList_;
}

void ModifySaveVulBatchRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string ModifySaveVulBatchRequest::getRemark()const
{
	return remark_;
}

void ModifySaveVulBatchRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string ModifySaveVulBatchRequest::getType()const
{
	return type_;
}

void ModifySaveVulBatchRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifySaveVulBatchRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifySaveVulBatchRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifySaveVulBatchRequest::getLevel()const
{
	return level_;
}

void ModifySaveVulBatchRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string ModifySaveVulBatchRequest::getResource()const
{
	return resource_;
}

void ModifySaveVulBatchRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string ModifySaveVulBatchRequest::getDealed()const
{
	return dealed_;
}

void ModifySaveVulBatchRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string ModifySaveVulBatchRequest::getBatchName()const
{
	return batchName_;
}

void ModifySaveVulBatchRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setCoreParameter("BatchName", batchName);
}

std::string ModifySaveVulBatchRequest::getAliasName()const
{
	return aliasName_;
}

void ModifySaveVulBatchRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

std::string ModifySaveVulBatchRequest::getName()const
{
	return name_;
}

void ModifySaveVulBatchRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifySaveVulBatchRequest::getNecessity()const
{
	return necessity_;
}

void ModifySaveVulBatchRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setCoreParameter("Necessity", necessity);
}

std::string ModifySaveVulBatchRequest::getUuids()const
{
	return uuids_;
}

void ModifySaveVulBatchRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

