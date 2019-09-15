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

#include <alibabacloud/aegis/model/DescribeMachineConfigRequest.h>

using AlibabaCloud::Aegis::Model::DescribeMachineConfigRequest;

DescribeMachineConfigRequest::DescribeMachineConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeMachineConfig")
{}

DescribeMachineConfigRequest::~DescribeMachineConfigRequest()
{}

long DescribeMachineConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMachineConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMachineConfigRequest::getTypes()const
{
	return types_;
}

void DescribeMachineConfigRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

int DescribeMachineConfigRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeMachineConfigRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeMachineConfigRequest::getType()const
{
	return type_;
}

void DescribeMachineConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeMachineConfigRequest::getTarget()const
{
	return target_;
}

void DescribeMachineConfigRequest::setTarget(const std::string& target)
{
	target_ = target;
	setCoreParameter("Target", target);
}

std::string DescribeMachineConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeMachineConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeMachineConfigRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMachineConfigRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMachineConfigRequest::getLang()const
{
	return lang_;
}

void DescribeMachineConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeMachineConfigRequest::getConfig()const
{
	return config_;
}

void DescribeMachineConfigRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

