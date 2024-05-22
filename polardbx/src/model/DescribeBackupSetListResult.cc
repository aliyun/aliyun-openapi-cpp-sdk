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

#include <alibabacloud/polardbx/model/DescribeBackupSetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeBackupSetListResult::DescribeBackupSetListResult() :
	ServiceResult()
{}

DescribeBackupSetListResult::DescribeBackupSetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetListResult::~DescribeBackupSetListResult()
{}

void DescribeBackupSetListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BackupSet"];
	for (auto valueDataBackupSet : allDataNode)
	{
		BackupSet dataObject;
		if(!valueDataBackupSet["EndTime"].isNull())
			dataObject.endTime = std::stol(valueDataBackupSet["EndTime"].asString());
		if(!valueDataBackupSet["Status"].isNull())
			dataObject.status = std::stoi(valueDataBackupSet["Status"].asString());
		if(!valueDataBackupSet["BackupSetSize"].isNull())
			dataObject.backupSetSize = std::stol(valueDataBackupSet["BackupSetSize"].asString());
		if(!valueDataBackupSet["BackupSetId"].isNull())
			dataObject.backupSetId = std::stol(valueDataBackupSet["BackupSetId"].asString());
		if(!valueDataBackupSet["BackupType"].isNull())
			dataObject.backupType = std::stoi(valueDataBackupSet["BackupType"].asString());
		if(!valueDataBackupSet["BeginTime"].isNull())
			dataObject.beginTime = std::stol(valueDataBackupSet["BeginTime"].asString());
		if(!valueDataBackupSet["BackupModel"].isNull())
			dataObject.backupModel = std::stoi(valueDataBackupSet["BackupModel"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeBackupSetListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeBackupSetListResult::BackupSet> DescribeBackupSetListResult::getData()const
{
	return data_;
}

bool DescribeBackupSetListResult::getSuccess()const
{
	return success_;
}

