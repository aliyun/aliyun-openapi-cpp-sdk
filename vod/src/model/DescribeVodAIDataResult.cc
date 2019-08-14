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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAIData = value["AIData"]["AIDataItem"];
	for (auto value : allAIData)
	{
		AIDataItem aIDataObject;
		if(!value["TimeStamp"].isNull())
			aIDataObject.timeStamp = value["TimeStamp"].asString();
		auto allData = value["Data"]["DataItem"];
		for (auto value : allData)
		{
			AIDataItem::DataItem dataObject;
			if(!value["Name"].isNull())
				dataObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				dataObject.value = value["Value"].asString();
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

