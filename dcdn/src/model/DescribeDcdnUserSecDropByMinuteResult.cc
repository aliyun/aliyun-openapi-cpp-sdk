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

#include <alibabacloud/dcdn/model/DescribeDcdnUserSecDropByMinuteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserSecDropByMinuteResult::DescribeDcdnUserSecDropByMinuteResult() :
	ServiceResult()
{}

DescribeDcdnUserSecDropByMinuteResult::DescribeDcdnUserSecDropByMinuteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserSecDropByMinuteResult::~DescribeDcdnUserSecDropByMinuteResult()
{}

void DescribeDcdnUserSecDropByMinuteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRowsNode = value["Rows"]["RowsItem"];
	for (auto valueRowsRowsItem : allRowsNode)
	{
		RowsItem rowsObject;
		if(!valueRowsRowsItem["Domain"].isNull())
			rowsObject.domain = valueRowsRowsItem["Domain"].asString();
		if(!valueRowsRowsItem["TmStr"].isNull())
			rowsObject.tmStr = valueRowsRowsItem["TmStr"].asString();
		if(!valueRowsRowsItem["Drops"].isNull())
			rowsObject.drops = std::stoi(valueRowsRowsItem["Drops"].asString());
		if(!valueRowsRowsItem["Object"].isNull())
			rowsObject.object = valueRowsRowsItem["Object"].asString();
		if(!valueRowsRowsItem["SecFunc"].isNull())
			rowsObject.secFunc = valueRowsRowsItem["SecFunc"].asString();
		if(!valueRowsRowsItem["RuleName"].isNull())
			rowsObject.ruleName = valueRowsRowsItem["RuleName"].asString();
		rows_.push_back(rowsObject);
	}
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Len"].isNull())
		len_ = std::stoi(value["Len"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDcdnUserSecDropByMinuteResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDcdnUserSecDropByMinuteResult::getDescription()const
{
	return description_;
}

int DescribeDcdnUserSecDropByMinuteResult::getLen()const
{
	return len_;
}

int DescribeDcdnUserSecDropByMinuteResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnUserSecDropByMinuteResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDcdnUserSecDropByMinuteResult::RowsItem> DescribeDcdnUserSecDropByMinuteResult::getRows()const
{
	return rows_;
}

