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
	auto allChartListNode = value["ChartList"]["chart"];
	for (auto valueChartListchart : allChartListNode)
	{
		Chart chartListObject;
		if(!valueChartListchart["ChartId"].isNull())
			chartListObject.chartId = valueChartListchart["ChartId"].asString();
		if(!valueChartListchart["ChartName"].isNull())
			chartListObject.chartName = valueChartListchart["ChartName"].asString();
		if(!valueChartListchart["Type"].isNull())
			chartListObject.type = valueChartListchart["Type"].asString();
		auto allDataListNode = allChartListNode["DataList"]["data"];
		for (auto allChartListNodeDataListdata : allDataListNode)
		{
			Chart::Data dataListObject;
			if(!allChartListNodeDataListdata["Name"].isNull())
				dataListObject.name = allChartListNodeDataListdata["Name"].asString();
			if(!allChartListNodeDataListdata["Count"].isNull())
				dataListObject.count = std::stoi(allChartListNodeDataListdata["Count"].asString());
			if(!allChartListNodeDataListdata["Old"].isNull())
				dataListObject.old = std::stoi(allChartListNodeDataListdata["Old"].asString());
			auto allChartDataListNode = allDataListNode["ChartDataList"]["chartData"];
			for (auto allDataListNodeChartDataListchartData : allChartDataListNode)
			{
				Chart::Data::ChartData chartDataListObject;
				if(!allDataListNodeChartDataListchartData["Name"].isNull())
					chartDataListObject.name = allDataListNodeChartDataListchartData["Name"].asString();
				if(!allDataListNodeChartDataListchartData["Value"].isNull())
					chartDataListObject.value = std::stoi(allDataListNodeChartDataListchartData["Value"].asString());
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

