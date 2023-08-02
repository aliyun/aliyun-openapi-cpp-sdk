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

#include <alibabacloud/gpdb/model/DescribeDiagnosisRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDiagnosisRecordsResult::DescribeDiagnosisRecordsResult() :
	ServiceResult()
{}

DescribeDiagnosisRecordsResult::DescribeDiagnosisRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisRecordsResult::~DescribeDiagnosisRecordsResult()
{}

void DescribeDiagnosisRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["QueryID"].isNull())
			itemsObject.queryID = valueItemsItem["QueryID"].asString();
		if(!valueItemsItem["SessionID"].isNull())
			itemsObject.sessionID = valueItemsItem["SessionID"].asString();
		if(!valueItemsItem["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsItem["StartTime"].asString());
		if(!valueItemsItem["Duration"].isNull())
			itemsObject.duration = std::stoi(valueItemsItem["Duration"].asString());
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["SQLStmt"].isNull())
			itemsObject.sQLStmt = valueItemsItem["SQLStmt"].asString();
		if(!valueItemsItem["User"].isNull())
			itemsObject.user = valueItemsItem["User"].asString();
		if(!valueItemsItem["Database"].isNull())
			itemsObject.database = valueItemsItem["Database"].asString();
		if(!valueItemsItem["SQLTruncated"].isNull())
			itemsObject.sQLTruncated = valueItemsItem["SQLTruncated"].asString() == "true";
		if(!valueItemsItem["SQLTruncatedThreshold"].isNull())
			itemsObject.sQLTruncatedThreshold = std::stoi(valueItemsItem["SQLTruncatedThreshold"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDiagnosisRecordsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDiagnosisRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDiagnosisRecordsResult::Item> DescribeDiagnosisRecordsResult::getItems()const
{
	return items_;
}

