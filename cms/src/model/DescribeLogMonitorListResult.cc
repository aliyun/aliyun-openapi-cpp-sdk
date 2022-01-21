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

#include <alibabacloud/cms/model/DescribeLogMonitorListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeLogMonitorListResult::DescribeLogMonitorListResult() :
	ServiceResult()
{}

DescribeLogMonitorListResult::DescribeLogMonitorListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogMonitorListResult::~DescribeLogMonitorListResult()
{}

void DescribeLogMonitorListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogMonitorListNode = value["LogMonitorList"]["LogMonitor"];
	for (auto valueLogMonitorListLogMonitor : allLogMonitorListNode)
	{
		LogMonitor logMonitorListObject;
		if(!valueLogMonitorListLogMonitor["ValueFilterRelation"].isNull())
			logMonitorListObject.valueFilterRelation = valueLogMonitorListLogMonitor["ValueFilterRelation"].asString();
		if(!valueLogMonitorListLogMonitor["SlsLogstore"].isNull())
			logMonitorListObject.slsLogstore = valueLogMonitorListLogMonitor["SlsLogstore"].asString();
		if(!valueLogMonitorListLogMonitor["MetricName"].isNull())
			logMonitorListObject.metricName = valueLogMonitorListLogMonitor["MetricName"].asString();
		if(!valueLogMonitorListLogMonitor["GroupId"].isNull())
			logMonitorListObject.groupId = std::stol(valueLogMonitorListLogMonitor["GroupId"].asString());
		if(!valueLogMonitorListLogMonitor["LogId"].isNull())
			logMonitorListObject.logId = std::stol(valueLogMonitorListLogMonitor["LogId"].asString());
		if(!valueLogMonitorListLogMonitor["SlsRegionId"].isNull())
			logMonitorListObject.slsRegionId = valueLogMonitorListLogMonitor["SlsRegionId"].asString();
		if(!valueLogMonitorListLogMonitor["GmtCreate"].isNull())
			logMonitorListObject.gmtCreate = std::stol(valueLogMonitorListLogMonitor["GmtCreate"].asString());
		if(!valueLogMonitorListLogMonitor["SlsProject"].isNull())
			logMonitorListObject.slsProject = valueLogMonitorListLogMonitor["SlsProject"].asString();
		auto allValueFilterNode = valueLogMonitorListLogMonitor["ValueFilter"]["ValueFilterObject"];
		for (auto valueLogMonitorListLogMonitorValueFilterValueFilterObject : allValueFilterNode)
		{
			LogMonitor::ValueFilterObject valueFilterObject;
			if(!valueLogMonitorListLogMonitorValueFilterValueFilterObject["Key"].isNull())
				valueFilterObject.key = valueLogMonitorListLogMonitorValueFilterValueFilterObject["Key"].asString();
			if(!valueLogMonitorListLogMonitorValueFilterValueFilterObject["Value"].isNull())
				valueFilterObject.value = valueLogMonitorListLogMonitorValueFilterValueFilterObject["Value"].asString();
			if(!valueLogMonitorListLogMonitorValueFilterValueFilterObject["Operator"].isNull())
				valueFilterObject._operator = valueLogMonitorListLogMonitorValueFilterValueFilterObject["Operator"].asString();
			logMonitorListObject.valueFilter.push_back(valueFilterObject);
		}
		logMonitorList_.push_back(logMonitorListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::string DescribeLogMonitorListResult::getMessage()const
{
	return message_;
}

int DescribeLogMonitorListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLogMonitorListResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeLogMonitorListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeLogMonitorListResult::LogMonitor> DescribeLogMonitorListResult::getLogMonitorList()const
{
	return logMonitorList_;
}

std::string DescribeLogMonitorListResult::getCode()const
{
	return code_;
}

bool DescribeLogMonitorListResult::getSuccess()const
{
	return success_;
}

