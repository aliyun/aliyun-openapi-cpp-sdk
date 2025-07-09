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

#include <alibabacloud/oceanbasepro/model/DescribeSQLTuningAdvicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSQLTuningAdvicesResult::DescribeSQLTuningAdvicesResult() :
	ServiceResult()
{}

DescribeSQLTuningAdvicesResult::DescribeSQLTuningAdvicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLTuningAdvicesResult::~DescribeSQLTuningAdvicesResult()
{}

void DescribeSQLTuningAdvicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["ColumnNames"].isNull())
			dataObject.columnNames = valueDataDataItem["ColumnNames"].asString();
		if(!valueDataDataItem["LocalityType"].isNull())
			dataObject.localityType = valueDataDataItem["LocalityType"].asString();
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
		if(!valueDataDataItem["Table"].isNull())
			dataObject.table = valueDataDataItem["Table"].asString();
		auto allColumnsNode = valueDataDataItem["Columns"]["ColumnsItem"];
		for (auto valueDataDataItemColumnsColumnsItem : allColumnsNode)
		{
			DataItem::ColumnsItem columnsObject;
			if(!valueDataDataItemColumnsColumnsItem["ColumnName"].isNull())
				columnsObject.columnName = valueDataDataItemColumnsColumnsItem["ColumnName"].asString();
			if(!valueDataDataItemColumnsColumnsItem["Ndv"].isNull())
				columnsObject.ndv = valueDataDataItemColumnsColumnsItem["Ndv"].asString();
			if(!valueDataDataItemColumnsColumnsItem["MinValue"].isNull())
				columnsObject.minValue = valueDataDataItemColumnsColumnsItem["MinValue"].asString();
			if(!valueDataDataItemColumnsColumnsItem["MaxValue"].isNull())
				columnsObject.maxValue = valueDataDataItemColumnsColumnsItem["MaxValue"].asString();
			dataObject.columns.push_back(columnsObject);
		}
		auto planNode = value["Plan"];
		if(!planNode["Executions"].isNull())
			dataObject.plan.executions = std::stol(planNode["Executions"].asString());
		if(!planNode["AvgCpuTime"].isNull())
			dataObject.plan.avgCpuTime = std::stof(planNode["AvgCpuTime"].asString());
		if(!planNode["PlanHash"].isNull())
			dataObject.plan.planHash = planNode["PlanHash"].asString();
		if(!planNode["TimeoutPercentage"].isNull())
			dataObject.plan.timeoutPercentage = std::stof(planNode["TimeoutPercentage"].asString());
		if(!planNode["AvgConcurrencyWaitTime"].isNull())
			dataObject.plan.avgConcurrencyWaitTime = std::stof(planNode["AvgConcurrencyWaitTime"].asString());
		if(!planNode["FirstLoadTimeUs"].isNull())
			dataObject.plan.firstLoadTimeUs = std::stol(planNode["FirstLoadTimeUs"].asString());
		if(!planNode["AvgDiskWrites"].isNull())
			dataObject.plan.avgDiskWrites = std::stof(planNode["AvgDiskWrites"].asString());
		if(!planNode["AvgUserIoWaitTime"].isNull())
			dataObject.plan.avgUserIoWaitTime = std::stof(planNode["AvgUserIoWaitTime"].asString());
		if(!planNode["PlanSize"].isNull())
			dataObject.plan.planSize = std::stol(planNode["PlanSize"].asString());
		if(!planNode["ServerSn"].isNull())
			dataObject.plan.serverSn = planNode["ServerSn"].asString();
		if(!planNode["OutlineData"].isNull())
			dataObject.plan.outlineData = planNode["OutlineData"].asString();
		if(!planNode["PlanType"].isNull())
			dataObject.plan.planType = planNode["PlanType"].asString();
		if(!planNode["ObDbId"].isNull())
			dataObject.plan.obDbId = std::stol(planNode["ObDbId"].asString());
		if(!planNode["HitPercentage"].isNull())
			dataObject.plan.hitPercentage = std::stof(planNode["HitPercentage"].asString());
		if(!planNode["AvgBufferGets"].isNull())
			dataObject.plan.avgBufferGets = std::stof(planNode["AvgBufferGets"].asString());
		if(!planNode["ExecPs"].isNull())
			dataObject.plan.execPs = std::stof(planNode["ExecPs"].asString());
		if(!planNode["DelayedLargeQueryPercentage"].isNull())
			dataObject.plan.delayedLargeQueryPercentage = std::stof(planNode["DelayedLargeQueryPercentage"].asString());
		if(!planNode["TableScan"].isNull())
			dataObject.plan.tableScan = planNode["TableScan"].asString() == "true";
		if(!planNode["LargeQueryPercentage"].isNull())
			dataObject.plan.largeQueryPercentage = std::stof(planNode["LargeQueryPercentage"].asString());
		if(!planNode["SchemaVersion"].isNull())
			dataObject.plan.schemaVersion = std::stol(planNode["SchemaVersion"].asString());
		if(!planNode["PlanId"].isNull())
			dataObject.plan.planId = std::stol(planNode["PlanId"].asString());
		if(!planNode["FirstLoadTime"].isNull())
			dataObject.plan.firstLoadTime = planNode["FirstLoadTime"].asString();
		if(!planNode["AvgRowProcessed"].isNull())
			dataObject.plan.avgRowProcessed = std::stof(planNode["AvgRowProcessed"].asString());
		if(!planNode["MergedVersion"].isNull())
			dataObject.plan.mergedVersion = std::stol(planNode["MergedVersion"].asString());
		if(!planNode["HitDiagnosis"].isNull())
			dataObject.plan.hitDiagnosis = planNode["HitDiagnosis"].asString() == "true";
		if(!planNode["Uid"].isNull())
			dataObject.plan.uid = planNode["Uid"].asString();
		if(!planNode["AvgApplicationWaitTime"].isNull())
			dataObject.plan.avgApplicationWaitTime = std::stof(planNode["AvgApplicationWaitTime"].asString());
		if(!planNode["CollectTimeUs"].isNull())
			dataObject.plan.collectTimeUs = std::stol(planNode["CollectTimeUs"].asString());
		if(!planNode["AvgElapsedTime"].isNull())
			dataObject.plan.avgElapsedTime = std::stof(planNode["AvgElapsedTime"].asString());
		if(!planNode["ObServerId"].isNull())
			dataObject.plan.obServerId = std::stol(planNode["ObServerId"].asString());
		if(!planNode["OutlineId"].isNull())
			dataObject.plan.outlineId = std::stol(planNode["OutlineId"].asString());
		if(!planNode["AvgDiskReads"].isNull())
			dataObject.plan.avgDiskReads = std::stof(planNode["AvgDiskReads"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeSQLTuningAdvicesResult::DataItem> DescribeSQLTuningAdvicesResult::getData()const
{
	return data_;
}

