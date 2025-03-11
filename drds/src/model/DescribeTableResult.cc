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

#include <alibabacloud/drds/model/DescribeTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeTableResult::DescribeTableResult() :
	ServiceResult()
{}

DescribeTableResult::DescribeTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableResult::~DescribeTableResult()
{}

void DescribeTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allListNode = dataNode["List"]["ColumnInfo"];
	for (auto dataNodeListColumnInfo : allListNode)
	{
		Data::ColumnInfo columnInfoObject;
		if(!dataNodeListColumnInfo["Index"].isNull())
			columnInfoObject.index = dataNodeListColumnInfo["Index"].asString();
		if(!dataNodeListColumnInfo["IsAllowNull"].isNull())
			columnInfoObject.isAllowNull = dataNodeListColumnInfo["IsAllowNull"].asString();
		if(!dataNodeListColumnInfo["ColumnName"].isNull())
			columnInfoObject.columnName = dataNodeListColumnInfo["ColumnName"].asString();
		if(!dataNodeListColumnInfo["IsPk"].isNull())
			columnInfoObject.isPk = dataNodeListColumnInfo["IsPk"].asString();
		if(!dataNodeListColumnInfo["ColumnType"].isNull())
			columnInfoObject.columnType = dataNodeListColumnInfo["ColumnType"].asString();
		if(!dataNodeListColumnInfo["Extra"].isNull())
			columnInfoObject.extra = dataNodeListColumnInfo["Extra"].asString();
		data_.list.push_back(columnInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeTableResult::Data DescribeTableResult::getData()const
{
	return data_;
}

bool DescribeTableResult::getSuccess()const
{
	return success_;
}

