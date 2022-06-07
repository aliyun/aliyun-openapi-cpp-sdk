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

#include <alibabacloud/adb/model/DescribeDiagnosisRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDiagnosisRecordsResult::DescribeDiagnosisRecordsResult() :
	ServiceResult()
{}

DescribeDiagnosisRecordsResult::DescribeDiagnosisRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisRecordsResult::~DescribeDiagnosisRecordsResult()
{}

void DescribeDiagnosisRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuerysNode = value["Querys"]["Items"];
	for (auto valueQuerysItems : allQuerysNode)
	{
		Items querysObject;
		if(!valueQuerysItems["SQL"].isNull())
			querysObject.sQL = valueQuerysItems["SQL"].asString();
		if(!valueQuerysItems["SQLTruncatedThreshold"].isNull())
			querysObject.sQLTruncatedThreshold = std::stol(valueQuerysItems["SQLTruncatedThreshold"].asString());
		if(!valueQuerysItems["Status"].isNull())
			querysObject.status = valueQuerysItems["Status"].asString();
		if(!valueQuerysItems["OutputDataSize"].isNull())
			querysObject.outputDataSize = std::stol(valueQuerysItems["OutputDataSize"].asString());
		if(!valueQuerysItems["Cost"].isNull())
			querysObject.cost = std::stol(valueQuerysItems["Cost"].asString());
		if(!valueQuerysItems["OutputRows"].isNull())
			querysObject.outputRows = std::stol(valueQuerysItems["OutputRows"].asString());
		if(!valueQuerysItems["RcHost"].isNull())
			querysObject.rcHost = valueQuerysItems["RcHost"].asString();
		if(!valueQuerysItems["ScanSize"].isNull())
			querysObject.scanSize = std::stol(valueQuerysItems["ScanSize"].asString());
		if(!valueQuerysItems["ProcessId"].isNull())
			querysObject.processId = valueQuerysItems["ProcessId"].asString();
		if(!valueQuerysItems["StartTime"].isNull())
			querysObject.startTime = std::stol(valueQuerysItems["StartTime"].asString());
		if(!valueQuerysItems["SQLTruncated"].isNull())
			querysObject.sQLTruncated = valueQuerysItems["SQLTruncated"].asString() == "true";
		if(!valueQuerysItems["Database"].isNull())
			querysObject.database = valueQuerysItems["Database"].asString();
		if(!valueQuerysItems["ScanRows"].isNull())
			querysObject.scanRows = std::stol(valueQuerysItems["ScanRows"].asString());
		if(!valueQuerysItems["ResourceCostRank"].isNull())
			querysObject.resourceCostRank = std::stoi(valueQuerysItems["ResourceCostRank"].asString());
		if(!valueQuerysItems["ClientIp"].isNull())
			querysObject.clientIp = valueQuerysItems["ClientIp"].asString();
		if(!valueQuerysItems["PeakMemory"].isNull())
			querysObject.peakMemory = std::stol(valueQuerysItems["PeakMemory"].asString());
		if(!valueQuerysItems["QueueTime"].isNull())
			querysObject.queueTime = std::stol(valueQuerysItems["QueueTime"].asString());
		if(!valueQuerysItems["ResourceGroup"].isNull())
			querysObject.resourceGroup = valueQuerysItems["ResourceGroup"].asString();
		if(!valueQuerysItems["UserName"].isNull())
			querysObject.userName = valueQuerysItems["UserName"].asString();
		if(!valueQuerysItems["ExecutionTime"].isNull())
			querysObject.executionTime = std::stol(valueQuerysItems["ExecutionTime"].asString());
		if(!valueQuerysItems["TotalPlanningTime"].isNull())
			querysObject.totalPlanningTime = std::stol(valueQuerysItems["TotalPlanningTime"].asString());
		if(!valueQuerysItems["EtlWriteRows"].isNull())
			querysObject.etlWriteRows = std::stol(valueQuerysItems["EtlWriteRows"].asString());
		if(!valueQuerysItems["TotalStages"].isNull())
			querysObject.totalStages = std::stoi(valueQuerysItems["TotalStages"].asString());
		querys_.push_back(querysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDiagnosisRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDiagnosisRecordsResult::Items> DescribeDiagnosisRecordsResult::getQuerys()const
{
	return querys_;
}

int DescribeDiagnosisRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDiagnosisRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

