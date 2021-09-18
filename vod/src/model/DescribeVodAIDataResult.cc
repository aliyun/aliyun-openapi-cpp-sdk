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

#include <alibabacloud/vod/model/DescribeVodAIDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodAIDataResult::DescribeVodAIDataResult() :
	ServiceResult()
{}

DescribeVodAIDataResult::DescribeVodAIDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodAIDataResult::~DescribeVodAIDataResult()
{}

void DescribeVodAIDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAIDataNode = value["AIData"]["AIDataItem"];
	for (auto valueAIDataAIDataItem : allAIDataNode)
	{
		AIDataItem aIDataObject;
		if(!valueAIDataAIDataItem["TimeStamp"].isNull())
			aIDataObject.timeStamp = valueAIDataAIDataItem["TimeStamp"].asString();
		auto allDataNode = valueAIDataAIDataItem["Data"]["DataItem"];
		for (auto valueAIDataAIDataItemDataDataItem : allDataNode)
		{
			AIDataItem::DataItem dataObject;
			if(!valueAIDataAIDataItemDataDataItem["Name"].isNull())
				dataObject.name = valueAIDataAIDataItemDataDataItem["Name"].asString();
			if(!valueAIDataAIDataItemDataDataItem["Value"].isNull())
				dataObject.value = valueAIDataAIDataItemDataDataItem["Value"].asString();
			aIDataObject.data.push_back(dataObject);
		}
		aIData_.push_back(aIDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeVodAIDataResult::AIDataItem> DescribeVodAIDataResult::getAIData()const
{
	return aIData_;
}

std::string DescribeVodAIDataResult::getDataInterval()const
{
	return dataInterval_;
}

