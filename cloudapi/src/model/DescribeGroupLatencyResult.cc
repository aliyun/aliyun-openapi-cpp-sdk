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

#include <alibabacloud/cloudapi/model/DescribeGroupLatencyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeGroupLatencyResult::DescribeGroupLatencyResult() :
	ServiceResult()
{}

DescribeGroupLatencyResult::DescribeGroupLatencyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupLatencyResult::~DescribeGroupLatencyResult()
{}

void DescribeGroupLatencyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLatencyPacketNode = value["LatencyPacket"]["MonitorItem"];
	for (auto valueLatencyPacketMonitorItem : allLatencyPacketNode)
	{
		MonitorItem latencyPacketObject;
		if(!valueLatencyPacketMonitorItem["ItemValue"].isNull())
			latencyPacketObject.itemValue = valueLatencyPacketMonitorItem["ItemValue"].asString();
		if(!valueLatencyPacketMonitorItem["ItemTime"].isNull())
			latencyPacketObject.itemTime = valueLatencyPacketMonitorItem["ItemTime"].asString();
		if(!valueLatencyPacketMonitorItem["Item"].isNull())
			latencyPacketObject.item = valueLatencyPacketMonitorItem["Item"].asString();
		latencyPacket_.push_back(latencyPacketObject);
	}

}

std::vector<DescribeGroupLatencyResult::MonitorItem> DescribeGroupLatencyResult::getLatencyPacket()const
{
	return latencyPacket_;
}

