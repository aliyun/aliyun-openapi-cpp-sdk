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

#include <alibabacloud/cloudapi/model/DescribeInstanceTrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstanceTrafficResult::DescribeInstanceTrafficResult() :
	ServiceResult()
{}

DescribeInstanceTrafficResult::DescribeInstanceTrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceTrafficResult::~DescribeInstanceTrafficResult()
{}

void DescribeInstanceTrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTrafficNode = value["InstanceTraffic"]["MonitorItem"];
	for (auto valueInstanceTrafficMonitorItem : allInstanceTrafficNode)
	{
		MonitorItem instanceTrafficObject;
		if(!valueInstanceTrafficMonitorItem["ItemValue"].isNull())
			instanceTrafficObject.itemValue = valueInstanceTrafficMonitorItem["ItemValue"].asString();
		if(!valueInstanceTrafficMonitorItem["ItemTime"].isNull())
			instanceTrafficObject.itemTime = valueInstanceTrafficMonitorItem["ItemTime"].asString();
		if(!valueInstanceTrafficMonitorItem["Item"].isNull())
			instanceTrafficObject.item = valueInstanceTrafficMonitorItem["Item"].asString();
		instanceTraffic_.push_back(instanceTrafficObject);
	}

}

std::vector<DescribeInstanceTrafficResult::MonitorItem> DescribeInstanceTrafficResult::getInstanceTraffic()const
{
	return instanceTraffic_;
}

