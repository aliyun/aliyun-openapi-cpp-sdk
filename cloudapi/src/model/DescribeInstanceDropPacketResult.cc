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

#include <alibabacloud/cloudapi/model/DescribeInstanceDropPacketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstanceDropPacketResult::DescribeInstanceDropPacketResult() :
	ServiceResult()
{}

DescribeInstanceDropPacketResult::DescribeInstanceDropPacketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceDropPacketResult::~DescribeInstanceDropPacketResult()
{}

void DescribeInstanceDropPacketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceDropPacketNode = value["InstanceDropPacket"]["MonitorItem"];
	for (auto valueInstanceDropPacketMonitorItem : allInstanceDropPacketNode)
	{
		MonitorItem instanceDropPacketObject;
		if(!valueInstanceDropPacketMonitorItem["ItemValue"].isNull())
			instanceDropPacketObject.itemValue = valueInstanceDropPacketMonitorItem["ItemValue"].asString();
		if(!valueInstanceDropPacketMonitorItem["ItemTime"].isNull())
			instanceDropPacketObject.itemTime = valueInstanceDropPacketMonitorItem["ItemTime"].asString();
		if(!valueInstanceDropPacketMonitorItem["Item"].isNull())
			instanceDropPacketObject.item = valueInstanceDropPacketMonitorItem["Item"].asString();
		instanceDropPacket_.push_back(instanceDropPacketObject);
	}

}

std::vector<DescribeInstanceDropPacketResult::MonitorItem> DescribeInstanceDropPacketResult::getInstanceDropPacket()const
{
	return instanceDropPacket_;
}

