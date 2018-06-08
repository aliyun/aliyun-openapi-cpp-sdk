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

#include <alibabacloud/scdn/model/DescribeScdnDomainLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainLogResult::DescribeScdnDomainLogResult() :
	ServiceResult()
{}

DescribeScdnDomainLogResult::DescribeScdnDomainLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainLogResult::~DescribeScdnDomainLogResult()
{}

void DescribeScdnDomainLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainLogDetails = value["DomainLogDetails"]["DomainLogDetail"];
	for (auto value : allDomainLogDetails)
	{
		DomainLogDetail domainLogDetailsObject;
		if(!value["LogCount"].isNull())
			domainLogDetailsObject.logCount = std::stol(value["LogCount"].asString());
		auto allPageInfos = value["PageInfos"]["PageInfoDetail"];
		for (auto value : allPageInfos)
		{
			DomainLogDetail::PageInfoDetail pageInfosObject;
			if(!value["PageIndex"].isNull())
				pageInfosObject.pageIndex = std::stol(value["PageIndex"].asString());
			if(!value["PageSize"].isNull())
				pageInfosObject.pageSize = std::stol(value["PageSize"].asString());
			if(!value["Total"].isNull())
				pageInfosObject.total = std::stol(value["Total"].asString());
			domainLogDetailsObject.pageInfos.push_back(pageInfosObject);
		}
		auto allLogInfos = value["LogInfos"]["LogInfoDetail"];
		for (auto value : allLogInfos)
		{
			DomainLogDetail::LogInfoDetail logInfosObject;
			if(!value["LogName"].isNull())
				logInfosObject.logName = value["LogName"].asString();
			if(!value["LogPath"].isNull())
				logInfosObject.logPath = value["LogPath"].asString();
			if(!value["LogSize"].isNull())
				logInfosObject.logSize = std::stol(value["LogSize"].asString());
			if(!value["StartTime"].isNull())
				logInfosObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				logInfosObject.endTime = value["EndTime"].asString();
			domainLogDetailsObject.logInfos.push_back(logInfosObject);
		}
		domainLogDetails_.push_back(domainLogDetailsObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::string DescribeScdnDomainLogResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeScdnDomainLogResult::DomainLogDetail> DescribeScdnDomainLogResult::getDomainLogDetails()const
{
	return domainLogDetails_;
}

