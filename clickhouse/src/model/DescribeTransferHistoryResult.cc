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

#include <alibabacloud/clickhouse/model/DescribeTransferHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeTransferHistoryResult::DescribeTransferHistoryResult() :
	ServiceResult()
{}

DescribeTransferHistoryResult::DescribeTransferHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTransferHistoryResult::~DescribeTransferHistoryResult()
{}

void DescribeTransferHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHistoryDetailsNode = value["HistoryDetails"]["HistoryDetail"];
	for (auto valueHistoryDetailsHistoryDetail : allHistoryDetailsNode)
	{
		HistoryDetail historyDetailsObject;
		if(!valueHistoryDetailsHistoryDetail["SourceDBCluster"].isNull())
			historyDetailsObject.sourceDBCluster = valueHistoryDetailsHistoryDetail["SourceDBCluster"].asString();
		if(!valueHistoryDetailsHistoryDetail["SourceControlVersion"].isNull())
			historyDetailsObject.sourceControlVersion = valueHistoryDetailsHistoryDetail["SourceControlVersion"].asString();
		if(!valueHistoryDetailsHistoryDetail["TargetDBCluster"].isNull())
			historyDetailsObject.targetDBCluster = valueHistoryDetailsHistoryDetail["TargetDBCluster"].asString();
		if(!valueHistoryDetailsHistoryDetail["TargetControlVersion"].isNull())
			historyDetailsObject.targetControlVersion = valueHistoryDetailsHistoryDetail["TargetControlVersion"].asString();
		if(!valueHistoryDetailsHistoryDetail["Status"].isNull())
			historyDetailsObject.status = valueHistoryDetailsHistoryDetail["Status"].asString();
		if(!valueHistoryDetailsHistoryDetail["Progress"].isNull())
			historyDetailsObject.progress = valueHistoryDetailsHistoryDetail["Progress"].asString();
		if(!valueHistoryDetailsHistoryDetail["DisableWriteWindows"].isNull())
			historyDetailsObject.disableWriteWindows = valueHistoryDetailsHistoryDetail["DisableWriteWindows"].asString();
		if(!valueHistoryDetailsHistoryDetail["UnsyncedBytes"].isNull())
			historyDetailsObject.unsyncedBytes = std::stol(valueHistoryDetailsHistoryDetail["UnsyncedBytes"].asString());
		if(!valueHistoryDetailsHistoryDetail["UnsyncedParts"].isNull())
			historyDetailsObject.unsyncedParts = std::stol(valueHistoryDetailsHistoryDetail["UnsyncedParts"].asString());
		if(!valueHistoryDetailsHistoryDetail["PartsPerMinute"].isNull())
			historyDetailsObject.partsPerMinute = valueHistoryDetailsHistoryDetail["PartsPerMinute"].asString();
		if(!valueHistoryDetailsHistoryDetail["BytesPerMinute"].isNull())
			historyDetailsObject.bytesPerMinute = std::stol(valueHistoryDetailsHistoryDetail["BytesPerMinute"].asString());
		if(!valueHistoryDetailsHistoryDetail["SubJob"].isNull())
			historyDetailsObject.subJob = valueHistoryDetailsHistoryDetail["SubJob"].asString();
		if(!valueHistoryDetailsHistoryDetail["SubJobStatus"].isNull())
			historyDetailsObject.subJobStatus = valueHistoryDetailsHistoryDetail["SubJobStatus"].asString();
		historyDetails_.push_back(historyDetailsObject);
	}

}

std::vector<DescribeTransferHistoryResult::HistoryDetail> DescribeTransferHistoryResult::getHistoryDetails()const
{
	return historyDetails_;
}

