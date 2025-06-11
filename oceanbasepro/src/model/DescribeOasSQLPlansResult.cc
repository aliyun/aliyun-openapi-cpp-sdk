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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOasSQLPlansResult::DescribeOasSQLPlansResult() :
	ServiceResult()
{}

DescribeOasSQLPlansResult::DescribeOasSQLPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOasSQLPlansResult::~DescribeOasSQLPlansResult()
{}

void DescribeOasSQLPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["PlanHash"].isNull())
			dataObject.planHash = valueDataDataItem["PlanHash"].asString();
		if(!valueDataDataItem["MergedVersion"].isNull())
			dataObject.mergedVersion = std::stol(valueDataDataItem["MergedVersion"].asString());
		if(!valueDataDataItem["FirstLoadTime"].isNull())
			dataObject.firstLoadTime = valueDataDataItem["FirstLoadTime"].asString();
		if(!valueDataDataItem["PlanType"].isNull())
			dataObject.planType = valueDataDataItem["PlanType"].asString();
		if(!valueDataDataItem["HitDiagnosis"].isNull())
			dataObject.hitDiagnosis = valueDataDataItem["HitDiagnosis"].asString() == "true";
		if(!valueDataDataItem["HitPercentage"].isNull())
			dataObject.hitPercentage = valueDataDataItem["HitPercentage"].asString();
		if(!valueDataDataItem["AvgCpuTime"].isNull())
			dataObject.avgCpuTime = valueDataDataItem["AvgCpuTime"].asString();
		if(!valueDataDataItem["Executions"].isNull())
			dataObject.executions = std::stol(valueDataDataItem["Executions"].asString());
		if(!valueDataDataItem["PlanUnionHash"].isNull())
			dataObject.planUnionHash = valueDataDataItem["PlanUnionHash"].asString();
		if(!valueDataDataItem["QuerySql"].isNull())
			dataObject.querySql = valueDataDataItem["QuerySql"].asString();
		if(!valueDataDataItem["Bounded"].isNull())
			dataObject.bounded = valueDataDataItem["Bounded"].asString() == "true";
		if(!valueDataDataItem["TableScan"].isNull())
			dataObject.tableScan = valueDataDataItem["TableScan"].asString() == "true";
		if(!valueDataDataItem["OutlineId"].isNull())
			dataObject.outlineId = valueDataDataItem["OutlineId"].asString();
		if(!valueDataDataItem["OutlineStatus"].isNull())
			dataObject.outlineStatus = valueDataDataItem["OutlineStatus"].asString();
		auto allPlansNode = valueDataDataItem["Plans"]["PlansItem"];
		for (auto valueDataDataItemPlansPlansItem : allPlansNode)
		{
			DataItem::PlansItem plansObject;
			if(!valueDataDataItemPlansPlansItem["Uid"].isNull())
				plansObject.uid = valueDataDataItemPlansPlansItem["Uid"].asString();
			if(!valueDataDataItemPlansPlansItem["PlanId"].isNull())
				plansObject.planId = std::stol(valueDataDataItemPlansPlansItem["PlanId"].asString());
			if(!valueDataDataItemPlansPlansItem["FirstLoadTime"].isNull())
				plansObject.firstLoadTime = valueDataDataItemPlansPlansItem["FirstLoadTime"].asString();
			if(!valueDataDataItemPlansPlansItem["PlanType"].isNull())
				plansObject.planType = valueDataDataItemPlansPlansItem["PlanType"].asString();
			if(!valueDataDataItemPlansPlansItem["PlanHash"].isNull())
				plansObject.planHash = valueDataDataItemPlansPlansItem["PlanHash"].asString();
			if(!valueDataDataItemPlansPlansItem["PlanSize"].isNull())
				plansObject.planSize = std::stol(valueDataDataItemPlansPlansItem["PlanSize"].asString());
			if(!valueDataDataItemPlansPlansItem["SchemaVersion"].isNull())
				plansObject.schemaVersion = std::stol(valueDataDataItemPlansPlansItem["SchemaVersion"].asString());
			if(!valueDataDataItemPlansPlansItem["MergedVersion"].isNull())
				plansObject.mergedVersion = std::stol(valueDataDataItemPlansPlansItem["MergedVersion"].asString());
			if(!valueDataDataItemPlansPlansItem["ObServerId"].isNull())
				plansObject.obServerId = std::stol(valueDataDataItemPlansPlansItem["ObServerId"].asString());
			if(!valueDataDataItemPlansPlansItem["ObDbId"].isNull())
				plansObject.obDbId = std::stol(valueDataDataItemPlansPlansItem["ObDbId"].asString());
			if(!valueDataDataItemPlansPlansItem["ServerId"].isNull())
				plansObject.serverId = std::stol(valueDataDataItemPlansPlansItem["ServerId"].asString());
			if(!valueDataDataItemPlansPlansItem["FirstLoadTimeUs"].isNull())
				plansObject.firstLoadTimeUs = std::stol(valueDataDataItemPlansPlansItem["FirstLoadTimeUs"].asString());
			if(!valueDataDataItemPlansPlansItem["HitDiagnosis"].isNull())
				plansObject.hitDiagnosis = valueDataDataItemPlansPlansItem["HitDiagnosis"].asString() == "true";
			if(!valueDataDataItemPlansPlansItem["OutlineData"].isNull())
				plansObject.outlineData = valueDataDataItemPlansPlansItem["OutlineData"].asString();
			if(!valueDataDataItemPlansPlansItem["OutlineId"].isNull())
				plansObject.outlineId = std::stol(valueDataDataItemPlansPlansItem["OutlineId"].asString());
			if(!valueDataDataItemPlansPlansItem["CollectTimeUs"].isNull())
				plansObject.collectTimeUs = std::stol(valueDataDataItemPlansPlansItem["CollectTimeUs"].asString());
			if(!valueDataDataItemPlansPlansItem["Server"].isNull())
				plansObject.server = valueDataDataItemPlansPlansItem["Server"].asString();
			if(!valueDataDataItemPlansPlansItem["HitPercentage"].isNull())
				plansObject.hitPercentage = valueDataDataItemPlansPlansItem["HitPercentage"].asString();
			if(!valueDataDataItemPlansPlansItem["Executions"].isNull())
				plansObject.executions = std::stol(valueDataDataItemPlansPlansItem["Executions"].asString());
			if(!valueDataDataItemPlansPlansItem["ExecPs"].isNull())
				plansObject.execPs = valueDataDataItemPlansPlansItem["ExecPs"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgDiskReads"].isNull())
				plansObject.avgDiskReads = valueDataDataItemPlansPlansItem["AvgDiskReads"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgDiskWrites"].isNull())
				plansObject.avgDiskWrites = valueDataDataItemPlansPlansItem["AvgDiskWrites"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgBufferGets"].isNull())
				plansObject.avgBufferGets = valueDataDataItemPlansPlansItem["AvgBufferGets"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgApplicationWaitTime"].isNull())
				plansObject.avgApplicationWaitTime = valueDataDataItemPlansPlansItem["AvgApplicationWaitTime"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgConcurrencyWaitTime"].isNull())
				plansObject.avgConcurrencyWaitTime = valueDataDataItemPlansPlansItem["AvgConcurrencyWaitTime"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgUserIoWaitTime"].isNull())
				plansObject.avgUserIoWaitTime = valueDataDataItemPlansPlansItem["AvgUserIoWaitTime"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgRowProcessed"].isNull())
				plansObject.avgRowProcessed = valueDataDataItemPlansPlansItem["AvgRowProcessed"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgElapsedTime"].isNull())
				plansObject.avgElapsedTime = valueDataDataItemPlansPlansItem["AvgElapsedTime"].asString();
			if(!valueDataDataItemPlansPlansItem["AvgCpuTime"].isNull())
				plansObject.avgCpuTime = valueDataDataItemPlansPlansItem["AvgCpuTime"].asString();
			if(!valueDataDataItemPlansPlansItem["LargeQueryPercentage"].isNull())
				plansObject.largeQueryPercentage = valueDataDataItemPlansPlansItem["LargeQueryPercentage"].asString();
			if(!valueDataDataItemPlansPlansItem["DelayedLargeQueryPercentage"].isNull())
				plansObject.delayedLargeQueryPercentage = valueDataDataItemPlansPlansItem["DelayedLargeQueryPercentage"].asString();
			if(!valueDataDataItemPlansPlansItem["TimeoutPercentage"].isNull())
				plansObject.timeoutPercentage = valueDataDataItemPlansPlansItem["TimeoutPercentage"].asString();
			if(!valueDataDataItemPlansPlansItem["TableScan"].isNull())
				plansObject.tableScan = valueDataDataItemPlansPlansItem["TableScan"].asString() == "true";
			if(!valueDataDataItemPlansPlansItem["PlanUnionHash"].isNull())
				plansObject.planUnionHash = valueDataDataItemPlansPlansItem["PlanUnionHash"].asString();
			if(!valueDataDataItemPlansPlansItem["SqlId"].isNull())
				plansObject.sqlId = valueDataDataItemPlansPlansItem["SqlId"].asString();
			if(!valueDataDataItemPlansPlansItem["SqlText"].isNull())
				plansObject.sqlText = valueDataDataItemPlansPlansItem["SqlText"].asString();
			dataObject.plans.push_back(plansObject);
		}
		auto planExplainNode = value["PlanExplain"];
		if(!planExplainNode["PlanJsonString"].isNull())
			dataObject.planExplain.planJsonString = planExplainNode["PlanJsonString"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeOasSQLPlansResult::DataItem> DescribeOasSQLPlansResult::getData()const
{
	return data_;
}

