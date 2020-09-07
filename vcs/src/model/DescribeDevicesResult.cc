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

#include <alibabacloud/vcs/model/DescribeDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

DescribeDevicesResult::DescribeDevicesResult() :
	ServiceResult()
{}

DescribeDevicesResult::DescribeDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDevicesResult::~DescribeDevicesResult()
{}

void DescribeDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["InProtocol"].isNull())
			recordObject.inProtocol = dataNodeRecordsRecord["InProtocol"].asString();
		if(!dataNodeRecordsRecord["CreateTime"].isNull())
			recordObject.createTime = dataNodeRecordsRecord["CreateTime"].asString();
		if(!dataNodeRecordsRecord["DeviceAddress"].isNull())
			recordObject.deviceAddress = dataNodeRecordsRecord["DeviceAddress"].asString();
		if(!dataNodeRecordsRecord["DeviceId"].isNull())
			recordObject.deviceId = dataNodeRecordsRecord["DeviceId"].asString();
		if(!dataNodeRecordsRecord["DeviceName"].isNull())
			recordObject.deviceName = dataNodeRecordsRecord["DeviceName"].asString();
		if(!dataNodeRecordsRecord["DeviceType"].isNull())
			recordObject.deviceType = dataNodeRecordsRecord["DeviceType"].asString();
		if(!dataNodeRecordsRecord["Latitude"].isNull())
			recordObject.latitude = dataNodeRecordsRecord["Latitude"].asString();
		if(!dataNodeRecordsRecord["Longitude"].isNull())
			recordObject.longitude = dataNodeRecordsRecord["Longitude"].asString();
		if(!dataNodeRecordsRecord["Status"].isNull())
			recordObject.status = dataNodeRecordsRecord["Status"].asString();
		if(!dataNodeRecordsRecord["Vendor"].isNull())
			recordObject.vendor = dataNodeRecordsRecord["Vendor"].asString();
		if(!dataNodeRecordsRecord["CorpId"].isNull())
			recordObject.corpId = dataNodeRecordsRecord["CorpId"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDevicesResult::getMessage()const
{
	return message_;
}

DescribeDevicesResult::Data DescribeDevicesResult::getData()const
{
	return data_;
}

std::string DescribeDevicesResult::getCode()const
{
	return code_;
}

