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

#include <alibabacloud/adb/model/DescribeElasticDailyPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeElasticDailyPlanResult::DescribeElasticDailyPlanResult() :
	ServiceResult()
{}

DescribeElasticDailyPlanResult::DescribeElasticDailyPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticDailyPlanResult::~DescribeElasticDailyPlanResult()
{}

void DescribeElasticDailyPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticDailyPlanListNode = value["ElasticDailyPlanList"]["ElasticDailyPlanInfo"];
	for (auto valueElasticDailyPlanListElasticDailyPlanInfo : allElasticDailyPlanListNode)
	{
		ElasticDailyPlanInfo elasticDailyPlanListObject;
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["Status"].isNull())
			elasticDailyPlanListObject.status = std::stoi(valueElasticDailyPlanListElasticDailyPlanInfo["Status"].asString());
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["Day"].isNull())
			elasticDailyPlanListObject.day = valueElasticDailyPlanListElasticDailyPlanInfo["Day"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["ResourcePoolName"].isNull())
			elasticDailyPlanListObject.resourcePoolName = valueElasticDailyPlanListElasticDailyPlanInfo["ResourcePoolName"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["StartTs"].isNull())
			elasticDailyPlanListObject.startTs = valueElasticDailyPlanListElasticDailyPlanInfo["StartTs"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["PlanEndTs"].isNull())
			elasticDailyPlanListObject.planEndTs = valueElasticDailyPlanListElasticDailyPlanInfo["PlanEndTs"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["PlanStartTs"].isNull())
			elasticDailyPlanListObject.planStartTs = valueElasticDailyPlanListElasticDailyPlanInfo["PlanStartTs"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["ElasticNodeNum"].isNull())
			elasticDailyPlanListObject.elasticNodeNum = std::stoi(valueElasticDailyPlanListElasticDailyPlanInfo["ElasticNodeNum"].asString());
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["EndTs"].isNull())
			elasticDailyPlanListObject.endTs = valueElasticDailyPlanListElasticDailyPlanInfo["EndTs"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["PlanName"].isNull())
			elasticDailyPlanListObject.planName = valueElasticDailyPlanListElasticDailyPlanInfo["PlanName"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["ElasticPlanType"].isNull())
			elasticDailyPlanListObject.elasticPlanType = valueElasticDailyPlanListElasticDailyPlanInfo["ElasticPlanType"].asString();
		if(!valueElasticDailyPlanListElasticDailyPlanInfo["ElasticPlanWorkerSpec"].isNull())
			elasticDailyPlanListObject.elasticPlanWorkerSpec = valueElasticDailyPlanListElasticDailyPlanInfo["ElasticPlanWorkerSpec"].asString();
		elasticDailyPlanList_.push_back(elasticDailyPlanListObject);
	}

}

std::vector<DescribeElasticDailyPlanResult::ElasticDailyPlanInfo> DescribeElasticDailyPlanResult::getElasticDailyPlanList()const
{
	return elasticDailyPlanList_;
}

