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

#include <alibabacloud/cdn/model/DescribeCdnDomainLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDomainLogsResult::DescribeCdnDomainLogsResult() :
	ServiceResult()
{}

DescribeCdnDomainLogsResult::DescribeCdnDomainLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDomainLogsResult::~DescribeCdnDomainLogsResult()
{}

void DescribeCdnDomainLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainLogDetailsNode = value["DomainLogDetails"]["DomainLogDetail"];
	for (auto valueDomainLogDetailsDomainLogDetail : allDomainLogDetailsNode)
	{
		DomainLogDetail domainLogDetailsObject;
		if(!valueDomainLogDetailsDomainLogDetail["DomainName"].isNull())
			domainLogDetailsObject.domainName = valueDomainLogDetailsDomainLogDetail["DomainName"].asString();
		if(!valueDomainLogDetailsDomainLogDetail["LogCount"].isNull())
			domainLogDetailsObject.logCount = std::stol(valueDomainLogDetailsDomainLogDetail["LogCount"].asString());
		auto allPageInfosNode = valueDomainLogDetailsDomainLogDetail["PageInfos"]["PageInfoDetail"];
		for (auto valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail : allPageInfosNode)
		{
			DomainLogDetail::PageInfoDetail pageInfosObject;
			if(!valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["PageIndex"].isNull())
				pageInfosObject.pageIndex = std::stol(valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["PageIndex"].asString());
			if(!valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["PageSize"].isNull())
				pageInfosObject.pageSize = std::stol(valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["PageSize"].asString());
			if(!valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["Total"].isNull())
				pageInfosObject.total = std::stol(valueDomainLogDetailsDomainLogDetailPageInfosPageInfoDetail["Total"].asString());
			domainLogDetailsObject.pageInfos.push_back(pageInfosObject);
		}
		auto allLogInfosNode = valueDomainLogDetailsDomainLogDetail["LogInfos"]["LogInfoDetail"];
		for (auto valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail : allLogInfosNode)
		{
			DomainLogDetail::LogInfoDetail logInfosObject;
			if(!valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogName"].isNull())
				logInfosObject.logName = valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogName"].asString();
			if(!valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogPath"].isNull())
				logInfosObject.logPath = valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogPath"].asString();
			if(!valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogSize"].isNull())
				logInfosObject.logSize = std::stol(valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["LogSize"].asString());
			if(!valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["StartTime"].isNull())
				logInfosObject.startTime = valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["StartTime"].asString();
			if(!valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["EndTime"].isNull())
				logInfosObject.endTime = valueDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail["EndTime"].asString();
			domainLogDetailsObject.logInfos.push_back(logInfosObject);
		}
		domainLogDetails_.push_back(domainLogDetailsObject);
	}

}

std::vector<DescribeCdnDomainLogsResult::DomainLogDetail> DescribeCdnDomainLogsResult::getDomainLogDetails()const
{
	return domainLogDetails_;
}

