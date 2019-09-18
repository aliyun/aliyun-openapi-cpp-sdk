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

#include <alibabacloud/yundun-ds/model/DescribeTotalCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeTotalCountResult::DescribeTotalCountResult() :
	ServiceResult()
{}

DescribeTotalCountResult::DescribeTotalCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTotalCountResult::~DescribeTotalCountResult()
{}

void DescribeTotalCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataCountNode = value["DataCount"];
	auto instanceNode = dataCountNode["Instance"];
	if(!instanceNode["TotalCount"].isNull())
		dataCount_.instance.totalCount = std::stol(instanceNode["TotalCount"].asString());
	if(!instanceNode["Count"].isNull())
		dataCount_.instance.count = std::stol(instanceNode["Count"].asString());
	if(!instanceNode["SensitiveCount"].isNull())
		dataCount_.instance.sensitiveCount = std::stol(instanceNode["SensitiveCount"].asString());
	if(!instanceNode["LastCount"].isNull())
		dataCount_.instance.lastCount = std::stol(instanceNode["LastCount"].asString());
	if(!instanceNode["LastSensitiveCount"].isNull())
		dataCount_.instance.lastSensitiveCount = std::stol(instanceNode["LastSensitiveCount"].asString());
	auto tableNode = dataCountNode["Table"];
	if(!tableNode["TotalCount"].isNull())
		dataCount_.table.totalCount = std::stol(tableNode["TotalCount"].asString());
	if(!tableNode["Count"].isNull())
		dataCount_.table.count = std::stol(tableNode["Count"].asString());
	if(!tableNode["SensitiveCount"].isNull())
		dataCount_.table.sensitiveCount = std::stol(tableNode["SensitiveCount"].asString());
	if(!tableNode["LastCount"].isNull())
		dataCount_.table.lastCount = std::stol(tableNode["LastCount"].asString());
	if(!tableNode["LastSensitiveCount"].isNull())
		dataCount_.table.lastSensitiveCount = std::stol(tableNode["LastSensitiveCount"].asString());
	auto ossNode = dataCountNode["Oss"];
	if(!ossNode["TotalCount"].isNull())
		dataCount_.oss.totalCount = std::stol(ossNode["TotalCount"].asString());
	if(!ossNode["Count"].isNull())
		dataCount_.oss.count = std::stol(ossNode["Count"].asString());
	if(!ossNode["SensitiveCount"].isNull())
		dataCount_.oss.sensitiveCount = std::stol(ossNode["SensitiveCount"].asString());
	if(!ossNode["LastCount"].isNull())
		dataCount_.oss.lastCount = std::stol(ossNode["LastCount"].asString());
	if(!ossNode["LastSensitiveCount"].isNull())
		dataCount_.oss.lastSensitiveCount = std::stol(ossNode["LastSensitiveCount"].asString());
	auto eventCountNode = value["EventCount"];
	auto totalNode = eventCountNode["Total"];
	if(!totalNode["TotalCount"].isNull())
		eventCount_.total.totalCount = std::stol(totalNode["TotalCount"].asString());
	if(!totalNode["UndealCount"].isNull())
		eventCount_.total.undealCount = std::stol(totalNode["UndealCount"].asString());
	if(!totalNode["ConfirmCount"].isNull())
		eventCount_.total.confirmCount = std::stol(totalNode["ConfirmCount"].asString());
	if(!totalNode["ExcludeCount"].isNull())
		eventCount_.total.excludeCount = std::stol(totalNode["ExcludeCount"].asString());
	auto departCountNode = value["DepartCount"];
	if(!departCountNode["DepartCount"].isNull())
		departCount_.departCount = std::stol(departCountNode["DepartCount"].asString());
	if(!departCountNode["Count"].isNull())
		departCount_.count = std::stol(departCountNode["Count"].asString());
	if(!departCountNode["UserCount"].isNull())
		departCount_.userCount = std::stol(departCountNode["UserCount"].asString());
	if(!departCountNode["DtCount"].isNull())
		departCount_.dtCount = std::stol(departCountNode["DtCount"].asString());
	if(!departCountNode["SubCount"].isNull())
		departCount_.subCount = std::stol(departCountNode["SubCount"].asString());
	if(!departCountNode["SensitiveCount"].isNull())
		departCount_.sensitiveCount = std::stol(departCountNode["SensitiveCount"].asString());

}

DescribeTotalCountResult::DepartCount DescribeTotalCountResult::getDepartCount()const
{
	return departCount_;
}

DescribeTotalCountResult::EventCount DescribeTotalCountResult::getEventCount()const
{
	return eventCount_;
}

DescribeTotalCountResult::DataCount DescribeTotalCountResult::getDataCount()const
{
	return dataCount_;
}

