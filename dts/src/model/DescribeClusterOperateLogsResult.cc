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

#include <alibabacloud/dts/model/DescribeClusterOperateLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeClusterOperateLogsResult::DescribeClusterOperateLogsResult() :
	ServiceResult()
{}

DescribeClusterOperateLogsResult::DescribeClusterOperateLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterOperateLogsResult::~DescribeClusterOperateLogsResult()
{}

void DescribeClusterOperateLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPointsNode = value["DataPoints"]["DataPoint"];
	for (auto valueDataPointsDataPoint : allDataPointsNode)
	{
		DataPoint dataPointsObject;
		if(!valueDataPointsDataPoint["Id"].isNull())
			dataPointsObject.id = valueDataPointsDataPoint["Id"].asString();
		if(!valueDataPointsDataPoint["LogDatetime"].isNull())
			dataPointsObject.logDatetime = std::stol(valueDataPointsDataPoint["LogDatetime"].asString());
		if(!valueDataPointsDataPoint["OperationName"].isNull())
			dataPointsObject.operationName = valueDataPointsDataPoint["OperationName"].asString();
		if(!valueDataPointsDataPoint["OperationUser"].isNull())
			dataPointsObject.operationUser = valueDataPointsDataPoint["OperationUser"].asString();
		if(!valueDataPointsDataPoint["OldValue"].isNull())
			dataPointsObject.oldValue = valueDataPointsDataPoint["OldValue"].asString();
		if(!valueDataPointsDataPoint["NewValue"].isNull())
			dataPointsObject.newValue = valueDataPointsDataPoint["NewValue"].asString();
		if(!valueDataPointsDataPoint["Content"].isNull())
			dataPointsObject.content = valueDataPointsDataPoint["Content"].asString();
		if(!valueDataPointsDataPoint["Success"].isNull())
			dataPointsObject.success = std::stoi(valueDataPointsDataPoint["Success"].asString());
		dataPoints_.push_back(dataPointsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
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

long DescribeClusterOperateLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeClusterOperateLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeClusterOperateLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeClusterOperateLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeClusterOperateLogsResult::DataPoint> DescribeClusterOperateLogsResult::getDataPoints()const
{
	return dataPoints_;
}

std::string DescribeClusterOperateLogsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeClusterOperateLogsResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeClusterOperateLogsResult::getCode()const
{
	return code_;
}

bool DescribeClusterOperateLogsResult::getSuccess()const
{
	return success_;
}

std::string DescribeClusterOperateLogsResult::getErrCode()const
{
	return errCode_;
}

