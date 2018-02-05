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

#include <alibabacloud/slb/model/DescribeAccessLogsDownloadAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeAccessLogsDownloadAttributeResult::DescribeAccessLogsDownloadAttributeResult() :
	ServiceResult()
{}

DescribeAccessLogsDownloadAttributeResult::DescribeAccessLogsDownloadAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessLogsDownloadAttributeResult::~DescribeAccessLogsDownloadAttributeResult()
{}

void DescribeAccessLogsDownloadAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLogsDownloadAttributes = value["LogsDownloadAttributes"]["LogsDownloadAttribute"];
	for (auto value : allLogsDownloadAttributes)
	{
		LogsDownloadAttribute logsDownloadAttributesObject;
		if(!value["LogProject"].isNull())
			logsDownloadAttributesObject.logProject = value["LogProject"].asString();
		if(!value["LogStore"].isNull())
			logsDownloadAttributesObject.logStore = value["LogStore"].asString();
		if(!value["LoadBalancerId"].isNull())
			logsDownloadAttributesObject.loadBalancerId = value["LoadBalancerId"].asString();
		if(!value["LogType"].isNull())
			logsDownloadAttributesObject.logType = value["LogType"].asString();
		if(!value["RoleArn"].isNull())
			logsDownloadAttributesObject.roleArn = value["RoleArn"].asString();
		if(!value["Region"].isNull())
			logsDownloadAttributesObject.region = value["Region"].asString();
		logsDownloadAttributes_.push_back(logsDownloadAttributesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeAccessLogsDownloadAttributeResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessLogsDownloadAttributeResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessLogsDownloadAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeAccessLogsDownloadAttributeResult::getCount()const
{
	return count_;
}

std::vector<DescribeAccessLogsDownloadAttributeResult::LogsDownloadAttribute> DescribeAccessLogsDownloadAttributeResult::getLogsDownloadAttributes()const
{
	return logsDownloadAttributes_;
}

