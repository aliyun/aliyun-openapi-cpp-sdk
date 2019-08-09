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

#include <alibabacloud/csb/model/FindServiceStatisticalDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindServiceStatisticalDataResult::FindServiceStatisticalDataResult() :
	ServiceResult()
{}

FindServiceStatisticalDataResult::FindServiceStatisticalDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindServiceStatisticalDataResult::~FindServiceStatisticalDataResult()
{}

void FindServiceStatisticalDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allMonitorStatisticData = value["MonitorStatisticData"]["ServiceStatisticData"];
	for (auto value : allMonitorStatisticData)
	{
		Data::ServiceStatisticData serviceStatisticDataObject;
		if(!value["AvgRt"].isNull())
			serviceStatisticDataObject.avgRt = std::stof(value["AvgRt"].asString());
		if(!value["MaxRt"].isNull())
			serviceStatisticDataObject.maxRt = std::stof(value["MaxRt"].asString());
		if(!value["MinRt"].isNull())
			serviceStatisticDataObject.minRt = std::stof(value["MinRt"].asString());
		if(!value["RequestTime"].isNull())
			serviceStatisticDataObject.requestTime = std::stol(value["RequestTime"].asString());
		if(!value["ServiceName"].isNull())
			serviceStatisticDataObject.serviceName = value["ServiceName"].asString();
		if(!value["UserId"].isNull())
			serviceStatisticDataObject.userId = value["UserId"].asString();
		auto totalNode = value["Total"];
		if(!totalNode["ErrorNum"].isNull())
			serviceStatisticDataObject.total.errorNum = std::stoi(totalNode["ErrorNum"].asString());
		if(!totalNode["Total"].isNull())
			serviceStatisticDataObject.total.total = std::stoi(totalNode["Total"].asString());
		data_.monitorStatisticData.push_back(serviceStatisticDataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindServiceStatisticalDataResult::getMessage()const
{
	return message_;
}

FindServiceStatisticalDataResult::Data FindServiceStatisticalDataResult::getData()const
{
	return data_;
}

int FindServiceStatisticalDataResult::getCode()const
{
	return code_;
}

