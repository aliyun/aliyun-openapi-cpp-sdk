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

#include <alibabacloud/lto/model/DescribeDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

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
	auto dataNode = value["Data"];
	if(!dataNode["DistributableCount"].isNull())
		data_.distributableCount = std::stoi(dataNode["DistributableCount"].asString());
	if(!dataNode["AuthorizedCount"].isNull())
		data_.authorizedCount = std::stoi(dataNode["AuthorizedCount"].asString());
	if(!dataNode["DeviceCount"].isNull())
		data_.deviceCount = std::stoi(dataNode["DeviceCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDeviceInfoResult::getMessage()const
{
	return message_;
}

int DescribeDeviceInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeDeviceInfoResult::Data DescribeDeviceInfoResult::getData()const
{
	return data_;
}

std::string DescribeDeviceInfoResult::getCode()const
{
	return code_;
}

bool DescribeDeviceInfoResult::getSuccess()const
{
	return success_;
}

