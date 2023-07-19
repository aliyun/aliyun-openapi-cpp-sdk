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

#include <alibabacloud/dts/model/DescribeMetricListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeMetricListResult::DescribeMetricListResult() :
	ServiceResult()
{}

DescribeMetricListResult::DescribeMetricListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricListResult::~DescribeMetricListResult()
{}

void DescribeMetricListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPointsNode = value["DataPoints"]["DataPoint"];
	for (auto valueDataPointsDataPoint : allDataPointsNode)
	{
		DataPoint dataPointsObject;
		if(!valueDataPointsDataPoint["Timestamp"].isNull())
			dataPointsObject.timestamp = std::stol(valueDataPointsDataPoint["Timestamp"].asString());
		if(!valueDataPointsDataPoint["Statistics"].isNull())
			dataPointsObject.statistics = std::stof(valueDataPointsDataPoint["Statistics"].asString());
		dataPoints_.push_back(dataPointsObject);
	}
	if(!value["MetricType"].isNull())
		metricType_ = value["MetricType"].asString();
	if(!value["Param"].isNull())
		param_ = value["Param"].asString();
	if(!value["MetricName"].isNull())
		metricName_ = value["MetricName"].asString();
	if(!value["Period"].isNull())
		period_ = std::stol(value["Period"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string DescribeMetricListResult::getMetricName()const
{
	return metricName_;
}

std::string DescribeMetricListResult::getMetricType()const
{
	return metricType_;
}

std::string DescribeMetricListResult::getParam()const
{
	return param_;
}

int DescribeMetricListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long DescribeMetricListResult::getPeriod()const
{
	return period_;
}

std::vector<DescribeMetricListResult::DataPoint> DescribeMetricListResult::getDataPoints()const
{
	return dataPoints_;
}

std::string DescribeMetricListResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeMetricListResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeMetricListResult::getCode()const
{
	return code_;
}

bool DescribeMetricListResult::getSuccess()const
{
	return success_;
}

std::string DescribeMetricListResult::getErrCode()const
{
	return errCode_;
}

