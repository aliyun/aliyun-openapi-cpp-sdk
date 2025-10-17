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

#include <alibabacloud/polardb/model/DescribeCronJobPolicyServerlessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeCronJobPolicyServerlessResult::DescribeCronJobPolicyServerlessResult() :
	ServiceResult()
{}

DescribeCronJobPolicyServerlessResult::DescribeCronJobPolicyServerlessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCronJobPolicyServerlessResult::~DescribeCronJobPolicyServerlessResult()
{}

void DescribeCronJobPolicyServerlessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DriverCronJobAttrbute"];
	for (auto valueItemsDriverCronJobAttrbute : allItemsNode)
	{
		DriverCronJobAttrbute itemsObject;
		if(!valueItemsDriverCronJobAttrbute["JobId"].isNull())
			itemsObject.jobId = valueItemsDriverCronJobAttrbute["JobId"].asString();
		if(!valueItemsDriverCronJobAttrbute["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDriverCronJobAttrbute["DBClusterId"].asString();
		if(!valueItemsDriverCronJobAttrbute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDriverCronJobAttrbute["RegionId"].asString();
		if(!valueItemsDriverCronJobAttrbute["StartTime"].isNull())
			itemsObject.startTime = valueItemsDriverCronJobAttrbute["StartTime"].asString();
		if(!valueItemsDriverCronJobAttrbute["EndTime"].isNull())
			itemsObject.endTime = valueItemsDriverCronJobAttrbute["EndTime"].asString();
		if(!valueItemsDriverCronJobAttrbute["Status"].isNull())
			itemsObject.status = valueItemsDriverCronJobAttrbute["Status"].asString();
		if(!valueItemsDriverCronJobAttrbute["OrderId"].isNull())
			itemsObject.orderId = valueItemsDriverCronJobAttrbute["OrderId"].asString();
		if(!valueItemsDriverCronJobAttrbute["CronExpression"].isNull())
			itemsObject.cronExpression = valueItemsDriverCronJobAttrbute["CronExpression"].asString();
		if(!valueItemsDriverCronJobAttrbute["Action"].isNull())
			itemsObject.action = valueItemsDriverCronJobAttrbute["Action"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleMin"].isNull())
			itemsObject.scaleMin = valueItemsDriverCronJobAttrbute["ScaleMin"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleMax"].isNull())
			itemsObject.scaleMax = valueItemsDriverCronJobAttrbute["ScaleMax"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleRoNumMin"].isNull())
			itemsObject.scaleRoNumMin = valueItemsDriverCronJobAttrbute["ScaleRoNumMin"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleRoNumMax"].isNull())
			itemsObject.scaleRoNumMax = valueItemsDriverCronJobAttrbute["ScaleRoNumMax"].asString();
		if(!valueItemsDriverCronJobAttrbute["AllowShutDown"].isNull())
			itemsObject.allowShutDown = valueItemsDriverCronJobAttrbute["AllowShutDown"].asString();
		if(!valueItemsDriverCronJobAttrbute["SecondsUntilAutoPause"].isNull())
			itemsObject.secondsUntilAutoPause = valueItemsDriverCronJobAttrbute["SecondsUntilAutoPause"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleApRoNumMin"].isNull())
			itemsObject.scaleApRoNumMin = valueItemsDriverCronJobAttrbute["ScaleApRoNumMin"].asString();
		if(!valueItemsDriverCronJobAttrbute["ScaleApRoNumMax"].isNull())
			itemsObject.scaleApRoNumMax = valueItemsDriverCronJobAttrbute["ScaleApRoNumMax"].asString();
		if(!valueItemsDriverCronJobAttrbute["ServerlessRuleMode"].isNull())
			itemsObject.serverlessRuleMode = valueItemsDriverCronJobAttrbute["ServerlessRuleMode"].asString();
		if(!valueItemsDriverCronJobAttrbute["ServerlessRuleCpuEnlargeThreshold"].isNull())
			itemsObject.serverlessRuleCpuEnlargeThreshold = valueItemsDriverCronJobAttrbute["ServerlessRuleCpuEnlargeThreshold"].asString();
		if(!valueItemsDriverCronJobAttrbute["ServerlessRuleCpuShrinkThreshold"].isNull())
			itemsObject.serverlessRuleCpuShrinkThreshold = valueItemsDriverCronJobAttrbute["ServerlessRuleCpuShrinkThreshold"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCronJobPolicyServerlessResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeCronJobPolicyServerlessResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCronJobPolicyServerlessResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCronJobPolicyServerlessResult::DriverCronJobAttrbute> DescribeCronJobPolicyServerlessResult::getItems()const
{
	return items_;
}

