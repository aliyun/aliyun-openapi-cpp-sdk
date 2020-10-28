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

#include <alibabacloud/drds/model/DescribeTableShardingInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeTableShardingInfoResult::DescribeTableShardingInfoResult() :
	ServiceResult()
{}

DescribeTableShardingInfoResult::DescribeTableShardingInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableShardingInfoResult::~DescribeTableShardingInfoResult()
{}

void DescribeTableShardingInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DbShardingFunction"].isNull())
		data_.dbShardingFunction = dataNode["DbShardingFunction"].asString();
	if(!dataNode["DbRightShiftOffset"].isNull())
		data_.dbRightShiftOffset = std::stoi(dataNode["DbRightShiftOffset"].asString());
	if(!dataNode["TbShardingFunction"].isNull())
		data_.tbShardingFunction = dataNode["TbShardingFunction"].asString();
	if(!dataNode["TbRightShiftOffset"].isNull())
		data_.tbRightShiftOffset = std::stoi(dataNode["TbRightShiftOffset"].asString());
	if(!dataNode["TbPartitions"].isNull())
		data_.tbPartitions = std::stoi(dataNode["TbPartitions"].asString());
	if(!dataNode["IsShard"].isNull())
		data_.isShard = dataNode["IsShard"].asString() == "true";
	if(!dataNode["TbComputeLength"].isNull())
		data_.tbComputeLength = std::stoi(dataNode["TbComputeLength"].asString());
	if(!dataNode["DbComputeLength"].isNull())
		data_.dbComputeLength = std::stoi(dataNode["DbComputeLength"].asString());
	auto allColumnListNode = dataNode["ColumnList"]["column"];
	for (auto dataNodeColumnListcolumn : allColumnListNode)
	{
		Data::Column columnObject;
		if(!dataNodeColumnListcolumn["Name"].isNull())
			columnObject.name = dataNodeColumnListcolumn["Name"].asString();
		if(!dataNodeColumnListcolumn["Type"].isNull())
			columnObject.type = dataNodeColumnListcolumn["Type"].asString();
		data_.columnList.push_back(columnObject);
	}
		auto allDbShardingColumnList = dataNode["DbShardingColumnList"]["DbShardingColumn"];
		for (auto value : allDbShardingColumnList)
			data_.dbShardingColumnList.push_back(value.asString());
		auto allTbShardingColumnList = dataNode["TbShardingColumnList"]["TbShardingColumn"];
		for (auto value : allTbShardingColumnList)
			data_.tbShardingColumnList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeTableShardingInfoResult::Data DescribeTableShardingInfoResult::getData()const
{
	return data_;
}

bool DescribeTableShardingInfoResult::getSuccess()const
{
	return success_;
}

