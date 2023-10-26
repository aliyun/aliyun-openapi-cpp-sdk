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

#include <alibabacloud/cloudapi/model/DescribeInstanceNewConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstanceNewConnectionsResult::DescribeInstanceNewConnectionsResult() :
	ServiceResult()
{}

DescribeInstanceNewConnectionsResult::DescribeInstanceNewConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceNewConnectionsResult::~DescribeInstanceNewConnectionsResult()
{}

void DescribeInstanceNewConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceNewConnectionsNode = value["InstanceNewConnections"]["MonitorItem"];
	for (auto valueInstanceNewConnectionsMonitorItem : allInstanceNewConnectionsNode)
	{
		MonitorItem instanceNewConnectionsObject;
		if(!valueInstanceNewConnectionsMonitorItem["ItemValue"].isNull())
			instanceNewConnectionsObject.itemValue = valueInstanceNewConnectionsMonitorItem["ItemValue"].asString();
		if(!valueInstanceNewConnectionsMonitorItem["ItemTime"].isNull())
			instanceNewConnectionsObject.itemTime = valueInstanceNewConnectionsMonitorItem["ItemTime"].asString();
		instanceNewConnections_.push_back(instanceNewConnectionsObject);
	}

}

std::vector<DescribeInstanceNewConnectionsResult::MonitorItem> DescribeInstanceNewConnectionsResult::getInstanceNewConnections()const
{
	return instanceNewConnections_;
}

