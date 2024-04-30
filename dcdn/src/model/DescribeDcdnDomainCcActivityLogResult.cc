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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainCcActivityLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainCcActivityLogResult::DescribeDcdnDomainCcActivityLogResult() :
	ServiceResult()
{}

DescribeDcdnDomainCcActivityLogResult::DescribeDcdnDomainCcActivityLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainCcActivityLogResult::~DescribeDcdnDomainCcActivityLogResult()
{}

void DescribeDcdnDomainCcActivityLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActivityLogNode = value["ActivityLog"]["LogInfo"];
	for (auto valueActivityLogLogInfo : allActivityLogNode)
	{
		LogInfo activityLogObject;
		if(!valueActivityLogLogInfo["Value"].isNull())
			activityLogObject.value = valueActivityLogLogInfo["Value"].asString();
		if(!valueActivityLogLogInfo["Ttl"].isNull())
			activityLogObject.ttl = std::stol(valueActivityLogLogInfo["Ttl"].asString());
		if(!valueActivityLogLogInfo["Action"].isNull())
			activityLogObject.action = valueActivityLogLogInfo["Action"].asString();
		if(!valueActivityLogLogInfo["TriggerObject"].isNull())
			activityLogObject.triggerObject = valueActivityLogLogInfo["TriggerObject"].asString();
		if(!valueActivityLogLogInfo["TimeStamp"].isNull())
			activityLogObject.timeStamp = valueActivityLogLogInfo["TimeStamp"].asString();
		if(!valueActivityLogLogInfo["DomainName"].isNull())
			activityLogObject.domainName = valueActivityLogLogInfo["DomainName"].asString();
		if(!valueActivityLogLogInfo["RuleName"].isNull())
			activityLogObject.ruleName = valueActivityLogLogInfo["RuleName"].asString();
		activityLog_.push_back(activityLogObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stol(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeDcdnDomainCcActivityLogResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDcdnDomainCcActivityLogResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDcdnDomainCcActivityLogResult::LogInfo> DescribeDcdnDomainCcActivityLogResult::getActivityLog()const
{
	return activityLog_;
}

long DescribeDcdnDomainCcActivityLogResult::getPageIndex()const
{
	return pageIndex_;
}

