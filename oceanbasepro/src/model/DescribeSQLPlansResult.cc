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

#include <alibabacloud/oceanbasepro/model/DescribeSQLPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSQLPlansResult::DescribeSQLPlansResult() :
	ServiceResult()
{}

DescribeSQLPlansResult::DescribeSQLPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLPlansResult::~DescribeSQLPlansResult()
{}

void DescribeSQLPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSQLPlansNode = value["SQLPlans"]["Data"];
	for (auto valueSQLPlansData : allSQLPlansNode)
	{
		Data sQLPlansObject;
		if(!valueSQLPlansData["HitCount"].isNull())
			sQLPlansObject.hitCount = std::stoi(valueSQLPlansData["HitCount"].asString());
		if(!valueSQLPlansData["OutlineData"].isNull())
			sQLPlansObject.outlineData = valueSQLPlansData["OutlineData"].asString();
		if(!valueSQLPlansData["AvgExecutionMS"].isNull())
			sQLPlansObject.avgExecutionMS = std::stof(valueSQLPlansData["AvgExecutionMS"].asString());
		if(!valueSQLPlansData["PlanUnionHash"].isNull())
			sQLPlansObject.planUnionHash = valueSQLPlansData["PlanUnionHash"].asString();
		if(!valueSQLPlansData["OutlineId"].isNull())
			sQLPlansObject.outlineId = std::stol(valueSQLPlansData["OutlineId"].asString());
		if(!valueSQLPlansData["AvgExecutionTimeMS"].isNull())
			sQLPlansObject.avgExecutionTimeMS = std::stol(valueSQLPlansData["AvgExecutionTimeMS"].asString());
		if(!valueSQLPlansData["PlanId"].isNull())
			sQLPlansObject.planId = std::stoi(valueSQLPlansData["PlanId"].asString());
		if(!valueSQLPlansData["OutlineTime"].isNull())
			sQLPlansObject.outlineTime = std::stol(valueSQLPlansData["OutlineTime"].asString());
		if(!valueSQLPlansData["OutlineTimeUTCString"].isNull())
			sQLPlansObject.outlineTimeUTCString = valueSQLPlansData["OutlineTimeUTCString"].asString();
		if(!valueSQLPlansData["PlanFull"].isNull())
			sQLPlansObject.planFull = valueSQLPlansData["PlanFull"].asString();
		if(!valueSQLPlansData["NodeIp"].isNull())
			sQLPlansObject.nodeIp = valueSQLPlansData["NodeIp"].asString();
		if(!valueSQLPlansData["MergedVersion"].isNull())
			sQLPlansObject.mergedVersion = std::stoi(valueSQLPlansData["MergedVersion"].asString());
		if(!valueSQLPlansData["QuerySQL"].isNull())
			sQLPlansObject.querySQL = valueSQLPlansData["QuerySQL"].asString();
		if(!valueSQLPlansData["FirstLoadTimeUTCString"].isNull())
			sQLPlansObject.firstLoadTimeUTCString = valueSQLPlansData["FirstLoadTimeUTCString"].asString();
		if(!valueSQLPlansData["FirstLoadTime"].isNull())
			sQLPlansObject.firstLoadTime = std::stol(valueSQLPlansData["FirstLoadTime"].asString());
		if(!valueSQLPlansData["PlanInfo"].isNull())
			sQLPlansObject.planInfo = valueSQLPlansData["PlanInfo"].asString();
		sQLPlans_.push_back(sQLPlansObject);
	}

}

std::vector<DescribeSQLPlansResult::Data> DescribeSQLPlansResult::getSQLPlans()const
{
	return sQLPlans_;
}

