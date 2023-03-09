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

#include <alibabacloud/adb/model/DescribeElasticPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeElasticPlanResult::DescribeElasticPlanResult() :
	ServiceResult()
{}

DescribeElasticPlanResult::DescribeElasticPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticPlanResult::~DescribeElasticPlanResult()
{}

void DescribeElasticPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticPlanListNode = value["ElasticPlanList"]["ElasticPlanInfo"];
	for (auto valueElasticPlanListElasticPlanInfo : allElasticPlanListNode)
	{
		ElasticPlanInfo elasticPlanListObject;
		if(!valueElasticPlanListElasticPlanInfo["EndTime"].isNull())
			elasticPlanListObject.endTime = valueElasticPlanListElasticPlanInfo["EndTime"].asString();
		if(!valueElasticPlanListElasticPlanInfo["WeeklyRepeat"].isNull())
			elasticPlanListObject.weeklyRepeat = valueElasticPlanListElasticPlanInfo["WeeklyRepeat"].asString();
		if(!valueElasticPlanListElasticPlanInfo["StartTime"].isNull())
			elasticPlanListObject.startTime = valueElasticPlanListElasticPlanInfo["StartTime"].asString();
		if(!valueElasticPlanListElasticPlanInfo["ResourcePoolName"].isNull())
			elasticPlanListObject.resourcePoolName = valueElasticPlanListElasticPlanInfo["ResourcePoolName"].asString();
		if(!valueElasticPlanListElasticPlanInfo["StartDay"].isNull())
			elasticPlanListObject.startDay = valueElasticPlanListElasticPlanInfo["StartDay"].asString();
		if(!valueElasticPlanListElasticPlanInfo["ElasticNodeNum"].isNull())
			elasticPlanListObject.elasticNodeNum = std::stoi(valueElasticPlanListElasticPlanInfo["ElasticNodeNum"].asString());
		if(!valueElasticPlanListElasticPlanInfo["Enable"].isNull())
			elasticPlanListObject.enable = valueElasticPlanListElasticPlanInfo["Enable"].asString() == "true";
		if(!valueElasticPlanListElasticPlanInfo["EndDay"].isNull())
			elasticPlanListObject.endDay = valueElasticPlanListElasticPlanInfo["EndDay"].asString();
		if(!valueElasticPlanListElasticPlanInfo["PlanName"].isNull())
			elasticPlanListObject.planName = valueElasticPlanListElasticPlanInfo["PlanName"].asString();
		if(!valueElasticPlanListElasticPlanInfo["ElasticPlanType"].isNull())
			elasticPlanListObject.elasticPlanType = valueElasticPlanListElasticPlanInfo["ElasticPlanType"].asString();
		if(!valueElasticPlanListElasticPlanInfo["ElasticPlanWorkerSpec"].isNull())
			elasticPlanListObject.elasticPlanWorkerSpec = valueElasticPlanListElasticPlanInfo["ElasticPlanWorkerSpec"].asString();
		elasticPlanList_.push_back(elasticPlanListObject);
	}

}

std::vector<DescribeElasticPlanResult::ElasticPlanInfo> DescribeElasticPlanResult::getElasticPlanList()const
{
	return elasticPlanList_;
}

