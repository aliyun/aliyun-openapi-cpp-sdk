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

#include <alibabacloud/sas/model/DescribeCustomBlockRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCustomBlockRecordsResult::DescribeCustomBlockRecordsResult() :
	ServiceResult()
{}

DescribeCustomBlockRecordsResult::DescribeCustomBlockRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomBlockRecordsResult::~DescribeCustomBlockRecordsResult()
{}

void DescribeCustomBlockRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordListNode = value["RecordList"]["CustomRecord"];
	for (auto valueRecordListCustomRecord : allRecordListNode)
	{
		CustomRecord recordListObject;
		if(!valueRecordListCustomRecord["Status"].isNull())
			recordListObject.status = std::stoi(valueRecordListCustomRecord["Status"].asString());
		if(!valueRecordListCustomRecord["BlockExpireDate"].isNull())
			recordListObject.blockExpireDate = std::stol(valueRecordListCustomRecord["BlockExpireDate"].asString());
		if(!valueRecordListCustomRecord["EnableCount"].isNull())
			recordListObject.enableCount = std::stoi(valueRecordListCustomRecord["EnableCount"].asString());
		if(!valueRecordListCustomRecord["ServerCount"].isNull())
			recordListObject.serverCount = std::stoi(valueRecordListCustomRecord["ServerCount"].asString());
		if(!valueRecordListCustomRecord["BlockIp"].isNull())
			recordListObject.blockIp = valueRecordListCustomRecord["BlockIp"].asString();
		if(!valueRecordListCustomRecord["Bound"].isNull())
			recordListObject.bound = valueRecordListCustomRecord["Bound"].asString();
		if(!valueRecordListCustomRecord["Source"].isNull())
			recordListObject.source = valueRecordListCustomRecord["Source"].asString();
		if(!valueRecordListCustomRecord["Id"].isNull())
			recordListObject.id = std::stol(valueRecordListCustomRecord["Id"].asString());
		auto allTargetListNode = valueRecordListCustomRecord["TargetList"]["Target"];
		for (auto valueRecordListCustomRecordTargetListTarget : allTargetListNode)
		{
			CustomRecord::Target targetListObject;
			if(!valueRecordListCustomRecordTargetListTarget["Target"].isNull())
				targetListObject.target = valueRecordListCustomRecordTargetListTarget["Target"].asString();
			if(!valueRecordListCustomRecordTargetListTarget["TargetType"].isNull())
				targetListObject.targetType = valueRecordListCustomRecordTargetListTarget["TargetType"].asString();
			if(!valueRecordListCustomRecordTargetListTarget["TargetResult"].isNull())
				targetListObject.targetResult = valueRecordListCustomRecordTargetListTarget["TargetResult"].asString();
			if(!valueRecordListCustomRecordTargetListTarget["SuccessInfo"].isNull())
				targetListObject.successInfo = valueRecordListCustomRecordTargetListTarget["SuccessInfo"].asString();
			if(!valueRecordListCustomRecordTargetListTarget["Status"].isNull())
				targetListObject.status = std::stoi(valueRecordListCustomRecordTargetListTarget["Status"].asString());
			recordListObject.targetList.push_back(targetListObject);
		}
		recordList_.push_back(recordListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeCustomBlockRecordsResult::PageInfo DescribeCustomBlockRecordsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeCustomBlockRecordsResult::CustomRecord> DescribeCustomBlockRecordsResult::getRecordList()const
{
	return recordList_;
}

