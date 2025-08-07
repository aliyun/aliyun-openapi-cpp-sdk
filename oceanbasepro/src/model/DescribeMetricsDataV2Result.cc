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

#include <alibabacloud/oceanbasepro/model/DescribeMetricsDataV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeMetricsDataV2Result::DescribeMetricsDataV2Result() :
	ServiceResult()
{}

DescribeMetricsDataV2Result::DescribeMetricsDataV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricsDataV2Result::~DescribeMetricsDataV2Result()
{}

void DescribeMetricsDataV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Labels"].isNull())
			dataObject.labels = valueDataDataItem["Labels"].asString();
		auto allData1Node = valueDataDataItem["Data"]["DataItem"];
		for (auto valueDataDataItemDataDataItem : allData1Node)
		{
			DataItem::DataItem2 data1Object;
			if(!valueDataDataItemDataDataItem["MetricValue"].isNull())
				data1Object.metricValue = valueDataDataItemDataDataItem["MetricValue"].asString();
			if(!valueDataDataItemDataDataItem["Timestamp"].isNull())
				data1Object.timestamp = std::stol(valueDataDataItemDataDataItem["Timestamp"].asString());
			dataObject.data1.push_back(data1Object);
		}
		data_.push_back(dataObject);
	}

}

std::vector<DescribeMetricsDataV2Result::DataItem> DescribeMetricsDataV2Result::getData()const
{
	return data_;
}

