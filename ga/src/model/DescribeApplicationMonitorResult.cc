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

#include <alibabacloud/ga/model/DescribeApplicationMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeApplicationMonitorResult::DescribeApplicationMonitorResult() :
	ServiceResult()
{}

DescribeApplicationMonitorResult::DescribeApplicationMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationMonitorResult::~DescribeApplicationMonitorResult()
{}

void DescribeApplicationMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspCityListNode = value["IspCityList"]["探测点列表"];
	for (auto valueIspCityList探测点列表 : allIspCityListNode)
	{
		探测点列表 ispCityListObject;
		if(!valueIspCityList探测点列表["Isp"].isNull())
			ispCityListObject.isp = valueIspCityList探测点列表["Isp"].asString();
		if(!valueIspCityList探测点列表["IspName"].isNull())
			ispCityListObject.ispName = valueIspCityList探测点列表["IspName"].asString();
		if(!valueIspCityList探测点列表["City"].isNull())
			ispCityListObject.city = valueIspCityList探测点列表["City"].asString();
		if(!valueIspCityList探测点列表["CityName"].isNull())
			ispCityListObject.cityName = valueIspCityList探测点列表["CityName"].asString();
		ispCityList_.push_back(ispCityListObject);
	}
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TaskName"].isNull())
		taskName_ = value["TaskName"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["OptionsJson"].isNull())
		optionsJson_ = value["OptionsJson"].asString();
	if(!value["DetectEnable"].isNull())
		detectEnable_ = value["DetectEnable"].asString() == "true";
	if(!value["DetectThreshold"].isNull())
		detectThreshold_ = std::stoi(value["DetectThreshold"].asString());
	if(!value["DetectTimes"].isNull())
		detectTimes_ = std::stoi(value["DetectTimes"].asString());
	if(!value["SilenceTime"].isNull())
		silenceTime_ = std::stoi(value["SilenceTime"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeApplicationMonitorResult::getSilenceTime()const
{
	return silenceTime_;
}

int DescribeApplicationMonitorResult::getDetectThreshold()const
{
	return detectThreshold_;
}

std::string DescribeApplicationMonitorResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeApplicationMonitorResult::getAddress()const
{
	return address_;
}

bool DescribeApplicationMonitorResult::getDetectEnable()const
{
	return detectEnable_;
}

std::string DescribeApplicationMonitorResult::getTaskName()const
{
	return taskName_;
}

std::string DescribeApplicationMonitorResult::getOptionsJson()const
{
	return optionsJson_;
}

std::string DescribeApplicationMonitorResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeApplicationMonitorResult::getAcceleratorId()const
{
	return acceleratorId_;
}

int DescribeApplicationMonitorResult::getDetectTimes()const
{
	return detectTimes_;
}

std::vector<DescribeApplicationMonitorResult::探测点列表> DescribeApplicationMonitorResult::getIspCityList()const
{
	return ispCityList_;
}

std::string DescribeApplicationMonitorResult::getListenerId()const
{
	return listenerId_;
}

