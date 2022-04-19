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

#include <alibabacloud/sas/model/DescribeGroupedMaliciousFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeGroupedMaliciousFilesResult::DescribeGroupedMaliciousFilesResult() :
	ServiceResult()
{}

DescribeGroupedMaliciousFilesResult::DescribeGroupedMaliciousFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupedMaliciousFilesResult::~DescribeGroupedMaliciousFilesResult()
{}

void DescribeGroupedMaliciousFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupedMaliciousFileResponseNode = value["GroupedMaliciousFileResponse"]["GroupedMaliciousFile"];
	for (auto valueGroupedMaliciousFileResponseGroupedMaliciousFile : allGroupedMaliciousFileResponseNode)
	{
		GroupedMaliciousFile groupedMaliciousFileResponseObject;
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["Status"].isNull())
			groupedMaliciousFileResponseObject.status = std::stoi(valueGroupedMaliciousFileResponseGroupedMaliciousFile["Status"].asString());
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["ImageCount"].isNull())
			groupedMaliciousFileResponseObject.imageCount = std::stol(valueGroupedMaliciousFileResponseGroupedMaliciousFile["ImageCount"].asString());
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["LatestScanTimestamp"].isNull())
			groupedMaliciousFileResponseObject.latestScanTimestamp = std::stol(valueGroupedMaliciousFileResponseGroupedMaliciousFile["LatestScanTimestamp"].asString());
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["MaliciousName"].isNull())
			groupedMaliciousFileResponseObject.maliciousName = valueGroupedMaliciousFileResponseGroupedMaliciousFile["MaliciousName"].asString();
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["MaliciousMd5"].isNull())
			groupedMaliciousFileResponseObject.maliciousMd5 = valueGroupedMaliciousFileResponseGroupedMaliciousFile["MaliciousMd5"].asString();
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["FirstScanTimestamp"].isNull())
			groupedMaliciousFileResponseObject.firstScanTimestamp = std::stol(valueGroupedMaliciousFileResponseGroupedMaliciousFile["FirstScanTimestamp"].asString());
		if(!valueGroupedMaliciousFileResponseGroupedMaliciousFile["Level"].isNull())
			groupedMaliciousFileResponseObject.level = valueGroupedMaliciousFileResponseGroupedMaliciousFile["Level"].asString();
		groupedMaliciousFileResponse_.push_back(groupedMaliciousFileResponseObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribeGroupedMaliciousFilesResult::GroupedMaliciousFile> DescribeGroupedMaliciousFilesResult::getGroupedMaliciousFileResponse()const
{
	return groupedMaliciousFileResponse_;
}

DescribeGroupedMaliciousFilesResult::PageInfo DescribeGroupedMaliciousFilesResult::getPageInfo()const
{
	return pageInfo_;
}

