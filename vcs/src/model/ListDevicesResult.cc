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

#include <alibabacloud/vcs/model/ListDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListDevicesResult::ListDevicesResult() :
	ServiceResult()
{}

ListDevicesResult::ListDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevicesResult::~ListDevicesResult()
{}

void ListDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
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
		if(!dataNodeRecordsRecord["AccessProtocolType"].isNull())
			recordObject.accessProtocolType = dataNodeRecordsRecord["AccessProtocolType"].asString();
		if(!dataNodeRecordsRecord["BitRate"].isNull())
			recordObject.bitRate = dataNodeRecordsRecord["BitRate"].asString();
		if(!dataNodeRecordsRecord["CoverImageUrl"].isNull())
			recordObject.coverImageUrl = dataNodeRecordsRecord["CoverImageUrl"].asString();
		if(!dataNodeRecordsRecord["GbId"].isNull())
			recordObject.gbId = dataNodeRecordsRecord["GbId"].asString();
		if(!dataNodeRecordsRecord["DeviceAddress"].isNull())
			recordObject.deviceAddress = dataNodeRecordsRecord["DeviceAddress"].asString();
		if(!dataNodeRecordsRecord["DeviceDirection"].isNull())
			recordObject.deviceDirection = dataNodeRecordsRecord["DeviceDirection"].asString();
		if(!dataNodeRecordsRecord["DeviceSite"].isNull())
			recordObject.deviceSite = dataNodeRecordsRecord["DeviceSite"].asString();
		if(!dataNodeRecordsRecord["Latitude"].isNull())
			recordObject.latitude = dataNodeRecordsRecord["Latitude"].asString();
		if(!dataNodeRecordsRecord["Longitude"].isNull())
			recordObject.longitude = dataNodeRecordsRecord["Longitude"].asString();
		if(!dataNodeRecordsRecord["DeviceName"].isNull())
			recordObject.deviceName = dataNodeRecordsRecord["DeviceName"].asString();
		if(!dataNodeRecordsRecord["Resolution"].isNull())
			recordObject.resolution = dataNodeRecordsRecord["Resolution"].asString();
		if(!dataNodeRecordsRecord["SipGBId"].isNull())
			recordObject.sipGBId = dataNodeRecordsRecord["SipGBId"].asString();
		if(!dataNodeRecordsRecord["SipPassword"].isNull())
			recordObject.sipPassword = dataNodeRecordsRecord["SipPassword"].asString();
		if(!dataNodeRecordsRecord["SipServerIp"].isNull())
			recordObject.sipServerIp = dataNodeRecordsRecord["SipServerIp"].asString();
		if(!dataNodeRecordsRecord["SipServerPort"].isNull())
			recordObject.sipServerPort = dataNodeRecordsRecord["SipServerPort"].asString();
		if(!dataNodeRecordsRecord["Status"].isNull())
			recordObject.status = std::stoi(dataNodeRecordsRecord["Status"].asString());
		if(!dataNodeRecordsRecord["DeviceType"].isNull())
			recordObject.deviceType = dataNodeRecordsRecord["DeviceType"].asString();
		if(!dataNodeRecordsRecord["Vendor"].isNull())
			recordObject.vendor = dataNodeRecordsRecord["Vendor"].asString();
		if(!dataNodeRecordsRecord["CreateTime"].isNull())
			recordObject.createTime = dataNodeRecordsRecord["CreateTime"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDevicesResult::getMessage()const
{
	return message_;
}

ListDevicesResult::Data ListDevicesResult::getData()const
{
	return data_;
}

std::string ListDevicesResult::getCode()const
{
	return code_;
}

