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
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::vector<std::string> DescribeResourceDiagnosisResult::getStorage()const
{
	return storage_;
}

void DescribeResourceDiagnosisResult::setStorage(const std::vector<std::string>& storage)
{
	storage_ = storage;
}

std::string DescribeResourceDiagnosisResult::getEndTime()const
{
	return endTime_;
}

void DescribeResourceDiagnosisResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getMemory()const
{
	return memory_;
}

void DescribeResourceDiagnosisResult::setMemory(const std::vector<std::string>& memory)
{
	memory_ = memory;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getConnection()const
{
	return connection_;
}

void DescribeResourceDiagnosisResult::setConnection(const std::vector<std::string>& connection)
{
	connection_ = connection;
}

std::string DescribeResourceDiagnosisResult::getStartTime()const
{
	return startTime_;
}

void DescribeResourceDiagnosisResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getCPU()const
{
	return cPU_;
}

void DescribeResourceDiagnosisResult::setCPU(const std::vector<std::string>& cPU)
{
	cPU_ = cPU;
}

std::vector<std::string> DescribeResourceDiagnosisResult::getIOPS()const
{
	return iOPS_;
}

void DescribeResourceDiagnosisResult::setIOPS(const std::vector<std::string>& iOPS)
{
	iOPS_ = iOPS;
}

