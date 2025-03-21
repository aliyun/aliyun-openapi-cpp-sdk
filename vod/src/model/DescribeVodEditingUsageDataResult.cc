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

#include <alibabacloud/vod/model/DescribeVodEditingUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodEditingUsageDataResult::DescribeVodEditingUsageDataResult() :
	ServiceResult()
{}

DescribeVodEditingUsageDataResult::DescribeVodEditingUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodEditingUsageDataResult::~DescribeVodEditingUsageDataResult()
{}

void DescribeVodEditingUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEditingDataNode = value["EditingData"]["DataModule"];
	for (auto valueEditingDataDataModule : allEditingDataNode)
	{
		DataModule editingDataObject;
		if(!valueEditingDataDataModule["Specification"].isNull())
			editingDataObject.specification = valueEditingDataDataModule["Specification"].asString();
		if(!valueEditingDataDataModule["Region"].isNull())
			editingDataObject.region = valueEditingDataDataModule["Region"].asString();
		if(!valueEditingDataDataModule["TimeStamp"].isNull())
			editingDataObject.timeStamp = valueEditingDataDataModule["TimeStamp"].asString();
		if(!valueEditingDataDataModule["Duration"].isNull())
			editingDataObject.duration = std::stol(valueEditingDataDataModule["Duration"].asString());
		editingData_.push_back(editingDataObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeVodEditingUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodEditingUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeVodEditingUsageDataResult::DataModule> DescribeVodEditingUsageDataResult::getEditingData()const
{
	return editingData_;
}

