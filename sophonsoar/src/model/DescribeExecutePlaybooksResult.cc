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

#include <alibabacloud/sophonsoar/model/DescribeExecutePlaybooksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeExecutePlaybooksResult::DescribeExecutePlaybooksResult() :
	ServiceResult()
{}

DescribeExecutePlaybooksResult::DescribeExecutePlaybooksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExecutePlaybooksResult::~DescribeExecutePlaybooksResult()
{}

void DescribeExecutePlaybooksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlaybookMetricsNode = value["PlaybookMetrics"]["Data"];
	for (auto valuePlaybookMetricsData : allPlaybookMetricsNode)
	{
		Data playbookMetricsObject;
		if(!valuePlaybookMetricsData["Description"].isNull())
			playbookMetricsObject.description = valuePlaybookMetricsData["Description"].asString();
		if(!valuePlaybookMetricsData["ActionType"].isNull())
			playbookMetricsObject.actionType = valuePlaybookMetricsData["ActionType"].asString();
		if(!valuePlaybookMetricsData["DisplayName"].isNull())
			playbookMetricsObject.displayName = valuePlaybookMetricsData["DisplayName"].asString();
		if(!valuePlaybookMetricsData["Uuid"].isNull())
			playbookMetricsObject.uuid = valuePlaybookMetricsData["Uuid"].asString();
		if(!valuePlaybookMetricsData["TaskConfig"].isNull())
			playbookMetricsObject.taskConfig = valuePlaybookMetricsData["TaskConfig"].asString();
		if(!valuePlaybookMetricsData["ParamConfig"].isNull())
			playbookMetricsObject.paramConfig = valuePlaybookMetricsData["ParamConfig"].asString();
		if(!valuePlaybookMetricsData["CommandEntity"].isNull())
			playbookMetricsObject.commandEntity = valuePlaybookMetricsData["CommandEntity"].asString();
		if(!valuePlaybookMetricsData["ParamType"].isNull())
			playbookMetricsObject.paramType = valuePlaybookMetricsData["ParamType"].asString();
		playbookMetrics_.push_back(playbookMetricsObject);
	}

}

std::vector<DescribeExecutePlaybooksResult::Data> DescribeExecutePlaybooksResult::getPlaybookMetrics()const
{
	return playbookMetrics_;
}

