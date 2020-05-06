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

#include <alibabacloud/hbase/model/DescribeRestoreTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeRestoreTablesResult::DescribeRestoreTablesResult() :
	ServiceResult()
{}

DescribeRestoreTablesResult::DescribeRestoreTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreTablesResult::~DescribeRestoreTablesResult()
{}

void DescribeRestoreTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto restoreSummaryNode = value["RestoreSummary"];
	if(!restoreSummaryNode["RecordId"].isNull())
		restoreSummary_.recordId = restoreSummaryNode["RecordId"].asString();
	if(!restoreSummaryNode["StartTime"].isNull())
		restoreSummary_.startTime = restoreSummaryNode["StartTime"].asString();
	if(!restoreSummaryNode["EndTime"].isNull())
		restoreSummary_.endTime = restoreSummaryNode["EndTime"].asString();
	if(!restoreSummaryNode["State"].isNull())
		restoreSummary_.state = restoreSummaryNode["State"].asString();
	if(!restoreSummaryNode["TargetCluster"].isNull())
		restoreSummary_.targetCluster = restoreSummaryNode["TargetCluster"].asString();
	if(!restoreSummaryNode["RestoreToDate"].isNull())
		restoreSummary_.restoreToDate = restoreSummaryNode["RestoreToDate"].asString();
	auto restoreSchemaNode = value["RestoreSchema"];
	if(!restoreSchemaNode["Succeed"].isNull())
		restoreSchema_.succeed = std::stoi(restoreSchemaNode["Succeed"].asString());
	if(!restoreSchemaNode["Fail"].isNull())
		restoreSchema_.fail = std::stoi(restoreSchemaNode["Fail"].asString());
	if(!restoreSchemaNode["Total"].isNull())
		restoreSchema_.total = std::stol(restoreSchemaNode["Total"].asString());
	if(!restoreSchemaNode["PageNumber"].isNull())
		restoreSchema_.pageNumber = std::stoi(restoreSchemaNode["PageNumber"].asString());
	if(!restoreSchemaNode["PageSize"].isNull())
		restoreSchema_.pageSize = std::stoi(restoreSchemaNode["PageSize"].asString());
	auto allRestoreSchemaDetailsNode = restoreSchemaNode["RestoreSchemaDetails"]["RestoreSchemaDetail"];
	for (auto restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail : allRestoreSchemaDetailsNode)
	{
		RestoreSchema::RestoreSchemaDetail restoreSchemaDetailObject;
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Table"].isNull())
			restoreSchemaDetailObject.table = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Table"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["StartTime"].isNull())
			restoreSchemaDetailObject.startTime = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["StartTime"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["EndTime"].isNull())
			restoreSchemaDetailObject.endTime = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["EndTime"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["State"].isNull())
			restoreSchemaDetailObject.state = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["State"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Message"].isNull())
			restoreSchemaDetailObject.message = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Message"].asString();
		restoreSchema_.restoreSchemaDetails.push_back(restoreSchemaDetailObject);
	}
	auto restoreFullNode = value["RestoreFull"];
	if(!restoreFullNode["Succeed"].isNull())
		restoreFull_.succeed = std::stoi(restoreFullNode["Succeed"].asString());
	if(!restoreFullNode["Fail"].isNull())
		restoreFull_.fail = std::stoi(restoreFullNode["Fail"].asString());
	if(!restoreFullNode["DataSize"].isNull())
		restoreFull_.dataSize = restoreFullNode["DataSize"].asString();
	if(!restoreFullNode["Speed"].isNull())
		restoreFull_.speed = restoreFullNode["Speed"].asString();
	if(!restoreFullNode["Total"].isNull())
		restoreFull_.total = std::stol(restoreFullNode["Total"].asString());
	if(!restoreFullNode["PageNumber"].isNull())
		restoreFull_.pageNumber = std::stoi(restoreFullNode["PageNumber"].asString());
	if(!restoreFullNode["PageSize"].isNull())
		restoreFull_.pageSize = std::stoi(restoreFullNode["PageSize"].asString());
	auto allRestoreFullDetailsNode = restoreFullNode["RestoreFullDetails"]["RestoreFullDetail"];
	for (auto restoreFullNodeRestoreFullDetailsRestoreFullDetail : allRestoreFullDetailsNode)
	{
		RestoreFull::RestoreFullDetail restoreFullDetailObject;
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Table"].isNull())
			restoreFullDetailObject.table = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Table"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["State"].isNull())
			restoreFullDetailObject.state = restoreFullNodeRestoreFullDetailsRestoreFullDetail["State"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["StartTime"].isNull())
			restoreFullDetailObject.startTime = restoreFullNodeRestoreFullDetailsRestoreFullDetail["StartTime"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["EndTime"].isNull())
			restoreFullDetailObject.endTime = restoreFullNodeRestoreFullDetailsRestoreFullDetail["EndTime"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Process"].isNull())
			restoreFullDetailObject.process = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Process"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["DataSize"].isNull())
			restoreFullDetailObject.dataSize = restoreFullNodeRestoreFullDetailsRestoreFullDetail["DataSize"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Speed"].isNull())
			restoreFullDetailObject.speed = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Speed"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Message"].isNull())
			restoreFullDetailObject.message = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Message"].asString();
		restoreFull_.restoreFullDetails.push_back(restoreFullDetailObject);
	}
	auto restoreIncrDetailNode = value["RestoreIncrDetail"];
	if(!restoreIncrDetailNode["State"].isNull())
		restoreIncrDetail_.state = restoreIncrDetailNode["State"].asString();
	if(!restoreIncrDetailNode["StartTime"].isNull())
		restoreIncrDetail_.startTime = restoreIncrDetailNode["StartTime"].asString();
	if(!restoreIncrDetailNode["EndTime"].isNull())
		restoreIncrDetail_.endTime = restoreIncrDetailNode["EndTime"].asString();
	if(!restoreIncrDetailNode["RestoreStartTs"].isNull())
		restoreIncrDetail_.restoreStartTs = restoreIncrDetailNode["RestoreStartTs"].asString();
	if(!restoreIncrDetailNode["RestoredTs"].isNull())
		restoreIncrDetail_.restoredTs = restoreIncrDetailNode["RestoredTs"].asString();
	if(!restoreIncrDetailNode["RestoreDelay"].isNull())
		restoreIncrDetail_.restoreDelay = restoreIncrDetailNode["RestoreDelay"].asString();
	if(!restoreIncrDetailNode["Process"].isNull())
		restoreIncrDetail_.process = restoreIncrDetailNode["Process"].asString();
	auto allTables = value["Tables"]["Table"];
	for (const auto &item : allTables)
		tables_.push_back(item.asString());

}

DescribeRestoreTablesResult::RestoreSchema DescribeRestoreTablesResult::getRestoreSchema()const
{
	return restoreSchema_;
}

DescribeRestoreTablesResult::RestoreFull DescribeRestoreTablesResult::getRestoreFull()const
{
	return restoreFull_;
}

DescribeRestoreTablesResult::RestoreSummary DescribeRestoreTablesResult::getRestoreSummary()const
{
	return restoreSummary_;
}

std::vector<std::string> DescribeRestoreTablesResult::getTables()const
{
	return tables_;
}

DescribeRestoreTablesResult::RestoreIncrDetail DescribeRestoreTablesResult::getRestoreIncrDetail()const
{
	return restoreIncrDetail_;
}

