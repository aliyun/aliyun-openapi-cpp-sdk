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

#include <alibabacloud/ddoscoo/model/DescribeSystemLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSystemLogResult::DescribeSystemLogResult() :
	ServiceResult()
{}

DescribeSystemLogResult::DescribeSystemLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemLogResult::~DescribeSystemLogResult()
{}

void DescribeSystemLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSystemLogNode = value["SystemLog"]["SystemLogItem"];
	for (auto valueSystemLogSystemLogItem : allSystemLogNode)
	{
		SystemLogItem systemLogObject;
		if(!valueSystemLogSystemLogItem["Status"].isNull())
			systemLogObject.status = std::stoi(valueSystemLogSystemLogItem["Status"].asString());
		if(!valueSystemLogSystemLogItem["EntityType"].isNull())
			systemLogObject.entityType = std::stoi(valueSystemLogSystemLogItem["EntityType"].asString());
		if(!valueSystemLogSystemLogItem["EntityObject"].isNull())
			systemLogObject.entityObject = valueSystemLogSystemLogItem["EntityObject"].asString();
		if(!valueSystemLogSystemLogItem["GmtCreate"].isNull())
			systemLogObject.gmtCreate = std::stol(valueSystemLogSystemLogItem["GmtCreate"].asString());
		if(!valueSystemLogSystemLogItem["OpAction"].isNull())
			systemLogObject.opAction = std::stoi(valueSystemLogSystemLogItem["OpAction"].asString());
		if(!valueSystemLogSystemLogItem["GmtModified"].isNull())
			systemLogObject.gmtModified = std::stol(valueSystemLogSystemLogItem["GmtModified"].asString());
		if(!valueSystemLogSystemLogItem["OpAccount"].isNull())
			systemLogObject.opAccount = valueSystemLogSystemLogItem["OpAccount"].asString();
		if(!valueSystemLogSystemLogItem["OpDesc"].isNull())
			systemLogObject.opDesc = valueSystemLogSystemLogItem["OpDesc"].asString();
		systemLog_.push_back(systemLogObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeSystemLogResult::getTotal()const
{
	return total_;
}

std::vector<DescribeSystemLogResult::SystemLogItem> DescribeSystemLogResult::getSystemLog()const
{
	return systemLog_;
}

