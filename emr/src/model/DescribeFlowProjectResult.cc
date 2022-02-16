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

#include <alibabacloud/emr/model/DescribeFlowProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowProjectResult::DescribeFlowProjectResult() :
	ServiceResult()
{}

DescribeFlowProjectResult::DescribeFlowProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowProjectResult::~DescribeFlowProjectResult()
{}

void DescribeFlowProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

long DescribeFlowProjectResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeFlowProjectResult::getDescription()const
{
	return description_;
}

std::string DescribeFlowProjectResult::getUserId()const
{
	return userId_;
}

long DescribeFlowProjectResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeFlowProjectResult::getId()const
{
	return id_;
}

std::string DescribeFlowProjectResult::getName()const
{
	return name_;
}

