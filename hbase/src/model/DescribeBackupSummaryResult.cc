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

#include <alibabacloud/hbase/model/DescribeBackupSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeBackupSummaryResult::DescribeBackupSummaryResult() :
	ServiceResult()
{}

DescribeBackupSummaryResult::DescribeBackupSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSummaryResult::~DescribeBackupSummaryResult()
{}

void DescribeBackupSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto incrNode = value["Incr"];
	if(!incrNode["Pos"].isNull())
		incr_.pos = incrNode["Pos"].asString();
	if(!incrNode["QueueLogNum"].isNull())
		incr_.queueLogNum = incrNode["QueueLogNum"].asString();
	if(!incrNode["Speed"].isNull())
		incr_.speed = incrNode["Speed"].asString();
	if(!incrNode["Status"].isNull())
		incr_.status = incrNode["Status"].asString();
	if(!incrNode["RunningLogNum"].isNull())
		incr_.runningLogNum = incrNode["RunningLogNum"].asString();
	if(!incrNode["BackupLogSize"].isNull())
		incr_.backupLogSize = incrNode["BackupLogSize"].asString();
	auto fullNode = value["Full"];
	if(!fullNode["HasMore"].isNull())
		full_.hasMore = fullNode["HasMore"].asString();
	if(!fullNode["NextFullBackupDate"].isNull())
		full_.nextFullBackupDate = fullNode["NextFullBackupDate"].asString();
	if(!fullNode["PageNumber"].isNull())
		full_.pageNumber = std::stoi(fullNode["PageNumber"].asString());
	if(!fullNode["PageSize"].isNull())
		full_.pageSize = std::stoi(fullNode["PageSize"].asString());
	if(!fullNode["Total"].isNull())
		full_.total = std::stoi(fullNode["Total"].asString());
	auto allRecordsNode = fullNode["Records"]["Record"];
	for (auto fullNodeRecordsRecord : allRecordsNode)
	{
		Full::Record recordObject;
		if(!fullNodeRecordsRecord["RecordId"].isNull())
			recordObject.recordId = fullNodeRecordsRecord["RecordId"].asString();
		if(!fullNodeRecordsRecord["FinishTime"].isNull())
			recordObject.finishTime = fullNodeRecordsRecord["FinishTime"].asString();
		if(!fullNodeRecordsRecord["Process"].isNull())
			recordObject.process = fullNodeRecordsRecord["Process"].asString();
		if(!fullNodeRecordsRecord["CreateTime"].isNull())
			recordObject.createTime = fullNodeRecordsRecord["CreateTime"].asString();
		if(!fullNodeRecordsRecord["DataSize"].isNull())
			recordObject.dataSize = fullNodeRecordsRecord["DataSize"].asString();
		if(!fullNodeRecordsRecord["Speed"].isNull())
			recordObject.speed = fullNodeRecordsRecord["Speed"].asString();
		if(!fullNodeRecordsRecord["Status"].isNull())
			recordObject.status = fullNodeRecordsRecord["Status"].asString();
		full_.records.push_back(recordObject);
	}

}

DescribeBackupSummaryResult::Incr DescribeBackupSummaryResult::getIncr()const
{
	return incr_;
}

DescribeBackupSummaryResult::Full DescribeBackupSummaryResult::getFull()const
{
	return full_;
}

