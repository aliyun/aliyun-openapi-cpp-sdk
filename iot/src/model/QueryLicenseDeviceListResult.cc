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

#include <alibabacloud/iot/model/QueryLicenseDeviceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryLicenseDeviceListResult::QueryLicenseDeviceListResult() :
	ServiceResult()
{}

QueryLicenseDeviceListResult::QueryLicenseDeviceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLicenseDeviceListResult::~QueryLicenseDeviceListResult()
{}

void QueryLicenseDeviceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageId"].isNull())
		data_.pageId = std::stoi(dataNode["PageId"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDeviceListNode = dataNode["DeviceList"]["item"];
	for (auto dataNodeDeviceListitem : allDeviceListNode)
	{
		Data::Item itemObject;
		if(!dataNodeDeviceListitem["ProductName"].isNull())
			itemObject.productName = dataNodeDeviceListitem["ProductName"].asString();
		if(!dataNodeDeviceListitem["LicenseCode"].isNull())
			itemObject.licenseCode = dataNodeDeviceListitem["LicenseCode"].asString();
		if(!dataNodeDeviceListitem["ProductKey"].isNull())
			itemObject.productKey = dataNodeDeviceListitem["ProductKey"].asString();
		if(!dataNodeDeviceListitem["DeviceName"].isNull())
			itemObject.deviceName = dataNodeDeviceListitem["DeviceName"].asString();
		if(!dataNodeDeviceListitem["ExpiryTime"].isNull())
			itemObject.expiryTime = std::stol(dataNodeDeviceListitem["ExpiryTime"].asString());
		if(!dataNodeDeviceListitem["GmtCreate"].isNull())
			itemObject.gmtCreate = std::stol(dataNodeDeviceListitem["GmtCreate"].asString());
		if(!dataNodeDeviceListitem["IotId"].isNull())
			itemObject.iotId = dataNodeDeviceListitem["IotId"].asString();
		data_.deviceList.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryLicenseDeviceListResult::Data QueryLicenseDeviceListResult::getData()const
{
	return data_;
}

std::string QueryLicenseDeviceListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryLicenseDeviceListResult::getCode()const
{
	return code_;
}

bool QueryLicenseDeviceListResult::getSuccess()const
{
	return success_;
}

