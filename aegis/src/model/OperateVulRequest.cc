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

#include <alibabacloud/aegis/model/OperateVulRequest.h>

using AlibabaCloud::Aegis::Model::OperateVulRequest;

OperateVulRequest::OperateVulRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperateVul")
{}

OperateVulRequest::~OperateVulRequest()
{}

std::string OperateVulRequest::getReason()const
{
	return reason_;
}

void OperateVulRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

std::string OperateVulRequest::getType()const
{
	return type_;
}

void OperateVulRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string OperateVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperateVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string OperateVulRequest::getOperateType()const
{
	return operateType_;
}

void OperateVulRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setCoreParameter("OperateType", operateType);
}

std::string OperateVulRequest::getInfo()const
{
	return info_;
}

void OperateVulRequest::setInfo(const std::string& info)
{
	info_ = info;
	setCoreParameter("Info", info);
}

