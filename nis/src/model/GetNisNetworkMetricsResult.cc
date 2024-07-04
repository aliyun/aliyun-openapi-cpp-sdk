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

#include <alibabacloud/nis/model/GetNisNetworkMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetNisNetworkMetricsResult::GetNisNetworkMetricsResult() :
	ServiceResult()
{}

GetNisNetworkMetricsResult::GetNisNetworkMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNisNetworkMetricsResult::~GetNisNetworkMetricsResult()
{}

void GetNisNetworkMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Unit"].isNull())
		data_.unit = dataNode["Unit"].asString();
	auto allMetricsNode = dataNode["Metrics"]["MetricsItem"];
	for (auto dataNodeMetricsMetricsItem : allMetricsNode)
	{
		Data::MetricsItem metricsItemObject;
		if(!dataNodeMetricsMetricsItem["TimeStamp"].isNull())
			metricsItemObject.timeStamp = std::stol(dataNodeMetricsMetricsItem["TimeStamp"].asString());
		if(!dataNodeMetricsMetricsItem["Value"].isNull())
			metricsItemObject.value = dataNodeMetricsMetricsItem["Value"].asString();
		data_.metrics.push_back(metricsItemObject);
	}

}

GetNisNetworkMetricsResult::Data GetNisNetworkMetricsResult::getData()const
{
	return data_;
}

