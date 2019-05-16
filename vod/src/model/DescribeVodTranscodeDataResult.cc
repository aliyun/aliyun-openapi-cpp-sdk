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

#include <alibabacloud/vod/model/DescribeVodTranscodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodTranscodeDataResult::DescribeVodTranscodeDataResult() :
	ServiceResult()
{}

DescribeVodTranscodeDataResult::DescribeVodTranscodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodTranscodeDataResult::~DescribeVodTranscodeDataResult()
{}

void DescribeVodTranscodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTranscodeData = value["TranscodeData"]["TranscodeDataItem"];
	for (auto value : allTranscodeData)
	{
		TranscodeDataItem transcodeDataObject;
		if(!value["TimeStamp"].isNull())
			transcodeDataObject.timeStamp = value["TimeStamp"].asString();
		auto allData = value["Data"]["DataItem"];
		for (auto value : allData)
		{
			TranscodeDataItem::DataItem dataObject;
			if(!value["Name"].isNull())
				dataObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				dataObject.value = value["Value"].asString();
			transcodeDataObject.data.push_back(dataObject);
		}
		transcodeData_.push_back(transcodeDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::vector<DescribeVodTranscodeDataResult::TranscodeDataItem> DescribeVodTranscodeDataResult::getTranscodeData()const
{
	return transcodeData_;
}

std::string DescribeVodTranscodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

