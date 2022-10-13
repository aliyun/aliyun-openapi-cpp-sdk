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

#include <alibabacloud/ens/model/DescribeUserBandWidthDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeUserBandWidthDataResult::DescribeUserBandWidthDataResult() :
	ServiceResult()
{}

DescribeUserBandWidthDataResult::DescribeUserBandWidthDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserBandWidthDataResult::~DescribeUserBandWidthDataResult()
{}

void DescribeUserBandWidthDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto monitorDataNode = value["MonitorData"];
	if(!monitorDataNode["MaxDownBandWidth"].isNull())
		monitorData_.maxDownBandWidth = monitorDataNode["MaxDownBandWidth"].asString();
	if(!monitorDataNode["MaxUpBandWidth"].isNull())
		monitorData_.maxUpBandWidth = monitorDataNode["MaxUpBandWidth"].asString();
	auto allBandWidthMonitorDataNode = monitorDataNode["BandWidthMonitorData"]["BandWidthMonitorDataItem"];
	for (auto monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem : allBandWidthMonitorDataNode)
	{
		MonitorData::BandWidthMonitorDataItem bandWidthMonitorDataItemObject;
		if(!monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["DownBandWidth"].isNull())
			bandWidthMonitorDataItemObject.downBandWidth = std::stol(monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["DownBandWidth"].asString());
		if(!monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["InternetRX"].isNull())
			bandWidthMonitorDataItemObject.internetRX = std::stol(monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["InternetRX"].asString());
		if(!monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["InternetTX"].isNull())
			bandWidthMonitorDataItemObject.internetTX = std::stol(monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["InternetTX"].asString());
		if(!monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["TimeStamp"].isNull())
			bandWidthMonitorDataItemObject.timeStamp = monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["TimeStamp"].asString();
		if(!monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["UpBandWidth"].isNull())
			bandWidthMonitorDataItemObject.upBandWidth = std::stol(monitorDataNodeBandWidthMonitorDataBandWidthMonitorDataItem["UpBandWidth"].asString());
		monitorData_.bandWidthMonitorData.push_back(bandWidthMonitorDataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

DescribeUserBandWidthDataResult::MonitorData DescribeUserBandWidthDataResult::getMonitorData()const
{
	return monitorData_;
}

int DescribeUserBandWidthDataResult::getCode()const
{
	return code_;
}

