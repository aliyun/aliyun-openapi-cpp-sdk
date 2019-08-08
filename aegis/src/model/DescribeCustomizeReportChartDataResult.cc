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

#include <alibabacloud/aegis/model/DescribeCustomizeReportChartDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeCustomizeReportChartDataResult::DescribeCustomizeReportChartDataResult() :
	ServiceResult()
{}

DescribeCustomizeReportChartDataResult::DescribeCustomizeReportChartDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizeReportChartDataResult::~DescribeCustomizeReportChartDataResult()
{}

void DescribeCustomizeReportChartDataResult::parse(const std::string &payload)
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
		if(!value["Type"].isNull())
			chartListObject.type = value["Type"].asString();
		auto allDataList = value["DataList"]["data"];
		for (auto value : allDataList)
		{
			Chart::Data dataListObject;
			if(!value["Name"].isNull())
				dataListObject.name = value["Name"].asString();
			if(!value["Count"].isNull())
				dataListObject.count = std::stoi(value["Count"].asString());
			if(!value["Old"].isNull())
				dataListObject.old = std::stoi(value["Old"].asString());
			auto allChartDataList = value["ChartDataList"]["chartData"];
			for (auto value : allChartDataList)
			{
				Chart::Data::ChartData chartDataListObject;
				if(!value["Name"].isNull())
					chartDataListObject.name = value["Name"].asString();
				if(!value["Value"].isNull())
					chartDataListObject.value = std::stoi(value["Value"].asString());
				dataListObject.chartDataList.push_back(chartDataListObject);
			}
			chartListObject.dataList.push_back(dataListObject);
		}
		chartList_.push_back(chartListObject);
	}

}

std::vector<DescribeCustomizeReportChartDataResult::Chart> DescribeCustomizeReportChartDataResult::getChartList()const
{
	return chartList_;
}

