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

#include <alibabacloud/oceanbasepro/model/DescribeAnomalySQLListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeAnomalySQLListResult::DescribeAnomalySQLListResult() :
	ServiceResult()
{}

DescribeAnomalySQLListResult::DescribeAnomalySQLListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnomalySQLListResult::~DescribeAnomalySQLListResult()
{}

void DescribeAnomalySQLListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnomalySQLListNode = value["AnomalySQLList"]["Data"];
	for (auto valueAnomalySQLListData : allAnomalySQLListNode)
	{
		Data anomalySQLListObject;
		if(!valueAnomalySQLListData["Key"].isNull())
			anomalySQLListObject.key = std::stol(valueAnomalySQLListData["Key"].asString());
		if(!valueAnomalySQLListData["DiagnosisRule"].isNull())
			anomalySQLListObject.diagnosisRule = valueAnomalySQLListData["DiagnosisRule"].asString();
		if(!valueAnomalySQLListData["SQLText"].isNull())
			anomalySQLListObject.sQLText = valueAnomalySQLListData["SQLText"].asString();
		if(!valueAnomalySQLListData["Suggestion"].isNull())
			anomalySQLListObject.suggestion = valueAnomalySQLListData["Suggestion"].asString();
		if(!valueAnomalySQLListData["DbName"].isNull())
			anomalySQLListObject.dbName = valueAnomalySQLListData["DbName"].asString();
		if(!valueAnomalySQLListData["RequestTimeUTCString"].isNull())
			anomalySQLListObject.requestTimeUTCString = valueAnomalySQLListData["RequestTimeUTCString"].asString();
		if(!valueAnomalySQLListData["CpuTime"].isNull())
			anomalySQLListObject.cpuTime = std::stof(valueAnomalySQLListData["CpuTime"].asString());
		if(!valueAnomalySQLListData["SQLId"].isNull())
			anomalySQLListObject.sQLId = valueAnomalySQLListData["SQLId"].asString();
		if(!valueAnomalySQLListData["Diagnosis"].isNull())
			anomalySQLListObject.diagnosis = valueAnomalySQLListData["Diagnosis"].asString();
		if(!valueAnomalySQLListData["RequestTime"].isNull())
			anomalySQLListObject.requestTime = std::stof(valueAnomalySQLListData["RequestTime"].asString());
		if(!valueAnomalySQLListData["Executions"].isNull())
			anomalySQLListObject.executions = std::stol(valueAnomalySQLListData["Executions"].asString());
		if(!valueAnomalySQLListData["UserName"].isNull())
			anomalySQLListObject.userName = valueAnomalySQLListData["UserName"].asString();
		anomalySQLList_.push_back(anomalySQLListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeAnomalySQLListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAnomalySQLListResult::Data> DescribeAnomalySQLListResult::getAnomalySQLList()const
{
	return anomalySQLList_;
}

