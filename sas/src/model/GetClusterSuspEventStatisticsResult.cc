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

#include <alibabacloud/sas/model/GetClusterSuspEventStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetClusterSuspEventStatisticsResult::GetClusterSuspEventStatisticsResult() :
	ServiceResult()
{}

GetClusterSuspEventStatisticsResult::GetClusterSuspEventStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterSuspEventStatisticsResult::~GetClusterSuspEventStatisticsResult()
{}

void GetClusterSuspEventStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto suspStatisticsNode = value["SuspStatistics"];
	if(!suspStatisticsNode["Serious"].isNull())
		suspStatistics_.serious = std::stoi(suspStatisticsNode["Serious"].asString());
	if(!suspStatisticsNode["Suspicious"].isNull())
		suspStatistics_.suspicious = std::stoi(suspStatisticsNode["Suspicious"].asString());
	if(!suspStatisticsNode["Remind"].isNull())
		suspStatistics_.remind = std::stoi(suspStatisticsNode["Remind"].asString());

}

GetClusterSuspEventStatisticsResult::SuspStatistics GetClusterSuspEventStatisticsResult::getSuspStatistics()const
{
	return suspStatistics_;
}

