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

#include <alibabacloud/cloudapi/model/DescribeGroupTrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeGroupTrafficResult::DescribeGroupTrafficResult() :
	ServiceResult()
{}

DescribeGroupTrafficResult::DescribeGroupTrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupTrafficResult::~DescribeGroupTrafficResult()
{}

void DescribeGroupTrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficPerSecondNode = value["TrafficPerSecond"]["MonitorItem"];
	for (auto valueTrafficPerSecondMonitorItem : allTrafficPerSecondNode)
	{
		MonitorItem trafficPerSecondObject;
		if(!valueTrafficPerSecondMonitorItem["ItemValue"].isNull())
			trafficPerSecondObject.itemValue = valueTrafficPerSecondMonitorItem["ItemValue"].asString();
		if(!valueTrafficPerSecondMonitorItem["ItemTime"].isNull())
			trafficPerSecondObject.itemTime = valueTrafficPerSecondMonitorItem["ItemTime"].asString();
		if(!valueTrafficPerSecondMonitorItem["Item"].isNull())
			trafficPerSecondObject.item = valueTrafficPerSecondMonitorItem["Item"].asString();
		trafficPerSecond_.push_back(trafficPerSecondObject);
	}

}

std::vector<DescribeGroupTrafficResult::MonitorItem> DescribeGroupTrafficResult::getTrafficPerSecond()const
{
	return trafficPerSecond_;
}

