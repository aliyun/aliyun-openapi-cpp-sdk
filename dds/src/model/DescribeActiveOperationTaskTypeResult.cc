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

#include <alibabacloud/dds/model/DescribeActiveOperationTaskTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeActiveOperationTaskTypeResult::DescribeActiveOperationTaskTypeResult() :
	ServiceResult()
{}

DescribeActiveOperationTaskTypeResult::DescribeActiveOperationTaskTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveOperationTaskTypeResult::~DescribeActiveOperationTaskTypeResult()
{}

void DescribeActiveOperationTaskTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTypeListNode = value["TypeList"]["Items"];
	for (auto valueTypeListItems : allTypeListNode)
	{
		Items typeListObject;
		if(!valueTypeListItems["TaskType"].isNull())
			typeListObject.taskType = valueTypeListItems["TaskType"].asString();
		if(!valueTypeListItems["TaskTypeInfoEn"].isNull())
			typeListObject.taskTypeInfoEn = valueTypeListItems["TaskTypeInfoEn"].asString();
		if(!valueTypeListItems["TaskTypeInfoZh"].isNull())
			typeListObject.taskTypeInfoZh = valueTypeListItems["TaskTypeInfoZh"].asString();
		if(!valueTypeListItems["Count"].isNull())
			typeListObject.count = std::stoi(valueTypeListItems["Count"].asString());
		typeList_.push_back(typeListObject);
	}

}

std::vector<DescribeActiveOperationTaskTypeResult::Items> DescribeActiveOperationTaskTypeResult::getTypeList()const
{
	return typeList_;
}

