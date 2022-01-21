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

#include <alibabacloud/cms/model/DescribeExporterOutputListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeExporterOutputListResult::DescribeExporterOutputListResult() :
	ServiceResult()
{}

DescribeExporterOutputListResult::DescribeExporterOutputListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExporterOutputListResult::~DescribeExporterOutputListResult()
{}

void DescribeExporterOutputListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatapointsNode = value["Datapoints"]["Datapoint"];
	for (auto valueDatapointsDatapoint : allDatapointsNode)
	{
		Datapoint datapointsObject;
		if(!valueDatapointsDatapoint["DestType"].isNull())
			datapointsObject.destType = valueDatapointsDatapoint["DestType"].asString();
		if(!valueDatapointsDatapoint["CreateTime"].isNull())
			datapointsObject.createTime = std::stol(valueDatapointsDatapoint["CreateTime"].asString());
		if(!valueDatapointsDatapoint["DestName"].isNull())
			datapointsObject.destName = valueDatapointsDatapoint["DestName"].asString();
		auto configJsonNode = value["ConfigJson"];
		if(!configJsonNode["ak"].isNull())
			datapointsObject.configJson.ak = configJsonNode["ak"].asString();
		if(!configJsonNode["endpoint"].isNull())
			datapointsObject.configJson.endpoint = configJsonNode["endpoint"].asString();
		if(!configJsonNode["logstore"].isNull())
			datapointsObject.configJson.logstore = configJsonNode["logstore"].asString();
		if(!configJsonNode["project"].isNull())
			datapointsObject.configJson.project = configJsonNode["project"].asString();
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

std::string DescribeExporterOutputListResult::getMessage()const
{
	return message_;
}

int DescribeExporterOutputListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeExporterOutputListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeExporterOutputListResult::Datapoint> DescribeExporterOutputListResult::getDatapoints()const
{
	return datapoints_;
}

std::string DescribeExporterOutputListResult::getCode()const
{
	return code_;
}

bool DescribeExporterOutputListResult::getSuccess()const
{
	return success_;
}

