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

#include <alibabacloud/cms/model/DescribeMonitoringAgentHostsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitoringAgentHostsResult::DescribeMonitoringAgentHostsResult() :
	ServiceResult()
{}

DescribeMonitoringAgentHostsResult::DescribeMonitoringAgentHostsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitoringAgentHostsResult::~DescribeMonitoringAgentHostsResult()
{}

void DescribeMonitoringAgentHostsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostsNode = value["Hosts"]["Host"];
	for (auto valueHostsHost : allHostsNode)
	{
		Host hostsObject;
		if(!valueHostsHost["SerialNumber"].isNull())
			hostsObject.serialNumber = valueHostsHost["SerialNumber"].asString();
		if(!valueHostsHost["NatIp"].isNull())
			hostsObject.natIp = valueHostsHost["NatIp"].asString();
		if(!valueHostsHost["HostName"].isNull())
			hostsObject.hostName = valueHostsHost["HostName"].asString();
		if(!valueHostsHost["AliUid"].isNull())
			hostsObject.aliUid = std::stol(valueHostsHost["AliUid"].asString());
		if(!valueHostsHost["NetworkType"].isNull())
			hostsObject.networkType = valueHostsHost["NetworkType"].asString();
		if(!valueHostsHost["InstanceId"].isNull())
			hostsObject.instanceId = valueHostsHost["InstanceId"].asString();
		if(!valueHostsHost["isAliyunHost"].isNull())
			hostsObject.isAliyunHost = valueHostsHost["isAliyunHost"].asString() == "true";
		if(!valueHostsHost["EipAddress"].isNull())
			hostsObject.eipAddress = valueHostsHost["EipAddress"].asString();
		if(!valueHostsHost["AgentVersion"].isNull())
			hostsObject.agentVersion = valueHostsHost["AgentVersion"].asString();
		if(!valueHostsHost["IpGroup"].isNull())
			hostsObject.ipGroup = valueHostsHost["IpGroup"].asString();
		if(!valueHostsHost["EipId"].isNull())
			hostsObject.eipId = valueHostsHost["EipId"].asString();
		if(!valueHostsHost["Region"].isNull())
			hostsObject.region = valueHostsHost["Region"].asString();
		if(!valueHostsHost["InstanceTypeFamily"].isNull())
			hostsObject.instanceTypeFamily = valueHostsHost["InstanceTypeFamily"].asString();
		if(!valueHostsHost["OperatingSystem"].isNull())
			hostsObject.operatingSystem = valueHostsHost["OperatingSystem"].asString();
		hosts_.push_back(hostsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageTotal"].isNull())
		pageTotal_ = std::stoi(value["PageTotal"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeMonitoringAgentHostsResult::Host> DescribeMonitoringAgentHostsResult::getHosts()const
{
	return hosts_;
}

std::string DescribeMonitoringAgentHostsResult::getMessage()const
{
	return message_;
}

int DescribeMonitoringAgentHostsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMonitoringAgentHostsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeMonitoringAgentHostsResult::getPageTotal()const
{
	return pageTotal_;
}

int DescribeMonitoringAgentHostsResult::getTotal()const
{
	return total_;
}

std::string DescribeMonitoringAgentHostsResult::getCode()const
{
	return code_;
}

bool DescribeMonitoringAgentHostsResult::getSuccess()const
{
	return success_;
}

