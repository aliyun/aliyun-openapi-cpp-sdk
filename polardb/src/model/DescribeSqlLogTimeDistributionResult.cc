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

#include <alibabacloud/polardb/model/DescribeSqlLogTimeDistributionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSqlLogTimeDistributionResult::DescribeSqlLogTimeDistributionResult() :
	ServiceResult()
{}

DescribeSqlLogTimeDistributionResult::DescribeSqlLogTimeDistributionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlLogTimeDistributionResult::~DescribeSqlLogTimeDistributionResult()
{}

void DescribeSqlLogTimeDistributionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Distribution"];
	for (auto valueItemsDistribution : allItemsNode)
	{
		Distribution itemsObject;
		if(!valueItemsDistribution["SelectCounts"].isNull())
			itemsObject.selectCounts = std::stol(valueItemsDistribution["SelectCounts"].asString());
		if(!valueItemsDistribution["QueryStartTime"].isNull())
			itemsObject.queryStartTime = valueItemsDistribution["QueryStartTime"].asString();
		if(!valueItemsDistribution["InsertCounts"].isNull())
			itemsObject.insertCounts = std::stol(valueItemsDistribution["InsertCounts"].asString());
		if(!valueItemsDistribution["TotalConsume"].isNull())
			itemsObject.totalConsume = std::stol(valueItemsDistribution["TotalConsume"].asString());
		if(!valueItemsDistribution["TotalScanRows"].isNull())
			itemsObject.totalScanRows = std::stol(valueItemsDistribution["TotalScanRows"].asString());
		if(!valueItemsDistribution["LoginCounts"].isNull())
			itemsObject.loginCounts = std::stol(valueItemsDistribution["LoginCounts"].asString());
		if(!valueItemsDistribution["DeleteCounts"].isNull())
			itemsObject.deleteCounts = std::stol(valueItemsDistribution["DeleteCounts"].asString());
		if(!valueItemsDistribution["TotalUpdateRows"].isNull())
			itemsObject.totalUpdateRows = std::stol(valueItemsDistribution["TotalUpdateRows"].asString());
		if(!valueItemsDistribution["TotalCounts"].isNull())
			itemsObject.totalCounts = std::stol(valueItemsDistribution["TotalCounts"].asString());
		if(!valueItemsDistribution["UpdateCounts"].isNull())
			itemsObject.updateCounts = std::stol(valueItemsDistribution["UpdateCounts"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TemplateHash"].isNull())
		templateHash_ = std::stol(value["TemplateHash"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Finish"].isNull())
		finish_ = value["Finish"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

long DescribeSqlLogTimeDistributionResult::getTemplateHash()const
{
	return templateHash_;
}

int DescribeSqlLogTimeDistributionResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

std::string DescribeSqlLogTimeDistributionResult::getEndTime()const
{
	return endTime_;
}

int DescribeSqlLogTimeDistributionResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSqlLogTimeDistributionResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeSqlLogTimeDistributionResult::Distribution> DescribeSqlLogTimeDistributionResult::getItems()const
{
	return items_;
}

std::string DescribeSqlLogTimeDistributionResult::getFinish()const
{
	return finish_;
}

std::string DescribeSqlLogTimeDistributionResult::getJobId()const
{
	return jobId_;
}

std::string DescribeSqlLogTimeDistributionResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

