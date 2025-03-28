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

#include <alibabacloud/drds/model/DescribeRecycleBinTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRecycleBinTablesResult::DescribeRecycleBinTablesResult() :
	ServiceResult()
{}

DescribeRecycleBinTablesResult::DescribeRecycleBinTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecycleBinTablesResult::~DescribeRecycleBinTablesResult()
{}

void DescribeRecycleBinTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["OriginalTableName"].isNull())
			dataObject.originalTableName = valueDataDataItem["OriginalTableName"].asString();
		if(!valueDataDataItem["TableName"].isNull())
			dataObject.tableName = valueDataDataItem["TableName"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRecycleBinTablesResult::DataItem> DescribeRecycleBinTablesResult::getData()const
{
	return data_;
}

bool DescribeRecycleBinTablesResult::getSuccess()const
{
	return success_;
}

