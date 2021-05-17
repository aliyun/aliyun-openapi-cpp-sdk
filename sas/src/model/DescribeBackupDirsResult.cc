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

#include <alibabacloud/sas/model/DescribeBackupDirsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupDirsResult::DescribeBackupDirsResult() :
	ServiceResult()
{}

DescribeBackupDirsResult::DescribeBackupDirsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupDirsResult::~DescribeBackupDirsResult()
{}

void DescribeBackupDirsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupDirsNode = value["BackupDirs"]["SimpleBackupJob"];
	for (auto valueBackupDirsSimpleBackupJob : allBackupDirsNode)
	{
		SimpleBackupJob backupDirsObject;
		if(!valueBackupDirsSimpleBackupJob["BackupJobId"].isNull())
			backupDirsObject.backupJobId = std::stol(valueBackupDirsSimpleBackupJob["BackupJobId"].asString());
		if(!valueBackupDirsSimpleBackupJob["Source"].isNull())
			backupDirsObject.source = valueBackupDirsSimpleBackupJob["Source"].asString();
		backupDirs_.push_back(backupDirsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

DescribeBackupDirsResult::PageInfo DescribeBackupDirsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeBackupDirsResult::SimpleBackupJob> DescribeBackupDirsResult::getBackupDirs()const
{
	return backupDirs_;
}

