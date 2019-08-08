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

#include <alibabacloud/aegis/model/DescribeChartListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeChartListResult::DescribeChartListResult() :
	ServiceResult()
{}

DescribeChartListResult::DescribeChartListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChartListResult::~DescribeChartListResult()
{}

void DescribeChartListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allChartList = value["ChartList"]["chart"];
	for (auto value : allChartList)
	{
		Chart chartListObject;
		if(!value["ChartId"].isNull())
			chartListObject.chartId = value["ChartId"].asString();
		if(!value["ChartName"].isNull())
			chartListObject.chartName = value["ChartName"].asString();
		if(!value["BusinessType"].isNull())
			chartListObject.businessType = value["BusinessType"].asString();
		if(!value["BusinessName"].isNull())
			chartListObject.businessName = value["BusinessName"].asString();
		if(!value["ChartType"].isNull())
			chartListObject.chartType = value["ChartType"].asString();
		chartList_.push_back(chartListObject);
	}

}

std::vector<DescribeChartListResult::Chart> DescribeChartListResult::getChartList()const
{
	return chartList_;
}

