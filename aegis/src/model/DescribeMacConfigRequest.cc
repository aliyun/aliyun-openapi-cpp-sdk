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

#include <alibabacloud/aegis/model/DescribeMacConfigRequest.h>

using AlibabaCloud::Aegis::Model::DescribeMacConfigRequest;

DescribeMacConfigRequest::DescribeMacConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeMacConfig")
{}

DescribeMacConfigRequest::~DescribeMacConfigRequest()
{}

long DescribeMacConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMacConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMacConfigRequest::getTypes()const
{
	return types_;
}

void DescribeMacConfigRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

std::string DescribeMacConfigRequest::get_Extern()const
{
	return _extern_;
}

void DescribeMacConfigRequest::set_Extern(const std::string& _extern)
{
	_extern_ = _extern;
	setCoreParameter("_Extern", _extern);
}

std::string DescribeMacConfigRequest::getType()const
{
	return type_;
}

void DescribeMacConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeMacConfigRequest::getTarget()const
{
	return target_;
}

void DescribeMacConfigRequest::setTarget(const std::string& target)
{
	target_ = target;
	setCoreParameter("Target", target);
}

std::string DescribeMacConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeMacConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeMacConfigRequest::getConfig()const
{
	return config_;
}

void DescribeMacConfigRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

