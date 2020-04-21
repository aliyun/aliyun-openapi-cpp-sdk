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

#include <alibabacloud/csb/model/FindProjectStatisticalDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindProjectStatisticalDataResult::FindProjectStatisticalDataResult() :
	ServiceResult()
{}

FindProjectStatisticalDataResult::FindProjectStatisticalDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindProjectStatisticalDataResult::~FindProjectStatisticalDataResult()
{}

void FindProjectStatisticalDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allMonitorStatisticDataNode = dataNode["MonitorStatisticData"]["ServiceStatisticData"];
	for (auto dataNodeMonitorStatisticDataServiceStatisticData : allMonitorStatisticDataNode)
	{
		Data::ServiceStatisticData serviceStatisticDataObject;
		if(!dataNodeMonitorStatisticDataServiceStatisticData["AvgRt"].isNull())
			serviceStatisticDataObject.avgRt = std::stof(dataNodeMonitorStatisticDataServiceStatisticData["AvgRt"].asString());
		if(!dataNodeMonitorStatisticDataServiceStatisticData["MaxRt"].isNull())
			serviceStatisticDataObject.maxRt = std::stof(dataNodeMonitorStatisticDataServiceStatisticData["MaxRt"].asString());
		if(!dataNodeMonitorStatisticDataServiceStatisticData["MinRt"].isNull())
			serviceStatisticDataObject.minRt = std::stof(dataNodeMonitorStatisticDataServiceStatisticData["MinRt"].asString());
		auto totalNode = value["Total"];
		if(!totalNode["Total"].isNull())
			serviceStatisticDataObject.total.total = std::stol(totalNode["Total"].asString());
		if(!totalNode["ErrorNum"].isNull())
			serviceStatisticDataObject.total.errorNum = std::stol(totalNode["ErrorNum"].asString());
		auto projectInfoDataNode = value["ProjectInfoData"];
		if(!projectInfoDataNode["ProjectName"].isNull())
			serviceStatisticDataObject.projectInfoData.projectName = projectInfoDataNode["ProjectName"].asString();
		data_.monitorStatisticData.push_back(serviceStatisticDataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindProjectStatisticalDataResult::getMessage()const
{
	return message_;
}

FindProjectStatisticalDataResult::Data FindProjectStatisticalDataResult::getData()const
{
	return data_;
}

int FindProjectStatisticalDataResult::getCode()const
{
	return code_;
}

