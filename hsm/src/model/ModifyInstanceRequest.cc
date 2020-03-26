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

#include <alibabacloud/hsm/model/ModifyInstanceRequest.h>

using AlibabaCloud::Hsm::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "ModifyInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRequest::~ModifyInstanceRequest()
{}

std::string ModifyInstanceRequest::getRemark()const
{
	return remark_;
}

void ModifyInstanceRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string ModifyInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyInstanceRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyInstanceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceRequest::getLang()const
{
	return lang_;
}

void ModifyInstanceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

