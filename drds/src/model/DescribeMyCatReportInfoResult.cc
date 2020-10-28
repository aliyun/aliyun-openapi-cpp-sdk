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

#include <alibabacloud/drds/model/DescribeMyCatReportInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeMyCatReportInfoResult::DescribeMyCatReportInfoResult() :
	ServiceResult()
{}

DescribeMyCatReportInfoResult::DescribeMyCatReportInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMyCatReportInfoResult::~DescribeMyCatReportInfoResult()
{}

void DescribeMyCatReportInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto evaluateReportInfoNode = value["EvaluateReportInfo"];
	if(!evaluateReportInfoNode["ErrorSqlCount"].isNull())
		evaluateReportInfo_.errorSqlCount = std::stoi(evaluateReportInfoNode["ErrorSqlCount"].asString());
	if(!evaluateReportInfoNode["DrdsSpecs"].isNull())
		evaluateReportInfo_.drdsSpecs = evaluateReportInfoNode["DrdsSpecs"].asString();
	if(!evaluateReportInfoNode["DrdsNodeCount"].isNull())
		evaluateReportInfo_.drdsNodeCount = std::stoi(evaluateReportInfoNode["DrdsNodeCount"].asString());
	if(!evaluateReportInfoNode["RdsSpecs"].isNull())
		evaluateReportInfo_.rdsSpecs = evaluateReportInfoNode["RdsSpecs"].asString();
	if(!evaluateReportInfoNode["RdsCount"].isNull())
		evaluateReportInfo_.rdsCount = std::stoi(evaluateReportInfoNode["RdsCount"].asString());
	if(!evaluateReportInfoNode["RdsDiskCapacity"].isNull())
		evaluateReportInfo_.rdsDiskCapacity = evaluateReportInfoNode["RdsDiskCapacity"].asString();
	auto dbInfoNode = evaluateReportInfoNode["DbInfo"];
	if(!dbInfoNode["DbName"].isNull())
		evaluateReportInfo_.dbInfo.dbName = dbInfoNode["DbName"].asString();
	auto allTableInfoListNode = dbInfoNode["TableInfoList"]["tableInfo"];
	for (auto dbInfoNodeTableInfoListtableInfo : allTableInfoListNode)
	{
		EvaluateReportInfo::DbInfo::TableInfo tableInfoObject;
		if(!dbInfoNodeTableInfoListtableInfo["TableName"].isNull())
			tableInfoObject.tableName = dbInfoNodeTableInfoListtableInfo["TableName"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["MycatShardAlgorithm"].isNull())
			tableInfoObject.mycatShardAlgorithm = dbInfoNodeTableInfoListtableInfo["MycatShardAlgorithm"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["DbShardColumn"].isNull())
			tableInfoObject.dbShardColumn = dbInfoNodeTableInfoListtableInfo["DbShardColumn"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["DbShardAlgorithm"].isNull())
			tableInfoObject.dbShardAlgorithm = dbInfoNodeTableInfoListtableInfo["DbShardAlgorithm"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["TbShardColumn"].isNull())
			tableInfoObject.tbShardColumn = dbInfoNodeTableInfoListtableInfo["TbShardColumn"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["TbShardAlgorithm"].isNull())
			tableInfoObject.tbShardAlgorithm = dbInfoNodeTableInfoListtableInfo["TbShardAlgorithm"].asString();
		if(!dbInfoNodeTableInfoListtableInfo["TbShardNum"].isNull())
			tableInfoObject.tbShardNum = std::stoi(dbInfoNodeTableInfoListtableInfo["TbShardNum"].asString());
		if(!dbInfoNodeTableInfoListtableInfo["Shard"].isNull())
			tableInfoObject.shard = dbInfoNodeTableInfoListtableInfo["Shard"].asString() == "true";
		if(!dbInfoNodeTableInfoListtableInfo["Broadcast"].isNull())
			tableInfoObject.broadcast = dbInfoNodeTableInfoListtableInfo["Broadcast"].asString() == "true";
		if(!dbInfoNodeTableInfoListtableInfo["CreateTableSql"].isNull())
			tableInfoObject.createTableSql = dbInfoNodeTableInfoListtableInfo["CreateTableSql"].asString();
		evaluateReportInfo_.dbInfo.tableInfoList.push_back(tableInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeMyCatReportInfoResult::EvaluateReportInfo DescribeMyCatReportInfoResult::getEvaluateReportInfo()const
{
	return evaluateReportInfo_;
}

bool DescribeMyCatReportInfoResult::getSuccess()const
{
	return success_;
}

