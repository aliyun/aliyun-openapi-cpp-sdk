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

#include <alibabacloud/ddoscoo/model/DescribeSlaEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSlaEventListResult::DescribeSlaEventListResult() :
	ServiceResult()
{}

DescribeSlaEventListResult::DescribeSlaEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlaEventListResult::~DescribeSlaEventListResult()
{}

void DescribeSlaEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlaEventNode = value["SlaEvent"]["SlaEventItem"];
	for (auto valueSlaEventSlaEventItem : allSlaEventNode)
	{
		SlaEventItem slaEventObject;
		if(!valueSlaEventSlaEventItem["StartTime"].isNull())
			slaEventObject.startTime = std::stol(valueSlaEventSlaEventItem["StartTime"].asString());
		if(!valueSlaEventSlaEventItem["EndTime"].isNull())
			slaEventObject.endTime = std::stol(valueSlaEventSlaEventItem["EndTime"].asString());
		if(!valueSlaEventSlaEventItem["Ip"].isNull())
			slaEventObject.ip = valueSlaEventSlaEventItem["Ip"].asString();
		if(!valueSlaEventSlaEventItem["Region"].isNull())
			slaEventObject.region = valueSlaEventSlaEventItem["Region"].asString();
		slaEvent_.push_back(slaEventObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeSlaEventListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeSlaEventListResult::SlaEventItem> DescribeSlaEventListResult::getSlaEvent()const
{
	return slaEvent_;
}

