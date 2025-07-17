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

#include <alibabacloud/paifeaturestore/model/ListDatasourceFeatureViewsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListDatasourceFeatureViewsResult::ListDatasourceFeatureViewsResult() :
	ServiceResult()
{}

ListDatasourceFeatureViewsResult::ListDatasourceFeatureViewsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatasourceFeatureViewsResult::~ListDatasourceFeatureViewsResult()
{}

void ListDatasourceFeatureViewsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeatureViewsNode = value["FeatureViews"]["DatasourceFeatureViews"];
	for (auto valueFeatureViewsDatasourceFeatureViews : allFeatureViewsNode)
	{
		DatasourceFeatureViews featureViewsObject;
		if(!valueFeatureViewsDatasourceFeatureViews["FeatureViewId"].isNull())
			featureViewsObject.featureViewId = valueFeatureViewsDatasourceFeatureViews["FeatureViewId"].asString();
		if(!valueFeatureViewsDatasourceFeatureViews["Name"].isNull())
			featureViewsObject.name = valueFeatureViewsDatasourceFeatureViews["Name"].asString();
		if(!valueFeatureViewsDatasourceFeatureViews["ProjectName"].isNull())
			featureViewsObject.projectName = valueFeatureViewsDatasourceFeatureViews["ProjectName"].asString();
		if(!valueFeatureViewsDatasourceFeatureViews["Type"].isNull())
			featureViewsObject.type = valueFeatureViewsDatasourceFeatureViews["Type"].asString();
		if(!valueFeatureViewsDatasourceFeatureViews["FeatureEntityName"].isNull())
			featureViewsObject.featureEntityName = valueFeatureViewsDatasourceFeatureViews["FeatureEntityName"].asString();
		if(!valueFeatureViewsDatasourceFeatureViews["TTL"].isNull())
			featureViewsObject.tTL = std::stoi(valueFeatureViewsDatasourceFeatureViews["TTL"].asString());
		if(!valueFeatureViewsDatasourceFeatureViews["Config"].isNull())
			featureViewsObject.config = valueFeatureViewsDatasourceFeatureViews["Config"].asString();
		auto usageStatisticsNode = value["UsageStatistics"];
		if(!usageStatisticsNode["RowCount"].isNull())
			featureViewsObject.usageStatistics.rowCount = std::stol(usageStatisticsNode["RowCount"].asString());
		if(!usageStatisticsNode["DiskUsage"].isNull())
			featureViewsObject.usageStatistics.diskUsage = usageStatisticsNode["DiskUsage"].asString();
		if(!usageStatisticsNode["MemoryUsage"].isNull())
			featureViewsObject.usageStatistics.memoryUsage = usageStatisticsNode["MemoryUsage"].asString();
		auto allReadWriteCountNode = usageStatisticsNode["ReadWriteCount"]["ReadWriteCountItem"];
		for (auto usageStatisticsNodeReadWriteCountReadWriteCountItem : allReadWriteCountNode)
		{
			DatasourceFeatureViews::UsageStatistics::ReadWriteCountItem readWriteCountItemObject;
			if(!usageStatisticsNodeReadWriteCountReadWriteCountItem["Date"].isNull())
				readWriteCountItemObject.date = usageStatisticsNodeReadWriteCountReadWriteCountItem["Date"].asString();
			if(!usageStatisticsNodeReadWriteCountReadWriteCountItem["WriteCount"].isNull())
				readWriteCountItemObject.writeCount = std::stol(usageStatisticsNodeReadWriteCountReadWriteCountItem["WriteCount"].asString());
			if(!usageStatisticsNodeReadWriteCountReadWriteCountItem["ReadCount"].isNull())
				readWriteCountItemObject.readCount = std::stol(usageStatisticsNodeReadWriteCountReadWriteCountItem["ReadCount"].asString());
			featureViewsObject.usageStatistics.readWriteCount.push_back(readWriteCountItemObject);
		}
		featureViews_.push_back(featureViewsObject);
	}
	auto totalUsageStatisticsNode = value["TotalUsageStatistics"];
	if(!totalUsageStatisticsNode["TotalDiskUsage"].isNull())
		totalUsageStatistics_.totalDiskUsage = totalUsageStatisticsNode["TotalDiskUsage"].asString();
	if(!totalUsageStatisticsNode["TotalMemoryUsage"].isNull())
		totalUsageStatistics_.totalMemoryUsage = totalUsageStatisticsNode["TotalMemoryUsage"].asString();
	auto allTotalReadWriteCountNode = totalUsageStatisticsNode["TotalReadWriteCount"]["TotalReadWriteCountItem"];
	for (auto totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem : allTotalReadWriteCountNode)
	{
		TotalUsageStatistics::TotalReadWriteCountItem totalReadWriteCountItemObject;
		if(!totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["Date"].isNull())
			totalReadWriteCountItemObject.date = totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["Date"].asString();
		if(!totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["TotalWriteCount"].isNull())
			totalReadWriteCountItemObject.totalWriteCount = std::stol(totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["TotalWriteCount"].asString());
		if(!totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["TotalReadCount"].isNull())
			totalReadWriteCountItemObject.totalReadCount = std::stol(totalUsageStatisticsNodeTotalReadWriteCountTotalReadWriteCountItem["TotalReadCount"].asString());
		totalUsageStatistics_.totalReadWriteCount.push_back(totalReadWriteCountItemObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListDatasourceFeatureViewsResult::DatasourceFeatureViews> ListDatasourceFeatureViewsResult::getFeatureViews()const
{
	return featureViews_;
}

long ListDatasourceFeatureViewsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDatasourceFeatureViewsResult::getRequestId()const
{
	return requestId_;
}

ListDatasourceFeatureViewsResult::TotalUsageStatistics ListDatasourceFeatureViewsResult::getTotalUsageStatistics()const
{
	return totalUsageStatistics_;
}

