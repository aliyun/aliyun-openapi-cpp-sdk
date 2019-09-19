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

#include <alibabacloud/aegis/model/DescribeVulRelatedProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulRelatedProcessResult::DescribeVulRelatedProcessResult() :
	ServiceResult()
{}

DescribeVulRelatedProcessResult::DescribeVulRelatedProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulRelatedProcessResult::~DescribeVulRelatedProcessResult()
{}

void DescribeVulRelatedProcessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProcessListNode = value["ProcessList"]["Process"];
	for (auto valueProcessListProcess : allProcessListNode)
	{
		Process processListObject;
		if(!valueProcessListProcess["Uuid"].isNull())
			processListObject.uuid = valueProcessListProcess["Uuid"].asString();
		if(!valueProcessListProcess["Rpm"].isNull())
			processListObject.rpm = valueProcessListProcess["Rpm"].asString();
		if(!valueProcessListProcess["Pname"].isNull())
			processListObject.pname = valueProcessListProcess["Pname"].asString();
		if(!valueProcessListProcess["Pid"].isNull())
			processListObject.pid = valueProcessListProcess["Pid"].asString();
		if(!valueProcessListProcess["Ppid"].isNull())
			processListObject.ppid = valueProcessListProcess["Ppid"].asString();
		processList_.push_back(processListObject);
	}
	if(!value["GmtLastTs"].isNull())
		gmtLastTs_ = std::stol(value["GmtLastTs"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulRelatedProcessResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulRelatedProcessResult::Process> DescribeVulRelatedProcessResult::getProcessList()const
{
	return processList_;
}

long DescribeVulRelatedProcessResult::getGmtLastTs()const
{
	return gmtLastTs_;
}

