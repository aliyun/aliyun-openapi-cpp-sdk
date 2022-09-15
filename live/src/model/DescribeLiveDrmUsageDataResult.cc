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

#include <alibabacloud/live/model/DescribeLiveDrmUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDrmUsageDataResult::DescribeLiveDrmUsageDataResult() :
	ServiceResult()
{}

DescribeLiveDrmUsageDataResult::DescribeLiveDrmUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDrmUsageDataResult::~DescribeLiveDrmUsageDataResult()
{}

void DescribeLiveDrmUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDrmUsageDataNode = value["DrmUsageData"]["DataModule"];
	for (auto valueDrmUsageDataDataModule : allDrmUsageDataNode)
	{
		DataModule drmUsageDataObject;
		if(!valueDrmUsageDataDataModule["Domain"].isNull())
			drmUsageDataObject.domain = valueDrmUsageDataDataModule["Domain"].asString();
		if(!valueDrmUsageDataDataModule["TimeStamp"].isNull())
			drmUsageDataObject.timeStamp = valueDrmUsageDataDataModule["TimeStamp"].asString();
		if(!valueDrmUsageDataDataModule["Count"].isNull())
			drmUsageDataObject.count = std::stol(valueDrmUsageDataDataModule["Count"].asString());
		if(!valueDrmUsageDataDataModule["DrmType"].isNull())
			drmUsageDataObject.drmType = valueDrmUsageDataDataModule["DrmType"].asString();
		if(!valueDrmUsageDataDataModule["Region"].isNull())
			drmUsageDataObject.region = valueDrmUsageDataDataModule["Region"].asString();
		drmUsageData_.push_back(drmUsageDataObject);
	}

}

std::vector<DescribeLiveDrmUsageDataResult::DataModule> DescribeLiveDrmUsageDataResult::getDrmUsageData()const
{
	return drmUsageData_;
}

