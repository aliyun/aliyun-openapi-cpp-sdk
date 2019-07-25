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

#include <alibabacloud/cloudapi/model/DescribeTrafficControlsByApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeTrafficControlsByApiResult::DescribeTrafficControlsByApiResult() :
	ServiceResult()
{}

DescribeTrafficControlsByApiResult::DescribeTrafficControlsByApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrafficControlsByApiResult::~DescribeTrafficControlsByApiResult()
{}

void DescribeTrafficControlsByApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTrafficControlItems = value["TrafficControlItems"]["TrafficControlItem"];
	for (auto value : allTrafficControlItems)
	{
		TrafficControlItem trafficControlItemsObject;
		if(!value["TrafficControlItemId"].isNull())
			trafficControlItemsObject.trafficControlItemId = value["TrafficControlItemId"].asString();
		if(!value["TrafficControlItemName"].isNull())
			trafficControlItemsObject.trafficControlItemName = value["TrafficControlItemName"].asString();
		if(!value["BoundTime"].isNull())
			trafficControlItemsObject.boundTime = value["BoundTime"].asString();
		trafficControlItems_.push_back(trafficControlItemsObject);
	}

}

std::vector<DescribeTrafficControlsByApiResult::TrafficControlItem> DescribeTrafficControlsByApiResult::getTrafficControlItems()const
{
	return trafficControlItems_;
}

