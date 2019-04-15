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

#include <alibabacloud/aegis/model/ModifyBatchIgnoreVulRequest.h>

using AlibabaCloud::Aegis::Model::ModifyBatchIgnoreVulRequest;

ModifyBatchIgnoreVulRequest::ModifyBatchIgnoreVulRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyBatchIgnoreVul")
{}

ModifyBatchIgnoreVulRequest::~ModifyBatchIgnoreVulRequest()
{}

std::string ModifyBatchIgnoreVulRequest::getReason()const
{
	return reason_;
}

void ModifyBatchIgnoreVulRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

std::string ModifyBatchIgnoreVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyBatchIgnoreVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyBatchIgnoreVulRequest::getInfo()const
{
	return info_;
}

void ModifyBatchIgnoreVulRequest::setInfo(const std::string& info)
{
	info_ = info;
	setCoreParameter("Info", info);
}

