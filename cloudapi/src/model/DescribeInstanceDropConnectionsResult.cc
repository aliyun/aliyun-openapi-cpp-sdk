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

#include <alibabacloud/cloudapi/model/DescribeInstanceDropConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstanceDropConnectionsResult::DescribeInstanceDropConnectionsResult() :
	ServiceResult()
{}

DescribeInstanceDropConnectionsResult::DescribeInstanceDropConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceDropConnectionsResult::~DescribeInstanceDropConnectionsResult()
{}

void DescribeInstanceDropConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceDropConnectionsNode = value["InstanceDropConnections"]["MonitorItem"];
	for (auto valueInstanceDropConnectionsMonitorItem : allInstanceDropConnectionsNode)
	{
		MonitorItem instanceDropConnectionsObject;
		if(!valueInstanceDropConnectionsMonitorItem["ItemValue"].isNull())
			instanceDropConnectionsObject.itemValue = valueInstanceDropConnectionsMonitorItem["ItemValue"].asString();
		if(!valueInstanceDropConnectionsMonitorItem["ItemTime"].isNull())
			instanceDropConnectionsObject.itemTime = valueInstanceDropConnectionsMonitorItem["ItemTime"].asString();
		instanceDropConnections_.push_back(instanceDropConnectionsObject);
	}

}

std::vector<DescribeInstanceDropConnectionsResult::MonitorItem> DescribeInstanceDropConnectionsResult::getInstanceDropConnections()const
{
	return instanceDropConnections_;
}

