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

#include <alibabacloud/sas/model/DescribeFieldStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeFieldStatisticsRequest;

DescribeFieldStatisticsRequest::DescribeFieldStatisticsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeFieldStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFieldStatisticsRequest::~DescribeFieldStatisticsRequest()
{}

std::string DescribeFieldStatisticsRequest::getMachineTypes()const
{
	return machineTypes_;
}

void DescribeFieldStatisticsRequest::setMachineTypes(const std::string& machineTypes)
{
	machineTypes_ = machineTypes;
	setParameter("MachineTypes", machineTypes);
}

std::string DescribeFieldStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeFieldStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

