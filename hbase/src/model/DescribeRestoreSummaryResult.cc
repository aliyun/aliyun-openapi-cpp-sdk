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

#include <alibabacloud/hbase/model/DescribeRestoreSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeRestoreSummaryResult::DescribeRestoreSummaryResult() :
	ServiceResult()
{}

DescribeRestoreSummaryResult::DescribeRestoreSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreSummaryResult::~DescribeRestoreSummaryResult()
{}

void DescribeRestoreSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRescordsNode = value["Rescords"]["Rescord"];
	for (auto valueRescordsRescord : allRescordsNode)
	{
		Rescord rescordsObject;
		if(!valueRescordsRescord["RecordId"].isNull())
			rescordsObject.recordId = valueRescordsRescord["RecordId"].asString();
		if(!valueRescordsRescord["FinishTime"].isNull())
			rescordsObject.finishTime = valueRescordsRescord["FinishTime"].asString();
		if(!valueRescordsRescord["SchemaProcess"].isNull())
			rescordsObject.schemaProcess = valueRescordsRescord["SchemaProcess"].asString();
		if(!valueRescordsRescord["HfileRestoreProcess"].isNull())
			rescordsObject.hfileRestoreProcess = valueRescordsRescord["HfileRestoreProcess"].asString();
		if(!valueRescordsRescord["CreateTime"].isNull())
			rescordsObject.createTime = valueRescordsRescord["CreateTime"].asString();
		if(!valueRescordsRescord["BulkLoadProcess"].isNull())
			rescordsObject.bulkLoadProcess = valueRescordsRescord["BulkLoadProcess"].asString();
		if(!valueRescordsRescord["Status"].isNull())
			rescordsObject.status = valueRescordsRescord["Status"].asString();
		if(!valueRescordsRescord["LogProcess"].isNull())
			rescordsObject.logProcess = valueRescordsRescord["LogProcess"].asString();
		rescords_.push_back(rescordsObject);
	}
	if(!value["HasMoreRestoreRecord"].isNull())
		hasMoreRestoreRecord_ = std::stoi(value["HasMoreRestoreRecord"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeRestoreSummaryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRestoreSummaryResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeRestoreSummaryResult::getTotal()const
{
	return total_;
}

int DescribeRestoreSummaryResult::getHasMoreRestoreRecord()const
{
	return hasMoreRestoreRecord_;
}

std::vector<DescribeRestoreSummaryResult::Rescord> DescribeRestoreSummaryResult::getRescords()const
{
	return rescords_;
}

