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

#include <alibabacloud/sas/model/DescribeCriteriaRequest.h>

using AlibabaCloud::Sas::Model::DescribeCriteriaRequest;

DescribeCriteriaRequest::DescribeCriteriaRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeCriteria")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCriteriaRequest::~DescribeCriteriaRequest()
{}

std::string DescribeCriteriaRequest::getMachineTypes()const
{
	return machineTypes_;
}

void DescribeCriteriaRequest::setMachineTypes(const std::string& machineTypes)
{
	machineTypes_ = machineTypes;
	setParameter("MachineTypes", machineTypes);
}

std::string DescribeCriteriaRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCriteriaRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCriteriaRequest::getValue()const
{
	return value_;
}

void DescribeCriteriaRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

