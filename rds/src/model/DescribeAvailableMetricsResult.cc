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

#include <alibabacloud/rds/model/DescribeAvailableMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAvailableMetricsResult::DescribeAvailableMetricsResult() :
	ServiceResult()
{}

DescribeAvailableMetricsResult::DescribeAvailableMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableMetricsResult::~DescribeAvailableMetricsResult()
{}

void DescribeAvailableMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Metrics"];
	for (auto valueItemsMetrics : allItemsNode)
	{
		Metrics itemsObject;
		if(!valueItemsMetrics["DbType"].isNull())
			itemsObject.dbType = valueItemsMetrics["DbType"].asString();
		if(!valueItemsMetrics["Description"].isNull())
			itemsObject.description = valueItemsMetrics["Description"].asString();
		if(!valueItemsMetrics["Dimension"].isNull())
			itemsObject.dimension = valueItemsMetrics["Dimension"].asString();
		if(!valueItemsMetrics["GroupKey"].isNull())
			itemsObject.groupKey = valueItemsMetrics["GroupKey"].asString();
		if(!valueItemsMetrics["GroupKeyType"].isNull())
			itemsObject.groupKeyType = valueItemsMetrics["GroupKeyType"].asString();
		if(!valueItemsMetrics["Method"].isNull())
			itemsObject.method = valueItemsMetrics["Method"].asString();
		if(!valueItemsMetrics["MetricsKey"].isNull())
			itemsObject.metricsKey = valueItemsMetrics["MetricsKey"].asString();
		if(!valueItemsMetrics["MetricsKeyAlias"].isNull())
			itemsObject.metricsKeyAlias = valueItemsMetrics["MetricsKeyAlias"].asString();
		if(!valueItemsMetrics["SortRule"].isNull())
			itemsObject.sortRule = std::stoi(valueItemsMetrics["SortRule"].asString());
		if(!valueItemsMetrics["Unit"].isNull())
			itemsObject.unit = valueItemsMetrics["Unit"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeAvailableMetricsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeAvailableMetricsResult::Metrics> DescribeAvailableMetricsResult::getItems()const
{
	return items_;
}

std::string DescribeAvailableMetricsResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

