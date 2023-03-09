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

#include <alibabacloud/adb/model/DescribeDiagnosisMonitorPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDiagnosisMonitorPerformanceResult::DescribeDiagnosisMonitorPerformanceResult() :
	ServiceResult()
{}

DescribeDiagnosisMonitorPerformanceResult::DescribeDiagnosisMonitorPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisMonitorPerformanceResult::~DescribeDiagnosisMonitorPerformanceResult()
{}

void DescribeDiagnosisMonitorPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformancesNode = value["Performances"]["Items"];
	for (auto valuePerformancesItems : allPerformancesNode)
	{
		Items performancesObject;
		if(!valuePerformancesItems["Status"].isNull())
			performancesObject.status = valuePerformancesItems["Status"].asString();
		if(!valuePerformancesItems["ProcessId"].isNull())
			performancesObject.processId = valuePerformancesItems["ProcessId"].asString();
		if(!valuePerformancesItems["StartTime"].isNull())
			performancesObject.startTime = std::stol(valuePerformancesItems["StartTime"].asString());
		if(!valuePerformancesItems["Cost"].isNull())
			performancesObject.cost = std::stol(valuePerformancesItems["Cost"].asString());
		if(!valuePerformancesItems["ScanRows"].isNull())
			performancesObject.scanRows = std::stol(valuePerformancesItems["ScanRows"].asString());
		if(!valuePerformancesItems["PeakMemory"].isNull())
			performancesObject.peakMemory = std::stol(valuePerformancesItems["PeakMemory"].asString());
		if(!valuePerformancesItems["RcHost"].isNull())
			performancesObject.rcHost = valuePerformancesItems["RcHost"].asString();
		if(!valuePerformancesItems["ScanSize"].isNull())
			performancesObject.scanSize = std::stol(valuePerformancesItems["ScanSize"].asString());
		if(!valuePerformancesItems["UserName"].isNull())
			performancesObject.userName = valuePerformancesItems["UserName"].asString();
		performances_.push_back(performancesObject);
	}
	if(!value["PerformancesThreshold"].isNull())
		performancesThreshold_ = std::stoi(value["PerformancesThreshold"].asString());
	if(!value["PerformancesTruncated"].isNull())
		performancesTruncated_ = value["PerformancesTruncated"].asString() == "true";

}

bool DescribeDiagnosisMonitorPerformanceResult::getPerformancesTruncated()const
{
	return performancesTruncated_;
}

std::vector<DescribeDiagnosisMonitorPerformanceResult::Items> DescribeDiagnosisMonitorPerformanceResult::getPerformances()const
{
	return performances_;
}

int DescribeDiagnosisMonitorPerformanceResult::getPerformancesThreshold()const
{
	return performancesThreshold_;
}

