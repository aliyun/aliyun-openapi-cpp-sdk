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
		SQLInjectionInfo sQLInjectionInfoObject;
		sQLInjectionInfoObject.dBName = value["DBName"].asString();
		sQLInjectionInfoObject.sQLText = value["SQLText"].asString();
		sQLInjectionInfoObject.latencyTime = value["LatencyTime"].asString();
		sQLInjectionInfoObject.hostAddress = value["HostAddress"].asString();
		sQLInjectionInfoObject.executeTime = value["ExecuteTime"].asString();
		sQLInjectionInfoObject.accountName = value["AccountName"].asString();
		sQLInjectionInfoObject.effectRowCount = value["EffectRowCount"].asString();
		items_.push_back(sQLInjectionInfoObject);
	}
	engine_ = value["Engine"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLInjectionInfosResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSQLInjectionInfosResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSQLInjectionInfosResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSQLInjectionInfosResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeSQLInjectionInfosResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLInjectionInfosResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeSQLInjectionInfosResult::getEngine()const
{
	return engine_;
}

void DescribeSQLInjectionInfosResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

