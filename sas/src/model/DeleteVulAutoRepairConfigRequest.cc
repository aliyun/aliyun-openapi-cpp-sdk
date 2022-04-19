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

#include <alibabacloud/sas/model/DeleteVulAutoRepairConfigRequest.h>

using AlibabaCloud::Sas::Model::DeleteVulAutoRepairConfigRequest;

DeleteVulAutoRepairConfigRequest::DeleteVulAutoRepairConfigRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DeleteVulAutoRepairConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVulAutoRepairConfigRequest::~DeleteVulAutoRepairConfigRequest()
{}

std::string DeleteVulAutoRepairConfigRequest::getType()const
{
	return type_;
}

void DeleteVulAutoRepairConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DeleteVulAutoRepairConfigRequest::getAliasName()const
{
	return aliasName_;
}

void DeleteVulAutoRepairConfigRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string DeleteVulAutoRepairConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteVulAutoRepairConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

