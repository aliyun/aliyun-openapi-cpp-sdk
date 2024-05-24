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

#include <alibabacloud/live/model/DescribeMeterLiveInteractionDauResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeMeterLiveInteractionDauResult::DescribeMeterLiveInteractionDauResult() :
	ServiceResult()
{}

DescribeMeterLiveInteractionDauResult::DescribeMeterLiveInteractionDauResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMeterLiveInteractionDauResult::~DescribeMeterLiveInteractionDauResult()
{}

void DescribeMeterLiveInteractionDauResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Dau"].isNull())
			dataObject.dau = valueDataDataItem["Dau"].asString();
		if(!valueDataDataItem["Timestamp"].isNull())
			dataObject.timestamp = std::stol(valueDataDataItem["Timestamp"].asString());
		data_.push_back(dataObject);
	}
	if(!value["PeakDau"].isNull())
		peakDau_ = value["PeakDau"].asString();

}

std::vector<DescribeMeterLiveInteractionDauResult::DataItem> DescribeMeterLiveInteractionDauResult::getData()const
{
	return data_;
}

double DescribeMeterLiveInteractionDauResult::getPeakDau()const
{
	return peakDau_;
}

