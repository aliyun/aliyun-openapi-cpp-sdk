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

#include <alibabacloud/sophonsoar/model/DescribePlaybookMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePlaybookMetricsResult::DescribePlaybookMetricsResult() :
	ServiceResult()
{}

DescribePlaybookMetricsResult::DescribePlaybookMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlaybookMetricsResult::~DescribePlaybookMetricsResult()
{}

void DescribePlaybookMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto metricsNode = value["Metrics"];
	if(!metricsNode["DisplayName"].isNull())
		metrics_.displayName = metricsNode["DisplayName"].asString();
	if(!metricsNode["PlaybookUuid"].isNull())
		metrics_.playbookUuid = metricsNode["PlaybookUuid"].asString();
	if(!metricsNode["OwnType"].isNull())
		metrics_.ownType = metricsNode["OwnType"].asString();
	if(!metricsNode["Active"].isNull())
		metrics_.active = std::stoi(metricsNode["Active"].asString());
	if(!metricsNode["LastRuntime"].isNull())
		metrics_.lastRuntime = std::stol(metricsNode["LastRuntime"].asString());
	if(!metricsNode["Permission"].isNull())
		metrics_.permission = std::stoi(metricsNode["Permission"].asString());
	if(!metricsNode["GmtCreate"].isNull())
		metrics_.gmtCreate = std::stol(metricsNode["GmtCreate"].asString());
	if(!metricsNode["HistoryMd5"].isNull())
		metrics_.historyMd5 = std::stoi(metricsNode["HistoryMd5"].asString());
	if(!metricsNode["SuccNum"].isNull())
		metrics_.succNum = std::stoi(metricsNode["SuccNum"].asString());
	if(!metricsNode["FailNum"].isNull())
		metrics_.failNum = std::stoi(metricsNode["FailNum"].asString());
	if(!metricsNode["FailRate"].isNull())
		metrics_.failRate = metricsNode["FailRate"].asString();
	if(!metricsNode["PlaybookStatus"].isNull())
		metrics_.playbookStatus = std::stoi(metricsNode["PlaybookStatus"].asString());
	if(!metricsNode["Description"].isNull())
		metrics_.description = metricsNode["Description"].asString();

}

DescribePlaybookMetricsResult::Metrics DescribePlaybookMetricsResult::getMetrics()const
{
	return metrics_;
}

