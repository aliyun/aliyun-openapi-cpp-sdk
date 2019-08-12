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

#include <alibabacloud/aegis/model/DescribeScreenCityMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenCityMonitorDataResult::DescribeScreenCityMonitorDataResult() :
	ServiceResult()
{}

DescribeScreenCityMonitorDataResult::DescribeScreenCityMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenCityMonitorDataResult::~DescribeScreenCityMonitorDataResult()
{}

void DescribeScreenCityMonitorDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allMonitorData = value["MonitorData"]["MonitorDataItem"];
	for (auto value : allMonitorData)
	{
		MonitorDataItem monitorDataObject;
		if(!value["City"].isNull())
			monitorDataObject.city = value["City"].asString();
		if(!value["Availability"].isNull())
			monitorDataObject.availability = value["Availability"].asString();
		if(!value["ReturnTime"].isNull())
			monitorDataObject.returnTime = value["ReturnTime"].asString();
		monitorData_.push_back(monitorDataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeScreenCityMonitorDataResult::MonitorDataItem> DescribeScreenCityMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

bool DescribeScreenCityMonitorDataResult::getSuccess()const
{
	return success_;
}

