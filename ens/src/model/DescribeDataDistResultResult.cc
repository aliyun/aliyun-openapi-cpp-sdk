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

#include <alibabacloud/ens/model/DescribeDataDistResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDataDistResultResult::DescribeDataDistResultResult() :
	ServiceResult()
{}

DescribeDataDistResultResult::DescribeDataDistResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataDistResultResult::~DescribeDataDistResultResult()
{}

void DescribeDataDistResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDistResultsNode = value["DistResults"]["DistResult"];
	for (auto valueDistResultsDistResult : allDistResultsNode)
	{
		DistResult distResultsObject;
		if(!valueDistResultsDistResult["Name"].isNull())
			distResultsObject.name = valueDistResultsDistResult["Name"].asString();
		if(!valueDistResultsDistResult["Version"].isNull())
			distResultsObject.version = valueDistResultsDistResult["Version"].asString();
		auto allStatusStatsNode = valueDistResultsDistResult["StatusStats"]["StatusStat"];
		for (auto valueDistResultsDistResultStatusStatsStatusStat : allStatusStatsNode)
		{
			DistResult::StatusStat statusStatsObject;
			if(!valueDistResultsDistResultStatusStatsStatusStat["InstanceCount"].isNull())
				statusStatsObject.instanceCount = valueDistResultsDistResultStatusStatsStatusStat["InstanceCount"].asString();
			if(!valueDistResultsDistResultStatusStatsStatusStat["Status"].isNull())
				statusStatsObject.status = valueDistResultsDistResultStatusStatsStatusStat["Status"].asString();
			auto allInstancesNode = valueDistResultsDistResultStatusStatsStatusStat["Instances"]["Instance"];
			for (auto valueDistResultsDistResultStatusStatsStatusStatInstancesInstance : allInstancesNode)
			{
				DistResult::StatusStat::Instance instancesObject;
				if(!valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["InstanceId"].isNull())
					instancesObject.instanceId = valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["InstanceId"].asString();
				if(!valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["StartTime"].isNull())
					instancesObject.startTime = valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["StartTime"].asString();
				if(!valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["StatusDescrip"].isNull())
					instancesObject.statusDescrip = valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["StatusDescrip"].asString();
				if(!valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["UpdateTime"].isNull())
					instancesObject.updateTime = valueDistResultsDistResultStatusStatsStatusStatInstancesInstance["UpdateTime"].asString();
				statusStatsObject.instances.push_back(instancesObject);
			}
			distResultsObject.statusStats.push_back(statusStatsObject);
		}
		distResults_.push_back(distResultsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataDistResultResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataDistResultResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataDistResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDataDistResultResult::DistResult> DescribeDataDistResultResult::getDistResults()const
{
	return distResults_;
}

