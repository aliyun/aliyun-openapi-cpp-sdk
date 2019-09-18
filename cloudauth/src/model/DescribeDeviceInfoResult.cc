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
	auto allDeviceInfoList = value["DeviceInfoList"]["DeviceInfo"];
	for (auto value : allDeviceInfoList)
	{
		DeviceInfo deviceInfoListObject;
		if(!value["DeviceId"].isNull())
			deviceInfoListObject.deviceId = value["DeviceId"].asString();
		if(!value["UserDeviceId"].isNull())
			deviceInfoListObject.userDeviceId = value["UserDeviceId"].asString();
		if(!value["BizType"].isNull())
			deviceInfoListObject.bizType = value["BizType"].asString();
		if(!value["BeginDay"].isNull())
			deviceInfoListObject.beginDay = value["BeginDay"].asString();
		if(!value["ExpiredDay"].isNull())
			deviceInfoListObject.expiredDay = value["ExpiredDay"].asString();
		deviceInfoList_.push_back(deviceInfoListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
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

