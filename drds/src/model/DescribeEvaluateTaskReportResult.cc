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

#include <alibabacloud/drds/model/DescribeEvaluateTaskReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeEvaluateTaskReportResult::DescribeEvaluateTaskReportResult() :
	ServiceResult()
{}

DescribeEvaluateTaskReportResult::DescribeEvaluateTaskReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEvaluateTaskReportResult::~DescribeEvaluateTaskReportResult()
{}

void DescribeEvaluateTaskReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto evaluateResultNode = value["EvaluateResult"];
	if(!evaluateResultNode["TaskId"].isNull())
		evaluateResult_.taskId = std::stoi(evaluateResultNode["TaskId"].asString());
	if(!evaluateResultNode["TaskName"].isNull())
		evaluateResult_.taskName = evaluateResultNode["TaskName"].asString();
	if(!evaluateResultNode["InstId"].isNull())
		evaluateResult_.instId = std::stoi(evaluateResultNode["InstId"].asString());
	if(!evaluateResultNode["DbName"].isNull())
		evaluateResult_.dbName = evaluateResultNode["DbName"].asString();
	if(!evaluateResultNode["TaskStatus"].isNull())
		evaluateResult_.taskStatus = evaluateResultNode["TaskStatus"].asString();
	if(!evaluateResultNode["GmtCreate"].isNull())
		evaluateResult_.gmtCreate = evaluateResultNode["GmtCreate"].asString();
	if(!evaluateResultNode["GmtModified"].isNull())
		evaluateResult_.gmtModified = evaluateResultNode["GmtModified"].asString();
	if(!evaluateResultNode["RdsType"].isNull())
		evaluateResult_.rdsType = evaluateResultNode["RdsType"].asString();
	if(!evaluateResultNode["RdsCount"].isNull())
		evaluateResult_.rdsCount = std::stoi(evaluateResultNode["RdsCount"].asString());
	if(!evaluateResultNode["RdsTotalSpace"].isNull())
		evaluateResult_.rdsTotalSpace = evaluateResultNode["RdsTotalSpace"].asString();
	if(!evaluateResultNode["DrdsType"].isNull())
		evaluateResult_.drdsType = evaluateResultNode["DrdsType"].asString();
	if(!evaluateResultNode["DrdsCount"].isNull())
		evaluateResult_.drdsCount = std::stoi(evaluateResultNode["DrdsCount"].asString());
	if(!evaluateResultNode["AllSqlCount"].isNull())
		evaluateResult_.allSqlCount = std::stoi(evaluateResultNode["AllSqlCount"].asString());
	if(!evaluateResultNode["SlowSqlCount"].isNull())
		evaluateResult_.slowSqlCount = std::stoi(evaluateResultNode["SlowSqlCount"].asString());
	auto allTableShardResultsNode = evaluateResultNode["TableShardResults"]["TableShardResultsItem"];
	for (auto evaluateResultNodeTableShardResultsTableShardResultsItem : allTableShardResultsNode)
	{
		EvaluateResult::TableShardResultsItem tableShardResultsItemObject;
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["Table"].isNull())
			tableShardResultsItemObject.table = evaluateResultNodeTableShardResultsTableShardResultsItem["Table"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["ShardType"].isNull())
			tableShardResultsItemObject.shardType = evaluateResultNodeTableShardResultsTableShardResultsItem["ShardType"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["DbShardKey"].isNull())
			tableShardResultsItemObject.dbShardKey = evaluateResultNodeTableShardResultsTableShardResultsItem["DbShardKey"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["TbShardKey"].isNull())
			tableShardResultsItemObject.tbShardKey = evaluateResultNodeTableShardResultsTableShardResultsItem["TbShardKey"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["Tbpartitions"].isNull())
			tableShardResultsItemObject.tbpartitions = std::stoi(evaluateResultNodeTableShardResultsTableShardResultsItem["Tbpartitions"].asString());
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["Dbpartitions"].isNull())
			tableShardResultsItemObject.dbpartitions = std::stoi(evaluateResultNodeTableShardResultsTableShardResultsItem["Dbpartitions"].asString());
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["CreateTableSql"].isNull())
			tableShardResultsItemObject.createTableSql = evaluateResultNodeTableShardResultsTableShardResultsItem["CreateTableSql"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["RowCount"].isNull())
			tableShardResultsItemObject.rowCount = std::stoi(evaluateResultNodeTableShardResultsTableShardResultsItem["RowCount"].asString());
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["SqlCount"].isNull())
			tableShardResultsItemObject.sqlCount = std::stoi(evaluateResultNodeTableShardResultsTableShardResultsItem["SqlCount"].asString());
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["ShardKeyType"].isNull())
			tableShardResultsItemObject.shardKeyType = evaluateResultNodeTableShardResultsTableShardResultsItem["ShardKeyType"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["DbShardMethod"].isNull())
			tableShardResultsItemObject.dbShardMethod = evaluateResultNodeTableShardResultsTableShardResultsItem["DbShardMethod"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["TbShardMethod"].isNull())
			tableShardResultsItemObject.tbShardMethod = evaluateResultNodeTableShardResultsTableShardResultsItem["TbShardMethod"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["OriginDbShardMethod"].isNull())
			tableShardResultsItemObject.originDbShardMethod = evaluateResultNodeTableShardResultsTableShardResultsItem["OriginDbShardMethod"].asString();
		if(!evaluateResultNodeTableShardResultsTableShardResultsItem["OriginTbShardMethod"].isNull())
			tableShardResultsItemObject.originTbShardMethod = evaluateResultNodeTableShardResultsTableShardResultsItem["OriginTbShardMethod"].asString();
		evaluateResult_.tableShardResults.push_back(tableShardResultsItemObject);
	}
	auto allRdsInstInfosNode = evaluateResultNode["RdsInstInfos"]["RdsInstInfosItem"];
	for (auto evaluateResultNodeRdsInstInfosRdsInstInfosItem : allRdsInstInfosNode)
	{
		EvaluateResult::RdsInstInfosItem rdsInstInfosItemObject;
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["InstId"].isNull())
			rdsInstInfosItemObject.instId = evaluateResultNodeRdsInstInfosRdsInstInfosItem["InstId"].asString();
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsUsedSpace"].isNull())
			rdsInstInfosItemObject.rdsUsedSpace = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsUsedSpace"].asString());
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakIopsWeekly"].isNull())
			rdsInstInfosItemObject.rdsPeakIopsWeekly = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakIopsWeekly"].asString());
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakQpsWeekly"].isNull())
			rdsInstInfosItemObject.rdsPeakQpsWeekly = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakQpsWeekly"].asString());
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakSessionsWeekly"].isNull())
			rdsInstInfosItemObject.rdsPeakSessionsWeekly = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["RdsPeakSessionsWeekly"].asString());
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["DataGrowthScale"].isNull())
			rdsInstInfosItemObject.dataGrowthScale = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["DataGrowthScale"].asString());
		if(!evaluateResultNodeRdsInstInfosRdsInstInfosItem["AvgQpsGrowthScale"].isNull())
			rdsInstInfosItemObject.avgQpsGrowthScale = std::stoi(evaluateResultNodeRdsInstInfosRdsInstInfosItem["AvgQpsGrowthScale"].asString());
		evaluateResult_.rdsInstInfos.push_back(rdsInstInfosItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeEvaluateTaskReportResult::EvaluateResult DescribeEvaluateTaskReportResult::getEvaluateResult()const
{
	return evaluateResult_;
}

bool DescribeEvaluateTaskReportResult::getSuccess()const
{
	return success_;
}

