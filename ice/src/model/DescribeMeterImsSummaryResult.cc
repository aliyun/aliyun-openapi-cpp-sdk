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

#include <alibabacloud/ice/model/DescribeMeterImsSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribeMeterImsSummaryResult::DescribeMeterImsSummaryResult() :
	ServiceResult()
{}

DescribeMeterImsSummaryResult::DescribeMeterImsSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMeterImsSummaryResult::~DescribeMeterImsSummaryResult()
{}

void DescribeMeterImsSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["MpsTranscodeDuration"].isNull())
			dataObject.mpsTranscodeDuration = std::stol(valueDataDataItem["MpsTranscodeDuration"].asString());
		if(!valueDataDataItem["MpsTranscodeUHDDuration"].isNull())
			dataObject.mpsTranscodeUHDDuration = std::stol(valueDataDataItem["MpsTranscodeUHDDuration"].asString());
		if(!valueDataDataItem["LiveTranscodeDuration"].isNull())
			dataObject.liveTranscodeDuration = std::stol(valueDataDataItem["LiveTranscodeDuration"].asString());
		if(!valueDataDataItem["EditingDuration"].isNull())
			dataObject.editingDuration = valueDataDataItem["EditingDuration"].asString();
		if(!valueDataDataItem["MpsAiDuration"].isNull())
			dataObject.mpsAiDuration = std::stol(valueDataDataItem["MpsAiDuration"].asString());
		if(!valueDataDataItem["LiveRecordDuration"].isNull())
			dataObject.liveRecordDuration = valueDataDataItem["LiveRecordDuration"].asString();
		if(!valueDataDataItem["LiveEditDuration"].isNull())
			dataObject.liveEditDuration = valueDataDataItem["LiveEditDuration"].asString();
		if(!valueDataDataItem["LiveSnapshotCount"].isNull())
			dataObject.liveSnapshotCount = valueDataDataItem["LiveSnapshotCount"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeMeterImsSummaryResult::DataItem> DescribeMeterImsSummaryResult::getData()const
{
	return data_;
}

