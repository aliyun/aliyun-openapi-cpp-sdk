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

#include <alibabacloud/push/model/QueryUniqueDeviceStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryUniqueDeviceStatResult::QueryUniqueDeviceStatResult() :
	ServiceResult()
{}

QueryUniqueDeviceStatResult::QueryUniqueDeviceStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUniqueDeviceStatResult::~QueryUniqueDeviceStatResult()
{}

void QueryUniqueDeviceStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppDeviceStatsNode = value["AppDeviceStats"]["AppDeviceStat"];
	for (auto valueAppDeviceStatsAppDeviceStat : allAppDeviceStatsNode)
	{
		AppDeviceStat appDeviceStatsObject;
		if(!valueAppDeviceStatsAppDeviceStat["Count"].isNull())
			appDeviceStatsObject.count = std::stol(valueAppDeviceStatsAppDeviceStat["Count"].asString());
		if(!valueAppDeviceStatsAppDeviceStat["Time"].isNull())
			appDeviceStatsObject.time = valueAppDeviceStatsAppDeviceStat["Time"].asString();
		appDeviceStats_.push_back(appDeviceStatsObject);
	}

}

std::vector<QueryUniqueDeviceStatResult::AppDeviceStat> QueryUniqueDeviceStatResult::getAppDeviceStats()const
{
	return appDeviceStats_;
}

