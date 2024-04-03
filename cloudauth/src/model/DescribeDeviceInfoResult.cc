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

#include <alibabacloud/cloudauth/model/DescribeDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeDeviceInfoResult::DescribeDeviceInfoResult() :
	ServiceResult()
{}

DescribeDeviceInfoResult::DescribeDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceInfoResult::~DescribeDeviceInfoResult()
{}

void DescribeDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeviceInfoListNode = value["DeviceInfoList"]["DeviceInfo"];
	for (auto valueDeviceInfoListDeviceInfo : allDeviceInfoListNode)
	{
		DeviceInfo deviceInfoListObject;
		if(!valueDeviceInfoListDeviceInfo["ExpiredDay"].isNull())
			deviceInfoListObject.expiredDay = valueDeviceInfoListDeviceInfo["ExpiredDay"].asString();
		if(!valueDeviceInfoListDeviceInfo["UserDeviceId"].isNull())
			deviceInfoListObject.userDeviceId = valueDeviceInfoListDeviceInfo["UserDeviceId"].asString();
		if(!valueDeviceInfoListDeviceInfo["DeviceId"].isNull())
			deviceInfoListObject.deviceId = valueDeviceInfoListDeviceInfo["DeviceId"].asString();
		if(!valueDeviceInfoListDeviceInfo["BeginDay"].isNull())
			deviceInfoListObject.beginDay = valueDeviceInfoListDeviceInfo["BeginDay"].asString();
		if(!valueDeviceInfoListDeviceInfo["BizType"].isNull())
			deviceInfoListObject.bizType = valueDeviceInfoListDeviceInfo["BizType"].asString();
		deviceInfoList_.push_back(deviceInfoListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeDeviceInfoResult::DeviceInfo> DescribeDeviceInfoResult::getDeviceInfoList()const
{
	return deviceInfoList_;
}

int DescribeDeviceInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDeviceInfoResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDeviceInfoResult::getCurrentPage()const
{
	return currentPage_;
}

