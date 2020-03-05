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

#include <alibabacloud/ehpc/model/GetAccountingReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetAccountingReportResult::GetAccountingReportResult() :
	ServiceResult()
{}

GetAccountingReportResult::GetAccountingReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountingReportResult::~GetAccountingReportResult()
{}

void GetAccountingReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Data"];
	for (const auto &item : allData)
		data_.push_back(item.asString());
	if(!value["Metrics"].isNull())
		metrics_ = value["Metrics"].asString();
	if(!value["TotalCoreTime"].isNull())
		totalCoreTime_ = std::stoi(value["TotalCoreTime"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::string GetAccountingReportResult::getMetrics()const
{
	return metrics_;
}

int GetAccountingReportResult::getTotalCount()const
{
	return totalCount_;
}

int GetAccountingReportResult::getPageSize()const
{
	return pageSize_;
}

int GetAccountingReportResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<std::string> GetAccountingReportResult::getData()const
{
	return data_;
}

int GetAccountingReportResult::getTotalCoreTime()const
{
	return totalCoreTime_;
}

