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

#include <alibabacloud/antiddos-public/model/DescribeDdosEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeDdosEventListResult::DescribeDdosEventListResult() :
	ServiceResult()
{}

DescribeDdosEventListResult::DescribeDdosEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosEventListResult::~DescribeDdosEventListResult()
{}

void DescribeDdosEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDdosEventListNode = value["DdosEventList"]["DdosEvent"];
	for (auto valueDdosEventListDdosEvent : allDdosEventListNode)
	{
		DdosEvent ddosEventListObject;
		if(!valueDdosEventListDdosEvent["DdosType"].isNull())
			ddosEventListObject.ddosType = valueDdosEventListDdosEvent["DdosType"].asString();
		if(!valueDdosEventListDdosEvent["EndTime"].isNull())
			ddosEventListObject.endTime = std::stol(valueDdosEventListDdosEvent["EndTime"].asString());
		if(!valueDdosEventListDdosEvent["StartTime"].isNull())
			ddosEventListObject.startTime = std::stol(valueDdosEventListDdosEvent["StartTime"].asString());
		if(!valueDdosEventListDdosEvent["DelayTime"].isNull())
			ddosEventListObject.delayTime = std::stol(valueDdosEventListDdosEvent["DelayTime"].asString());
		if(!valueDdosEventListDdosEvent["DdosStatus"].isNull())
			ddosEventListObject.ddosStatus = valueDdosEventListDdosEvent["DdosStatus"].asString();
		if(!valueDdosEventListDdosEvent["UnBlackholeTime"].isNull())
			ddosEventListObject.unBlackholeTime = std::stol(valueDdosEventListDdosEvent["UnBlackholeTime"].asString());
		ddosEventList_.push_back(ddosEventListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeDdosEventListResult::DdosEvent> DescribeDdosEventListResult::getDdosEventList()const
{
	return ddosEventList_;
}

int DescribeDdosEventListResult::getTotal()const
{
	return total_;
}

