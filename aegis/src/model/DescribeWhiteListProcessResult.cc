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

#include <alibabacloud/aegis/model/DescribeWhiteListProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWhiteListProcessResult::DescribeWhiteListProcessResult() :
	ServiceResult()
{}

DescribeWhiteListProcessResult::DescribeWhiteListProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteListProcessResult::~DescribeWhiteListProcessResult()
{}

void DescribeWhiteListProcessResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProcesses = value["Processes"]["Process"];
	for (auto value : allProcesses)
	{
		Process processesObject;
		if(!value["Id"].isNull())
			processesObject.id = std::stol(value["Id"].asString());
		if(!value["ProcessId"].isNull())
			processesObject.processId = std::stoi(value["ProcessId"].asString());
		if(!value["ProcessName"].isNull())
			processesObject.processName = value["ProcessName"].asString();
		if(!value["FilePath"].isNull())
			processesObject.filePath = value["FilePath"].asString();
		if(!value["Md5"].isNull())
			processesObject.md5 = value["Md5"].asString();
		if(!value["Level"].isNull())
			processesObject.level = std::stoi(value["Level"].asString());
		if(!value["ProcessType"].isNull())
			processesObject.processType = std::stoi(value["ProcessType"].asString());
		if(!value["Status"].isNull())
			processesObject.status = std::stoi(value["Status"].asString());
		processes_.push_back(processesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWhiteListProcessResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWhiteListProcessResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWhiteListProcessResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeWhiteListProcessResult::getCount()const
{
	return count_;
}

std::vector<DescribeWhiteListProcessResult::Process> DescribeWhiteListProcessResult::getProcesses()const
{
	return processes_;
}

