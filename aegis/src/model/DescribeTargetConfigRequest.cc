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

#include <alibabacloud/aegis/model/DescribeTargetConfigRequest.h>

using AlibabaCloud::Aegis::Model::DescribeTargetConfigRequest;

DescribeTargetConfigRequest::DescribeTargetConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeTargetConfig")
{}

DescribeTargetConfigRequest::~DescribeTargetConfigRequest()
{}

std::string DescribeTargetConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTargetConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeTargetConfigRequest::getType()const
{
	return type_;
}

void DescribeTargetConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeTargetConfigRequest::getUuid()const
{
	return uuid_;
}

void DescribeTargetConfigRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", std::to_string(uuid));
}

