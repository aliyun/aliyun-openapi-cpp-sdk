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

#include <alibabacloud/cms/model/DescribeLogMonitorAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeLogMonitorAttributeResult::DescribeLogMonitorAttributeResult() :
	ServiceResult()
{}

DescribeLogMonitorAttributeResult::DescribeLogMonitorAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogMonitorAttributeResult::~DescribeLogMonitorAttributeResult()
{}

void DescribeLogMonitorAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto logMonitorNode = value["LogMonitor"];
	if(!logMonitorNode["ValueFilterRelation"].isNull())
		logMonitor_.valueFilterRelation = logMonitorNode["ValueFilterRelation"].asString();
	if(!logMonitorNode["SlsLogstore"].isNull())
		logMonitor_.slsLogstore = logMonitorNode["SlsLogstore"].asString();
	if(!logMonitorNode["MetricName"].isNull())
		logMonitor_.metricName = logMonitorNode["MetricName"].asString();
	if(!logMonitorNode["GroupId"].isNull())
		logMonitor_.groupId = std::stol(logMonitorNode["GroupId"].asString());
	if(!logMonitorNode["LogId"].isNull())
		logMonitor_.logId = std::stol(logMonitorNode["LogId"].asString());
	if(!logMonitorNode["MetricExpress"].isNull())
		logMonitor_.metricExpress = logMonitorNode["MetricExpress"].asString();
	if(!logMonitorNode["SlsRegionId"].isNull())
		logMonitor_.slsRegionId = logMonitorNode["SlsRegionId"].asString();
	if(!logMonitorNode["GmtCreate"].isNull())
		logMonitor_.gmtCreate = std::stol(logMonitorNode["GmtCreate"].asString());
	if(!logMonitorNode["SlsProject"].isNull())
		logMonitor_.slsProject = logMonitorNode["SlsProject"].asString();
	auto allAggregatesNode = logMonitorNode["Aggregates"]["Aggregate"];
	for (auto logMonitorNodeAggregatesAggregate : allAggregatesNode)
	{
		LogMonitor::Aggregate aggregateObject;
		if(!logMonitorNodeAggregatesAggregate["Max"].isNull())
			aggregateObject.max = logMonitorNodeAggregatesAggregate["Max"].asString();
		if(!logMonitorNodeAggregatesAggregate["Min"].isNull())
			aggregateObject.min = logMonitorNodeAggregatesAggregate["Min"].asString();
		if(!logMonitorNodeAggregatesAggregate["Function"].isNull())
			aggregateObject.function = logMonitorNodeAggregatesAggregate["Function"].asString();
		if(!logMonitorNodeAggregatesAggregate["Alias"].isNull())
			aggregateObject.alias = logMonitorNodeAggregatesAggregate["Alias"].asString();
		if(!logMonitorNodeAggregatesAggregate["FieldName"].isNull())
			aggregateObject.fieldName = logMonitorNodeAggregatesAggregate["FieldName"].asString();
		logMonitor_.aggregates.push_back(aggregateObject);
	}
	auto allValueFilterNode = logMonitorNode["ValueFilter"]["ValueFilterObject"];
	for (auto logMonitorNodeValueFilterValueFilterObject : allValueFilterNode)
	{
		LogMonitor::ValueFilterObject valueFilterObjectObject;
		if(!logMonitorNodeValueFilterValueFilterObject["Key"].isNull())
			valueFilterObjectObject.key = logMonitorNodeValueFilterValueFilterObject["Key"].asString();
		if(!logMonitorNodeValueFilterValueFilterObject["Value"].isNull())
			valueFilterObjectObject.value = logMonitorNodeValueFilterValueFilterObject["Value"].asString();
		if(!logMonitorNodeValueFilterValueFilterObject["Operator"].isNull())
			valueFilterObjectObject._operator = logMonitorNodeValueFilterValueFilterObject["Operator"].asString();
		logMonitor_.valueFilter.push_back(valueFilterObjectObject);
	}
		auto allTumblingwindows = logMonitorNode["Tumblingwindows"]["Tumblingwindow"];
		for (auto value : allTumblingwindows)
			logMonitor_.tumblingwindows.push_back(value.asString());
		auto allGroupbys = logMonitorNode["Groupbys"]["Groupby"];
		for (auto value : allGroupbys)
			logMonitor_.groupbys.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeLogMonitorAttributeResult::getMessage()const
{
	return message_;
}

DescribeLogMonitorAttributeResult::LogMonitor DescribeLogMonitorAttributeResult::getLogMonitor()const
{
	return logMonitor_;
}

std::string DescribeLogMonitorAttributeResult::getCode()const
{
	return code_;
}

bool DescribeLogMonitorAttributeResult::getSuccess()const
{
	return success_;
}

