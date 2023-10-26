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

#include <alibabacloud/cloudapi/model/DescribeInstancePacketsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstancePacketsResult::DescribeInstancePacketsResult() :
	ServiceResult()
{}

DescribeInstancePacketsResult::DescribeInstancePacketsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancePacketsResult::~DescribeInstancePacketsResult()
{}

void DescribeInstancePacketsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancePacketsNode = value["InstancePackets"]["MonitorItem"];
	for (auto valueInstancePacketsMonitorItem : allInstancePacketsNode)
	{
		MonitorItem instancePacketsObject;
		if(!valueInstancePacketsMonitorItem["ItemValue"].isNull())
			instancePacketsObject.itemValue = valueInstancePacketsMonitorItem["ItemValue"].asString();
		if(!valueInstancePacketsMonitorItem["ItemTime"].isNull())
			instancePacketsObject.itemTime = valueInstancePacketsMonitorItem["ItemTime"].asString();
		if(!valueInstancePacketsMonitorItem["Item"].isNull())
			instancePacketsObject.item = valueInstancePacketsMonitorItem["Item"].asString();
		instancePackets_.push_back(instancePacketsObject);
	}

}

std::vector<DescribeInstancePacketsResult::MonitorItem> DescribeInstancePacketsResult::getInstancePackets()const
{
	return instancePackets_;
}

