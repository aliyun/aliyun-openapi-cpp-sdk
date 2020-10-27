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

#include <alibabacloud/cloudesl/model/DescribeEslDevicesRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeEslDevicesRequest;

DescribeEslDevicesRequest::DescribeEslDevicesRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DescribeEslDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEslDevicesRequest::~DescribeEslDevicesRequest()
{}

std::string DescribeEslDevicesRequest::getStoreId()const
{
	return storeId_;
}

void DescribeEslDevicesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::string DescribeEslDevicesRequest::getType()const
{
	return type_;
}

void DescribeEslDevicesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeEslDevicesRequest::getMac()const
{
	return mac_;
}

void DescribeEslDevicesRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setParameter("Mac", mac);
}

int DescribeEslDevicesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEslDevicesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEslDevicesRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeEslDevicesRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setParameter("EslBarCode", eslBarCode);
}

std::string DescribeEslDevicesRequest::getVendor()const
{
	return vendor_;
}

void DescribeEslDevicesRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setParameter("Vendor", vendor);
}

int DescribeEslDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEslDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEslDevicesRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void DescribeEslDevicesRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setParameter("ItemBarCode", itemBarCode);
}

std::string DescribeEslDevicesRequest::getEslStatus()const
{
	return eslStatus_;
}

void DescribeEslDevicesRequest::setEslStatus(const std::string& eslStatus)
{
	eslStatus_ = eslStatus;
	setParameter("EslStatus", eslStatus);
}

int DescribeEslDevicesRequest::getToBatteryLevel()const
{
	return toBatteryLevel_;
}

void DescribeEslDevicesRequest::setToBatteryLevel(int toBatteryLevel)
{
	toBatteryLevel_ = toBatteryLevel;
	setParameter("ToBatteryLevel", std::to_string(toBatteryLevel));
}

int DescribeEslDevicesRequest::getFromBatteryLevel()const
{
	return fromBatteryLevel_;
}

void DescribeEslDevicesRequest::setFromBatteryLevel(int fromBatteryLevel)
{
	fromBatteryLevel_ = fromBatteryLevel;
	setParameter("FromBatteryLevel", std::to_string(fromBatteryLevel));
}

std::string DescribeEslDevicesRequest::getShelfCode()const
{
	return shelfCode_;
}

void DescribeEslDevicesRequest::setShelfCode(const std::string& shelfCode)
{
	shelfCode_ = shelfCode;
	setParameter("ShelfCode", shelfCode);
}

bool DescribeEslDevicesRequest::getBeBind()const
{
	return beBind_;
}

void DescribeEslDevicesRequest::setBeBind(bool beBind)
{
	beBind_ = beBind;
	setParameter("BeBind", beBind ? "true" : "false");
}

