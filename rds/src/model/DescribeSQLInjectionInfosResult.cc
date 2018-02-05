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

#include <alibabacloud/rds/model/DescribeSQLInjectionInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLInjectionInfosResult::DescribeSQLInjectionInfosResult() :
	ServiceResult()
{}

DescribeSQLInjectionInfosResult::DescribeSQLInjectionInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLInjectionInfosResult::~DescribeSQLInjectionInfosResult()
{}

void DescribeSQLInjectionInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["SQLInjectionInfo"];
	for (auto value : allItems)
	{
		SQLInjectionInfo itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["LatencyTime"].isNull())
			itemsObject.latencyTime = value["LatencyTime"].asString();
		if(!value["HostAddress"].isNull())
			itemsObject.hostAddress = value["HostAddress"].asString();
		if(!value["ExecuteTime"].isNull())
			itemsObject.executeTime = value["ExecuteTime"].asString();
		if(!value["AccountName"].isNull())
			itemsObject.accountName = value["AccountName"].asString();
		if(!value["EffectRowCount"].isNull())
			itemsObject.effectRowCount = value["EffectRowCount"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLInjectionInfosResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLInjectionInfosResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLInjectionInfosResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLInjectionInfosResult::SQLInjectionInfo> DescribeSQLInjectionInfosResult::getItems()const
{
	return items_;
}

std::string DescribeSQLInjectionInfosResult::getEngine()const
{
	return engine_;
}

