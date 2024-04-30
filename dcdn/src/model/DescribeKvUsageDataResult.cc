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

#include <alibabacloud/dcdn/model/DescribeKvUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeKvUsageDataResult::DescribeKvUsageDataResult() :
	ServiceResult()
{}

DescribeKvUsageDataResult::DescribeKvUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKvUsageDataResult::~DescribeKvUsageDataResult()
{}

void DescribeKvUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKvUsageDataNode = value["KvUsageData"]["KvUsageDataItem"];
	for (auto valueKvUsageDataKvUsageDataItem : allKvUsageDataNode)
	{
		KvUsageDataItem kvUsageDataObject;
		if(!valueKvUsageDataKvUsageDataItem["TimeStamp"].isNull())
			kvUsageDataObject.timeStamp = valueKvUsageDataKvUsageDataItem["TimeStamp"].asString();
		if(!valueKvUsageDataKvUsageDataItem["NamespaceId"].isNull())
			kvUsageDataObject.namespaceId = valueKvUsageDataKvUsageDataItem["NamespaceId"].asString();
		if(!valueKvUsageDataKvUsageDataItem["AccessType"].isNull())
			kvUsageDataObject.accessType = valueKvUsageDataKvUsageDataItem["AccessType"].asString();
		if(!valueKvUsageDataKvUsageDataItem["Acc"].isNull())
			kvUsageDataObject.acc = std::stol(valueKvUsageDataKvUsageDataItem["Acc"].asString());
		kvUsageData_.push_back(kvUsageDataObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeKvUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeKvUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeKvUsageDataResult::KvUsageDataItem> DescribeKvUsageDataResult::getKvUsageData()const
{
	return kvUsageData_;
}

