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

#include <alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeCacheAnalysisReportResult::DescribeCacheAnalysisReportResult() :
	ServiceResult()
{}

DescribeCacheAnalysisReportResult::DescribeCacheAnalysisReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCacheAnalysisReportResult::~DescribeCacheAnalysisReportResult()
{}

void DescribeCacheAnalysisReportResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["HotKeys"].isNull())
		hotKeys_ = value["HotKeys"].asString();
	if(!value["BigKeys"].isNull())
		bigKeys_ = value["BigKeys"].asString();

}

int DescribeCacheAnalysisReportResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeCacheAnalysisReportResult::getHotKeys()const
{
	return hotKeys_;
}

int DescribeCacheAnalysisReportResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeCacheAnalysisReportResult::getBigKeys()const
{
	return bigKeys_;
}

int DescribeCacheAnalysisReportResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCacheAnalysisReportResult::getPageNumber()const
{
	return pageNumber_;
}

