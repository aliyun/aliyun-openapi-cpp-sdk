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

#include <alibabacloud/aegis/model/DescribeVulMachineListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulMachineListRequest;

DescribeVulMachineListRequest::DescribeVulMachineListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulMachineList")
{}

DescribeVulMachineListRequest::~DescribeVulMachineListRequest()
{}

long DescribeVulMachineListRequest::getStartTs()const
{
	return startTs_;
}

void DescribeVulMachineListRequest::setStartTs(long startTs)
{
	startTs_ = startTs;
	setCoreParameter("StartTs", std::to_string(startTs));
}

std::string DescribeVulMachineListRequest::getIncludeApp()const
{
	return includeApp_;
}

void DescribeVulMachineListRequest::setIncludeApp(const std::string& includeApp)
{
	includeApp_ = includeApp;
	setCoreParameter("IncludeApp", includeApp);
}

std::string DescribeVulMachineListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulMachineListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeVulMachineListRequest::getEndTs()const
{
	return endTs_;
}

void DescribeVulMachineListRequest::setEndTs(long endTs)
{
	endTs_ = endTs;
	setCoreParameter("EndTs", std::to_string(endTs));
}

std::string DescribeVulMachineListRequest::getFrom()const
{
	return from_;
}

void DescribeVulMachineListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeVulMachineListRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulMachineListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

