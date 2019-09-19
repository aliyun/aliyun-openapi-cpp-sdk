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

#include <alibabacloud/aegis/model/DescribeChartDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeChartDataResult::DescribeChartDataResult() :
	ServiceResult()
{}

DescribeChartDataResult::DescribeChartDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChartDataResult::~DescribeChartDataResult()
{}

void DescribeChartDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMultipleDataNode = value["MultipleData"]["MultipleDataItem"];
	for (auto valueMultipleDataMultipleDataItem : allMultipleDataNode)
	{
		MultipleDataItem multipleDataObject;
		if(!valueMultipleDataMultipleDataItem["Type"].isNull())
			multipleDataObject.type = valueMultipleDataMultipleDataItem["Type"].asString();
		if(!valueMultipleDataMultipleDataItem["Name"].isNull())
			multipleDataObject.name = valueMultipleDataMultipleDataItem["Name"].asString();
		if(!valueMultipleDataMultipleDataItem["Color"].isNull())
			multipleDataObject.color = valueMultipleDataMultipleDataItem["Color"].asString();
		if(!valueMultipleDataMultipleDataItem["Value"].isNull())
			multipleDataObject.value = std::stol(valueMultipleDataMultipleDataItem["Value"].asString());
		multipleData_.push_back(multipleDataObject);
	}
	auto coordinateDataNode = value["CoordinateData"];
	auto allYAxisListNode = coordinateDataNode["YAxisList"]["YAxisDo"];
	for (auto coordinateDataNodeYAxisListYAxisDo : allYAxisListNode)
	{
		CoordinateData::YAxisDo yAxisDoObject;
		if(!coordinateDataNodeYAxisListYAxisDo["Type"].isNull())
			yAxisDoObject.type = coordinateDataNodeYAxisListYAxisDo["Type"].asString();
		if(!coordinateDataNodeYAxisListYAxisDo["Name"].isNull())
			yAxisDoObject.name = coordinateDataNodeYAxisListYAxisDo["Name"].asString();
		if(!coordinateDataNodeYAxisListYAxisDo["Color"].isNull())
			yAxisDoObject.color = coordinateDataNodeYAxisListYAxisDo["Color"].asString();
		auto allValue = value["Value"]["LongItem"];
		for (auto value : allValue)
			yAxisDoObject.value.push_back(value.asString());
		coordinateData_.yAxisList.push_back(yAxisDoObject);
	}
		auto allXAxis = coordinateDataNode["XAxis"]["StringItem"];
		for (auto value : allXAxis)
			coordinateData_.xAxis.push_back(value.asString());
	auto singleDataNode = value["SingleData"];
	if(!singleDataNode["Type"].isNull())
		singleData_.type = singleDataNode["Type"].asString();
	if(!singleDataNode["Name"].isNull())
		singleData_.name = singleDataNode["Name"].asString();
	if(!singleDataNode["Color"].isNull())
		singleData_.color = singleDataNode["Color"].asString();
	if(!singleDataNode["Value"].isNull())
		singleData_.value = std::stol(singleDataNode["Value"].asString());
	if(!value["ChartType"].isNull())
		chartType_ = value["ChartType"].asString();
	if(!value["ChartDataType"].isNull())
		chartDataType_ = value["ChartDataType"].asString();

}

std::string DescribeChartDataResult::getChartDataType()const
{
	return chartDataType_;
}

std::vector<DescribeChartDataResult::MultipleDataItem> DescribeChartDataResult::getMultipleData()const
{
	return multipleData_;
}

DescribeChartDataResult::CoordinateData DescribeChartDataResult::getCoordinateData()const
{
	return coordinateData_;
}

std::string DescribeChartDataResult::getChartType()const
{
	return chartType_;
}

DescribeChartDataResult::SingleData DescribeChartDataResult::getSingleData()const
{
	return singleData_;
}

