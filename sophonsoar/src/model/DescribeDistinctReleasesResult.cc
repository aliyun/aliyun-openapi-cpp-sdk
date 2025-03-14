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

#include <alibabacloud/sophonsoar/model/DescribeDistinctReleasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeDistinctReleasesResult::DescribeDistinctReleasesResult() :
	ServiceResult()
{}

DescribeDistinctReleasesResult::DescribeDistinctReleasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDistinctReleasesResult::~DescribeDistinctReleasesResult()
{}

void DescribeDistinctReleasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["RecordsItem"];
	for (auto valueRecordsRecordsItem : allRecordsNode)
	{
		RecordsItem recordsObject;
		if(!valueRecordsRecordsItem["Description"].isNull())
			recordsObject.description = valueRecordsRecordsItem["Description"].asString();
		if(!valueRecordsRecordsItem["TaskflowMd5"].isNull())
			recordsObject.taskflowMd5 = valueRecordsRecordsItem["TaskflowMd5"].asString();
		if(!valueRecordsRecordsItem["FlowFlag"].isNull())
			recordsObject.flowFlag = std::stoi(valueRecordsRecordsItem["FlowFlag"].asString());
		if(!valueRecordsRecordsItem["FlowTag"].isNull())
			recordsObject.flowTag = std::stoi(valueRecordsRecordsItem["FlowTag"].asString());
		if(!valueRecordsRecordsItem["TaskflowType"].isNull())
			recordsObject.taskflowType = valueRecordsRecordsItem["TaskflowType"].asString();
		records_.push_back(recordsObject);
	}

}

std::vector<DescribeDistinctReleasesResult::RecordsItem> DescribeDistinctReleasesResult::getRecords()const
{
	return records_;
}

