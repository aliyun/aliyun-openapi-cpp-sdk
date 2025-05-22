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

#include <alibabacloud/rds/model/DescribeCurrentModifyOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCurrentModifyOrderResult::DescribeCurrentModifyOrderResult() :
	ServiceResult()
{}

DescribeCurrentModifyOrderResult::DescribeCurrentModifyOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCurrentModifyOrderResult::~DescribeCurrentModifyOrderResult()
{}

void DescribeCurrentModifyOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModifyOrderNode = value["ModifyOrder"]["ModifyOrderItem"];
	for (auto valueModifyOrderModifyOrderItem : allModifyOrderNode)
	{
		ModifyOrderItem modifyOrderObject;
		if(!valueModifyOrderModifyOrderItem["ClassGroup"].isNull())
			modifyOrderObject.classGroup = valueModifyOrderModifyOrderItem["ClassGroup"].asString();
		if(!valueModifyOrderModifyOrderItem["Cpu"].isNull())
			modifyOrderObject.cpu = valueModifyOrderModifyOrderItem["Cpu"].asString();
		if(!valueModifyOrderModifyOrderItem["DbInstanceId"].isNull())
			modifyOrderObject.dbInstanceId = valueModifyOrderModifyOrderItem["DbInstanceId"].asString();
		if(!valueModifyOrderModifyOrderItem["EffectiveTime"].isNull())
			modifyOrderObject.effectiveTime = valueModifyOrderModifyOrderItem["EffectiveTime"].asString();
		if(!valueModifyOrderModifyOrderItem["Mark"].isNull())
			modifyOrderObject.mark = valueModifyOrderModifyOrderItem["Mark"].asString();
		if(!valueModifyOrderModifyOrderItem["MemoryClass"].isNull())
			modifyOrderObject.memoryClass = valueModifyOrderModifyOrderItem["MemoryClass"].asString();
		if(!valueModifyOrderModifyOrderItem["Status"].isNull())
			modifyOrderObject.status = valueModifyOrderModifyOrderItem["Status"].asString();
		if(!valueModifyOrderModifyOrderItem["Storage"].isNull())
			modifyOrderObject.storage = valueModifyOrderModifyOrderItem["Storage"].asString();
		if(!valueModifyOrderModifyOrderItem["TargetDBInstanceClass"].isNull())
			modifyOrderObject.targetDBInstanceClass = valueModifyOrderModifyOrderItem["TargetDBInstanceClass"].asString();
		modifyOrder_.push_back(modifyOrderObject);
	}

}

std::vector<DescribeCurrentModifyOrderResult::ModifyOrderItem> DescribeCurrentModifyOrderResult::getModifyOrder()const
{
	return modifyOrder_;
}

