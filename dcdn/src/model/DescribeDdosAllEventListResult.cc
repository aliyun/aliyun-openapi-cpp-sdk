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

#include <alibabacloud/dcdn/model/DescribeDdosAllEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDdosAllEventListResult::DescribeDdosAllEventListResult() :
	ServiceResult()
{}

DescribeDdosAllEventListResult::DescribeDdosAllEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosAllEventListResult::~DescribeDdosAllEventListResult()
{}

void DescribeDdosAllEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["DdosDomainAttackEvent"];
	for (auto valueDataListDdosDomainAttackEvent : allDataListNode)
	{
		DdosDomainAttackEvent dataListObject;
		if(!valueDataListDdosDomainAttackEvent["Target"].isNull())
			dataListObject.target = valueDataListDdosDomainAttackEvent["Target"].asString();
		if(!valueDataListDdosDomainAttackEvent["StartTime"].isNull())
			dataListObject.startTime = valueDataListDdosDomainAttackEvent["StartTime"].asString();
		if(!valueDataListDdosDomainAttackEvent["EndTime"].isNull())
			dataListObject.endTime = valueDataListDdosDomainAttackEvent["EndTime"].asString();
		if(!valueDataListDdosDomainAttackEvent["EventType"].isNull())
			dataListObject.eventType = valueDataListDdosDomainAttackEvent["EventType"].asString();
		if(!valueDataListDdosDomainAttackEvent["Bps"].isNull())
			dataListObject.bps = std::stol(valueDataListDdosDomainAttackEvent["Bps"].asString());
		if(!valueDataListDdosDomainAttackEvent["Pps"].isNull())
			dataListObject.pps = std::stol(valueDataListDdosDomainAttackEvent["Pps"].asString());
		if(!valueDataListDdosDomainAttackEvent["Cps"].isNull())
			dataListObject.cps = std::stol(valueDataListDdosDomainAttackEvent["Cps"].asString());
		if(!valueDataListDdosDomainAttackEvent["Qps"].isNull())
			dataListObject.qps = std::stol(valueDataListDdosDomainAttackEvent["Qps"].asString());
		if(!valueDataListDdosDomainAttackEvent["EventId"].isNull())
			dataListObject.eventId = valueDataListDdosDomainAttackEvent["EventId"].asString();
		dataList_.push_back(dataListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeDdosAllEventListResult::DdosDomainAttackEvent> DescribeDdosAllEventListResult::getDataList()const
{
	return dataList_;
}

int DescribeDdosAllEventListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDdosAllEventListResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeDdosAllEventListResult::getTotal()const
{
	return total_;
}

