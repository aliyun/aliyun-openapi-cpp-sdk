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

#include <alibabacloud/jarvis/model/DescribeResetRecordListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeResetRecordListResult::DescribeResetRecordListResult() :
	ServiceResult()
{}

DescribeResetRecordListResult::DescribeResetRecordListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResetRecordListResult::~DescribeResetRecordListResult()
{}

void DescribeResetRecordListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["Data"];
	for (auto valueDataListData : allDataListNode)
	{
		Data dataListObject;
		if(!valueDataListData["PunishType"].isNull())
			dataListObject.punishType = valueDataListData["PunishType"].asString();
		if(!valueDataListData["DstIP"].isNull())
			dataListObject.dstIP = valueDataListData["DstIP"].asString();
		if(!valueDataListData["PunishResult"].isNull())
			dataListObject.punishResult = valueDataListData["PunishResult"].asString();
		if(!valueDataListData["DstPort"].isNull())
			dataListObject.dstPort = std::stoi(valueDataListData["DstPort"].asString());
		if(!valueDataListData["SrcIP"].isNull())
			dataListObject.srcIP = valueDataListData["SrcIP"].asString();
		if(!valueDataListData["PunishCount"].isNull())
			dataListObject.punishCount = std::stoi(valueDataListData["PunishCount"].asString());
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeResetRecordListResult::Data> DescribeResetRecordListResult::getDataList()const
{
	return dataList_;
}

DescribeResetRecordListResult::PageInfo DescribeResetRecordListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeResetRecordListResult::getModule()const
{
	return module_;
}

