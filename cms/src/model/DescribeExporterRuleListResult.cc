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

#include <alibabacloud/cms/model/DescribeExporterRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeExporterRuleListResult::DescribeExporterRuleListResult() :
	ServiceResult()
{}

DescribeExporterRuleListResult::DescribeExporterRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExporterRuleListResult::~DescribeExporterRuleListResult()
{}

void DescribeExporterRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatapointsNode = value["Datapoints"]["Datapoint"];
	for (auto valueDatapointsDatapoint : allDatapointsNode)
	{
		Datapoint datapointsObject;
		if(!valueDatapointsDatapoint["MetricName"].isNull())
			datapointsObject.metricName = valueDatapointsDatapoint["MetricName"].asString();
		if(!valueDatapointsDatapoint["Describe"].isNull())
			datapointsObject.describe = valueDatapointsDatapoint["Describe"].asString();
		if(!valueDatapointsDatapoint["TargetWindows"].isNull())
			datapointsObject.targetWindows = valueDatapointsDatapoint["TargetWindows"].asString();
		if(!valueDatapointsDatapoint["CreateTime"].isNull())
			datapointsObject.createTime = std::stol(valueDatapointsDatapoint["CreateTime"].asString());
		if(!valueDatapointsDatapoint["Enabled"].isNull())
			datapointsObject.enabled = valueDatapointsDatapoint["Enabled"].asString() == "true";
		if(!valueDatapointsDatapoint["Dimension"].isNull())
			datapointsObject.dimension = valueDatapointsDatapoint["Dimension"].asString();
		if(!valueDatapointsDatapoint["Namespace"].isNull())
			datapointsObject._namespace = valueDatapointsDatapoint["Namespace"].asString();
		if(!valueDatapointsDatapoint["RuleName"].isNull())
			datapointsObject.ruleName = valueDatapointsDatapoint["RuleName"].asString();
		auto allDstName = value["DstName"]["DstName"];
		for (auto value : allDstName)
			datapointsObject.dstName.push_back(value.asString());
		datapoints_.push_back(datapointsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeExporterRuleListResult::getMessage()const
{
	return message_;
}

int DescribeExporterRuleListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeExporterRuleListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeExporterRuleListResult::Datapoint> DescribeExporterRuleListResult::getDatapoints()const
{
	return datapoints_;
}

std::string DescribeExporterRuleListResult::getCode()const
{
	return code_;
}

bool DescribeExporterRuleListResult::getSuccess()const
{
	return success_;
}

