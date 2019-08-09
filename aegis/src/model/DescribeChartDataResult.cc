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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allMultipleData = value["MultipleData"]["MultipleDataItem"];
	for (auto value : allMultipleData)
	{
		MultipleDataItem multipleDataObject;
		if(!value["Type"].isNull())
			multipleDataObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			multipleDataObject.name = value["Name"].asString();
		if(!value["Color"].isNull())
			multipleDataObject.color = value["Color"].asString();
		if(!value["Value"].isNull())
			multipleDataObject.value = std::stol(value["Value"].asString());
		multipleData_.push_back(multipleDataObject);
	}
	auto coordinateDataNode = value["CoordinateData"];
	auto allYAxisList = value["YAxisList"]["YAxisDo"];
	for (auto value : allYAxisList)
	{
		CoordinateData::YAxisDo yAxisDoObject;
		if(!value["Type"].isNull())
			yAxisDoObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			yAxisDoObject.name = value["Name"].asString();
		if(!value["Color"].isNull())
			yAxisDoObject.color = value["Color"].asString();
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

