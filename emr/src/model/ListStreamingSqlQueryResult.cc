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

#include <alibabacloud/emr/model/ListStreamingSqlQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListStreamingSqlQueryResult::ListStreamingSqlQueryResult() :
	ServiceResult()
{}

ListStreamingSqlQueryResult::ListStreamingSqlQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStreamingSqlQueryResult::~ListStreamingSqlQueryResult()
{}

void ListStreamingSqlQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["QueryName"].isNull())
			itemsObject.queryName = value["QueryName"].asString();
		if(!value["QueryId"].isNull())
			itemsObject.queryId = value["QueryId"].asString();
		if(!value["RunId"].isNull())
			itemsObject.runId = value["RunId"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["Error"].isNull())
			itemsObject.error = value["Error"].asString();
		if(!value["InstanceId"].isNull())
			itemsObject.instanceId = value["InstanceId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListStreamingSqlQueryResult::getTotalCount()const
{
	return totalCount_;
}

int ListStreamingSqlQueryResult::getPageSize()const
{
	return pageSize_;
}

int ListStreamingSqlQueryResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListStreamingSqlQueryResult::Item> ListStreamingSqlQueryResult::getItems()const
{
	return items_;
}

