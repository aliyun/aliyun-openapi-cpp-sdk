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

#include <alibabacloud/sophonsoar/model/DescribePlaybookReleasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePlaybookReleasesResult::DescribePlaybookReleasesResult() :
	ServiceResult()
{}

DescribePlaybookReleasesResult::DescribePlaybookReleasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlaybookReleasesResult::~DescribePlaybookReleasesResult()
{}

void DescribePlaybookReleasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["Data"];
	for (auto valueRecordsData : allRecordsNode)
	{
		Data recordsObject;
		if(!valueRecordsData["Id"].isNull())
			recordsObject.id = std::stoi(valueRecordsData["Id"].asString());
		if(!valueRecordsData["GmtCreate"].isNull())
			recordsObject.gmtCreate = std::stol(valueRecordsData["GmtCreate"].asString());
		if(!valueRecordsData["GmtModified"].isNull())
			recordsObject.gmtModified = std::stol(valueRecordsData["GmtModified"].asString());
		if(!valueRecordsData["PlaybookId"].isNull())
			recordsObject.playbookId = std::stol(valueRecordsData["PlaybookId"].asString());
		if(!valueRecordsData["ReleaseUuid"].isNull())
			recordsObject.releaseUuid = valueRecordsData["ReleaseUuid"].asString();
		if(!valueRecordsData["Creator"].isNull())
			recordsObject.creator = valueRecordsData["Creator"].asString();
		if(!valueRecordsData["Description"].isNull())
			recordsObject.description = valueRecordsData["Description"].asString();
		if(!valueRecordsData["TaskflowMd5"].isNull())
			recordsObject.taskflowMd5 = valueRecordsData["TaskflowMd5"].asString();
		if(!valueRecordsData["FlowFlag"].isNull())
			recordsObject.flowFlag = std::stoi(valueRecordsData["FlowFlag"].asString());
		if(!valueRecordsData["FlowTag"].isNull())
			recordsObject.flowTag = std::stoi(valueRecordsData["FlowTag"].asString());
		records_.push_back(recordsObject);
	}
	auto pageNode = value["Page"];
	if(!pageNode["TotalCount"].isNull())
		page_.totalCount = std::stoi(pageNode["TotalCount"].asString());
	if(!pageNode["PageNumber"].isNull())
		page_.pageNumber = std::stoi(pageNode["PageNumber"].asString());
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stoi(pageNode["PageSize"].asString());

}

DescribePlaybookReleasesResult::Page DescribePlaybookReleasesResult::getPage()const
{
	return page_;
}

std::vector<DescribePlaybookReleasesResult::Data> DescribePlaybookReleasesResult::getRecords()const
{
	return records_;
}

