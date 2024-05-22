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

#include <alibabacloud/polardbx/model/DescribeDistributeTableListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDistributeTableListResult::DescribeDistributeTableListResult() :
	ServiceResult()
{}

DescribeDistributeTableListResult::DescribeDistributeTableListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDistributeTableListResult::~DescribeDistributeTableListResult()
{}

void DescribeDistributeTableListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allTablesNode = dataNode["Tables"]["Table"];
	for (auto dataNodeTablesTable : allTablesNode)
	{
		Data::Table tableObject;
		if(!dataNodeTablesTable["TableName"].isNull())
			tableObject.tableName = dataNodeTablesTable["TableName"].asString();
		if(!dataNodeTablesTable["TableType"].isNull())
			tableObject.tableType = dataNodeTablesTable["TableType"].asString();
		if(!dataNodeTablesTable["TbKey"].isNull())
			tableObject.tbKey = dataNodeTablesTable["TbKey"].asString();
		if(!dataNodeTablesTable["DbKey"].isNull())
			tableObject.dbKey = dataNodeTablesTable["DbKey"].asString();
		data_.tables.push_back(tableObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDistributeTableListResult::getMessage()const
{
	return message_;
}

DescribeDistributeTableListResult::Data DescribeDistributeTableListResult::getData()const
{
	return data_;
}

bool DescribeDistributeTableListResult::getSuccess()const
{
	return success_;
}

