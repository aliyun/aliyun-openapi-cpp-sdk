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

#include <alibabacloud/rds/model/DescribeResourceDiagnosisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeResourceDiagnosisResult::DescribeResourceDiagnosisResult() :
	ServiceResult()
{}

DescribeResourceDiagnosisResult::DescribeResourceDiagnosisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceDiagnosisResult::~DescribeResourceDiagnosisResult()
{}

void DescribeResourceDiagnosisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCPU = value["CPU"]["Detail"];
	for (const auto &item : allCPU)
		cPU_.push_back(item.asString());
	auto allMemory = value["Memory"]["Detail"];
	for (const auto &item : allMemory)
		memory_.push_back(item.asString());
	auto allStorage = value["Storage"]["Detail"];
	for (const auto &item : allStorage)
		storage_.push_back(item.asString());
	auto allIOPS = value["IOPS"]["Detail"];
	for (const auto &item : allIOPS)
		iOPS_.push_back(item.asString());
	auto allConnection = value["Connection"]["Detail"];
	for (const auto &item : allConnection)
		connection_.push_back(item.asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<std::string> DescribeResourceDiagnosisResult::getStorage()const
{
	return storage_;
}

std::string DescribeResourceDiagnosisResult::getEndTime()const
{
	return endTime_;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getMemory()const
{
	return memory_;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getConnection()const
{
	return connection_;
}

std::string DescribeResourceDiagnosisResult::getStartTime()const
{
	return startTime_;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getCPU()const
{
	return cPU_;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getIOPS()const
{
	return iOPS_;
}

