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

#include <alibabacloud/vod/model/DescribeVodDomainLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainLogResult::DescribeVodDomainLogResult() :
	ServiceResult()
{}

DescribeVodDomainLogResult::DescribeVodDomainLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainLogResult::~DescribeVodDomainLogResult()
{}

void DescribeVodDomainLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainLogDetails = value["DomainLogDetails"]["DomainLogDetail"];
	for (auto value : allDomainLogDetails)
	{
		DomainLogDetail domainLogDetailsObject;
		if(!value["DomainName"].isNull())
			domainLogDetailsObject.domainName = value["DomainName"].asString();
		if(!value["LogCount"].isNull())
			domainLogDetailsObject.logCount = std::stol(value["LogCount"].asString());
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
		auto pageInfosNode = value["PageInfos"];
		if(!pageInfosNode["PageNumber"].isNull())
			domainLogDetailsObject.pageInfos.pageNumber = std::stol(pageInfosNode["PageNumber"].asString());
		if(!pageInfosNode["PageSize"].isNull())
			domainLogDetailsObject.pageInfos.pageSize = std::stol(pageInfosNode["PageSize"].asString());
		if(!pageInfosNode["Total"].isNull())
			domainLogDetailsObject.pageInfos.total = std::stol(pageInfosNode["Total"].asString());
		domainLogDetails_.push_back(domainLogDetailsObject);
	}

}

std::vector<DescribeVodDomainLogResult::DomainLogDetail> DescribeVodDomainLogResult::getDomainLogDetails()const
{
	return domainLogDetails_;
}

