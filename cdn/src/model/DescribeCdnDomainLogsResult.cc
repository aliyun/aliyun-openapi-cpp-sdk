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
	auto allDomainLogModel = value["DomainLogModel"];
	for (auto value : allDomainLogModel)
	{
		DomainLogModel domainLogModelObject;
		if(!value["DomainName"].isNull())
			domainLogModelObject.domainName = value["DomainName"].asString();
		auto allDomainLogDetails = value["DomainLogDetails"]["DomainLogDetail"];
		for (auto value : allDomainLogDetails)
		{
			DomainLogModel::DomainLogDetail domainLogDetailObject;
			if(!value["LogName"].isNull())
				domainLogDetailObject.logName = value["LogName"].asString();
			if(!value["LogPath"].isNull())
				domainLogDetailObject.logPath = value["LogPath"].asString();
			if(!value["LogSize"].isNull())
				domainLogDetailObject.logSize = std::stol(value["LogSize"].asString());
			if(!value["StartTime"].isNull())
				domainLogDetailObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				domainLogDetailObject.endTime = value["EndTime"].asString();
			domainLogModelObject.domainLogDetails.push_back(domainLogDetailObject);
		}
		domainLogModel_.push_back(domainLogModelObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeCdnDomainLogsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeCdnDomainLogsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeCdnDomainLogsResult::DomainLogModel> DescribeCdnDomainLogsResult::getDomainLogModel()const
{
	return domainLogModel_;
}

long DescribeCdnDomainLogsResult::getPageNumber()const
{
	return pageNumber_;
}

