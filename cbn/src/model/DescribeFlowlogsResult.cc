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

#include <alibabacloud/cbn/model/DescribeFlowlogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeFlowlogsResult::DescribeFlowlogsResult() :
	ServiceResult()
{}

DescribeFlowlogsResult::DescribeFlowlogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowlogsResult::~DescribeFlowlogsResult()
{}

void DescribeFlowlogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlowLogsNode = value["FlowLogs"]["FlowLog"];
	for (auto valueFlowLogsFlowLog : allFlowLogsNode)
	{
		FlowLog flowLogsObject;
		if(!valueFlowLogsFlowLog["Status"].isNull())
			flowLogsObject.status = valueFlowLogsFlowLog["Status"].asString();
		if(!valueFlowLogsFlowLog["CreationTime"].isNull())
			flowLogsObject.creationTime = valueFlowLogsFlowLog["CreationTime"].asString();
		if(!valueFlowLogsFlowLog["FlowLogName"].isNull())
			flowLogsObject.flowLogName = valueFlowLogsFlowLog["FlowLogName"].asString();
		if(!valueFlowLogsFlowLog["Description"].isNull())
			flowLogsObject.description = valueFlowLogsFlowLog["Description"].asString();
		if(!valueFlowLogsFlowLog["ProjectName"].isNull())
			flowLogsObject.projectName = valueFlowLogsFlowLog["ProjectName"].asString();
		if(!valueFlowLogsFlowLog["CenId"].isNull())
			flowLogsObject.cenId = valueFlowLogsFlowLog["CenId"].asString();
		if(!valueFlowLogsFlowLog["LogStoreName"].isNull())
			flowLogsObject.logStoreName = valueFlowLogsFlowLog["LogStoreName"].asString();
		if(!valueFlowLogsFlowLog["RegionId"].isNull())
			flowLogsObject.regionId = valueFlowLogsFlowLog["RegionId"].asString();
		if(!valueFlowLogsFlowLog["FlowLogId"].isNull())
			flowLogsObject.flowLogId = valueFlowLogsFlowLog["FlowLogId"].asString();
		if(!valueFlowLogsFlowLog["PeerRegionId"].isNull())
			flowLogsObject.peerRegionId = valueFlowLogsFlowLog["PeerRegionId"].asString();
		if(!valueFlowLogsFlowLog["TransitRouterAttachmentId"].isNull())
			flowLogsObject.transitRouterAttachmentId = valueFlowLogsFlowLog["TransitRouterAttachmentId"].asString();
		if(!valueFlowLogsFlowLog["Interval"].isNull())
			flowLogsObject.interval = std::stol(valueFlowLogsFlowLog["Interval"].asString());
		auto allTagsNode = valueFlowLogsFlowLog["Tags"]["Tag"];
		for (auto valueFlowLogsFlowLogTagsTag : allTagsNode)
		{
			FlowLog::Tag tagsObject;
			if(!valueFlowLogsFlowLogTagsTag["Key"].isNull())
				tagsObject.key = valueFlowLogsFlowLogTagsTag["Key"].asString();
			if(!valueFlowLogsFlowLogTagsTag["Value"].isNull())
				tagsObject.value = valueFlowLogsFlowLogTagsTag["Value"].asString();
			flowLogsObject.tags.push_back(tagsObject);
		}
		flowLogs_.push_back(flowLogsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DescribeFlowlogsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeFlowlogsResult::FlowLog> DescribeFlowlogsResult::getFlowLogs()const
{
	return flowLogs_;
}

std::string DescribeFlowlogsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeFlowlogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeFlowlogsResult::getSuccess()const
{
	return success_;
}

