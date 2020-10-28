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

#include <alibabacloud/drds/model/GetBatchEvaluateTaskReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

GetBatchEvaluateTaskReportResult::GetBatchEvaluateTaskReportResult() :
	ServiceResult()
{}

GetBatchEvaluateTaskReportResult::GetBatchEvaluateTaskReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBatchEvaluateTaskReportResult::~GetBatchEvaluateTaskReportResult()
{}

void GetBatchEvaluateTaskReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EvaluateResults"];
	for (auto valueDataEvaluateResults : allDataNode)
	{
		EvaluateResults dataObject;
		if(!valueDataEvaluateResults["TaskId"].isNull())
			dataObject.taskId = std::stoi(valueDataEvaluateResults["TaskId"].asString());
		if(!valueDataEvaluateResults["TaskName"].isNull())
			dataObject.taskName = valueDataEvaluateResults["TaskName"].asString();
		if(!valueDataEvaluateResults["InstId"].isNull())
			dataObject.instId = std::stoi(valueDataEvaluateResults["InstId"].asString());
		if(!valueDataEvaluateResults["DbName"].isNull())
			dataObject.dbName = valueDataEvaluateResults["DbName"].asString();
		if(!valueDataEvaluateResults["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataEvaluateResults["TaskStatus"].asString();
		if(!valueDataEvaluateResults["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataEvaluateResults["GmtCreate"].asString();
		if(!valueDataEvaluateResults["GmtModified"].isNull())
			dataObject.gmtModified = valueDataEvaluateResults["GmtModified"].asString();
		if(!valueDataEvaluateResults["RdsType"].isNull())
			dataObject.rdsType = valueDataEvaluateResults["RdsType"].asString();
		if(!valueDataEvaluateResults["RdsCount"].isNull())
			dataObject.rdsCount = std::stoi(valueDataEvaluateResults["RdsCount"].asString());
		if(!valueDataEvaluateResults["RdsTotalSpace"].isNull())
			dataObject.rdsTotalSpace = valueDataEvaluateResults["RdsTotalSpace"].asString();
		if(!valueDataEvaluateResults["DrdsType"].isNull())
			dataObject.drdsType = valueDataEvaluateResults["DrdsType"].asString();
		if(!valueDataEvaluateResults["DrdsCount"].isNull())
			dataObject.drdsCount = std::stoi(valueDataEvaluateResults["DrdsCount"].asString());
		if(!valueDataEvaluateResults["AllSqlCount"].isNull())
			dataObject.allSqlCount = std::stoi(valueDataEvaluateResults["AllSqlCount"].asString());
		if(!valueDataEvaluateResults["SlowSqlCount"].isNull())
			dataObject.slowSqlCount = std::stoi(valueDataEvaluateResults["SlowSqlCount"].asString());
		auto allTableShardResultsNode = allDataNode["TableShardResults"]["TableShardResultsItem"];
		for (auto allDataNodeTableShardResultsTableShardResultsItem : allTableShardResultsNode)
		{
			EvaluateResults::TableShardResultsItem tableShardResultsObject;
			if(!allDataNodeTableShardResultsTableShardResultsItem["Table"].isNull())
				tableShardResultsObject.table = allDataNodeTableShardResultsTableShardResultsItem["Table"].asString();
			if(!allDataNodeTableShardResultsTableShardResultsItem["ShardType"].isNull())
				tableShardResultsObject.shardType = allDataNodeTableShardResultsTableShardResultsItem["ShardType"].asString();
			if(!allDataNodeTableShardResultsTableShardResultsItem["DbShardKey"].isNull())
				tableShardResultsObject.dbShardKey = allDataNodeTableShardResultsTableShardResultsItem["DbShardKey"].asString();
			if(!allDataNodeTableShardResultsTableShardResultsItem["TbShardKey"].isNull())
				tableShardResultsObject.tbShardKey = allDataNodeTableShardResultsTableShardResultsItem["TbShardKey"].asString();
			if(!allDataNodeTableShardResultsTableShardResultsItem["Tbpartitions"].isNull())
				tableShardResultsObject.tbpartitions = std::stoi(allDataNodeTableShardResultsTableShardResultsItem["Tbpartitions"].asString());
			if(!allDataNodeTableShardResultsTableShardResultsItem["Dbpartitions"].isNull())
				tableShardResultsObject.dbpartitions = std::stoi(allDataNodeTableShardResultsTableShardResultsItem["Dbpartitions"].asString());
			if(!allDataNodeTableShardResultsTableShardResultsItem["CreateTableSql"].isNull())
				tableShardResultsObject.createTableSql = allDataNodeTableShardResultsTableShardResultsItem["CreateTableSql"].asString();
			if(!allDataNodeTableShardResultsTableShardResultsItem["RowCount"].isNull())
				tableShardResultsObject.rowCount = std::stoi(allDataNodeTableShardResultsTableShardResultsItem["RowCount"].asString());
			if(!allDataNodeTableShardResultsTableShardResultsItem["SqlCount"].isNull())
				tableShardResultsObject.sqlCount = std::stoi(allDataNodeTableShardResultsTableShardResultsItem["SqlCount"].asString());
			if(!allDataNodeTableShardResultsTableShardResultsItem["ShardKeyType"].isNull())
				tableShardResultsObject.shardKeyType = allDataNodeTableShardResultsTableShardResultsItem["ShardKeyType"].asString();
			dataObject.tableShardResults.push_back(tableShardResultsObject);
		}
		auto allRdsInstInfosNode = allDataNode["RdsInstInfos"]["RdsInstInfosItem"];
		for (auto allDataNodeRdsInstInfosRdsInstInfosItem : allRdsInstInfosNode)
		{
			EvaluateResults::RdsInstInfosItem rdsInstInfosObject;
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["InstId"].isNull())
				rdsInstInfosObject.instId = allDataNodeRdsInstInfosRdsInstInfosItem["InstId"].asString();
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["RdsUsedSpace"].isNull())
				rdsInstInfosObject.rdsUsedSpace = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["RdsUsedSpace"].asString());
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakIopsWeekly"].isNull())
				rdsInstInfosObject.rdsPeakIopsWeekly = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakIopsWeekly"].asString());
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakQpsWeekly"].isNull())
				rdsInstInfosObject.rdsPeakQpsWeekly = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakQpsWeekly"].asString());
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakSessionsWeekly"].isNull())
				rdsInstInfosObject.rdsPeakSessionsWeekly = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["RdsPeakSessionsWeekly"].asString());
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["DataGrowthScale"].isNull())
				rdsInstInfosObject.dataGrowthScale = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["DataGrowthScale"].asString());
			if(!allDataNodeRdsInstInfosRdsInstInfosItem["AvgQpsGrowthScale"].isNull())
				rdsInstInfosObject.avgQpsGrowthScale = std::stoi(allDataNodeRdsInstInfosRdsInstInfosItem["AvgQpsGrowthScale"].asString());
			dataObject.rdsInstInfos.push_back(rdsInstInfosObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetBatchEvaluateTaskReportResult::EvaluateResults> GetBatchEvaluateTaskReportResult::getData()const
{
	return data_;
}

bool GetBatchEvaluateTaskReportResult::getSuccess()const
{
	return success_;
}

