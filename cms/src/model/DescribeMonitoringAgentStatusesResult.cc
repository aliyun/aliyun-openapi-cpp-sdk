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

#include <alibabacloud/cms/model/DescribeMonitoringAgentStatusesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitoringAgentStatusesResult::DescribeMonitoringAgentStatusesResult() :
	ServiceResult()
{}

DescribeMonitoringAgentStatusesResult::DescribeMonitoringAgentStatusesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitoringAgentStatusesResult::~DescribeMonitoringAgentStatusesResult()
{}

void DescribeMonitoringAgentStatusesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeStatusListNode = value["NodeStatusList"]["NodeStatus"];
	for (auto valueNodeStatusListNodeStatus : allNodeStatusListNode)
	{
		NodeStatus nodeStatusListObject;
		if(!valueNodeStatusListNodeStatus["Status"].isNull())
			nodeStatusListObject.status = valueNodeStatusListNodeStatus["Status"].asString();
		if(!valueNodeStatusListNodeStatus["InstanceId"].isNull())
			nodeStatusListObject.instanceId = valueNodeStatusListNodeStatus["InstanceId"].asString();
		if(!valueNodeStatusListNodeStatus["AutoInstall"].isNull())
			nodeStatusListObject.autoInstall = valueNodeStatusListNodeStatus["AutoInstall"].asString() == "true";
		nodeStatusList_.push_back(nodeStatusListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMonitoringAgentStatusesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMonitoringAgentStatusesResult::NodeStatus> DescribeMonitoringAgentStatusesResult::getNodeStatusList()const
{
	return nodeStatusList_;
}

std::string DescribeMonitoringAgentStatusesResult::getCode()const
{
	return code_;
}

bool DescribeMonitoringAgentStatusesResult::getSuccess()const
{
	return success_;
}

