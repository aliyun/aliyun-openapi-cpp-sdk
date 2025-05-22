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

#include <alibabacloud/rds/model/DescribeDBMiniEngineVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBMiniEngineVersionsResult::DescribeDBMiniEngineVersionsResult() :
	ServiceResult()
{}

DescribeDBMiniEngineVersionsResult::DescribeDBMiniEngineVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBMiniEngineVersionsResult::~DescribeDBMiniEngineVersionsResult()
{}

void DescribeDBMiniEngineVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMinorVersionItemsNode = value["MinorVersionItems"]["MinorVersionItemsItem"];
	for (auto valueMinorVersionItemsMinorVersionItemsItem : allMinorVersionItemsNode)
	{
		MinorVersionItemsItem minorVersionItemsObject;
		if(!valueMinorVersionItemsMinorVersionItemsItem["CommunityMinorVersion"].isNull())
			minorVersionItemsObject.communityMinorVersion = valueMinorVersionItemsMinorVersionItemsItem["CommunityMinorVersion"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["Engine"].isNull())
			minorVersionItemsObject.engine = valueMinorVersionItemsMinorVersionItemsItem["Engine"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["EngineVersion"].isNull())
			minorVersionItemsObject.engineVersion = valueMinorVersionItemsMinorVersionItemsItem["EngineVersion"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["ExpireDate"].isNull())
			minorVersionItemsObject.expireDate = valueMinorVersionItemsMinorVersionItemsItem["ExpireDate"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["ExpireStatus"].isNull())
			minorVersionItemsObject.expireStatus = valueMinorVersionItemsMinorVersionItemsItem["ExpireStatus"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["IsHotfixVersion"].isNull())
			minorVersionItemsObject.isHotfixVersion = valueMinorVersionItemsMinorVersionItemsItem["IsHotfixVersion"].asString() == "true";
		if(!valueMinorVersionItemsMinorVersionItemsItem["MinorVersion"].isNull())
			minorVersionItemsObject.minorVersion = valueMinorVersionItemsMinorVersionItemsItem["MinorVersion"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["NodeType"].isNull())
			minorVersionItemsObject.nodeType = valueMinorVersionItemsMinorVersionItemsItem["NodeType"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["ReleaseNote"].isNull())
			minorVersionItemsObject.releaseNote = valueMinorVersionItemsMinorVersionItemsItem["ReleaseNote"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["ReleaseType"].isNull())
			minorVersionItemsObject.releaseType = valueMinorVersionItemsMinorVersionItemsItem["ReleaseType"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["StatusDesc"].isNull())
			minorVersionItemsObject.statusDesc = valueMinorVersionItemsMinorVersionItemsItem["StatusDesc"].asString();
		if(!valueMinorVersionItemsMinorVersionItemsItem["Tag"].isNull())
			minorVersionItemsObject.tag = valueMinorVersionItemsMinorVersionItemsItem["Tag"].asString();
		minorVersionItems_.push_back(minorVersionItemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["PageNumbers"].isNull())
		pageNumbers_ = std::stoi(value["PageNumbers"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDBMiniEngineVersionsResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeDBMiniEngineVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDBMiniEngineVersionsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeDBMiniEngineVersionsResult::MinorVersionItemsItem> DescribeDBMiniEngineVersionsResult::getMinorVersionItems()const
{
	return minorVersionItems_;
}

int DescribeDBMiniEngineVersionsResult::getPageNumbers()const
{
	return pageNumbers_;
}

