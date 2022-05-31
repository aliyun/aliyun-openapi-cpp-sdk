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
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeEslDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEslDevicesRequest::~DescribeEslDevicesRequest()
{}

std::string DescribeEslDevicesRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeEslDevicesRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeEslDevicesRequest::getType()const
{
	return type_;
}

void DescribeEslDevicesRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string DescribeEslDevicesRequest::getStoreId()const
{
	return storeId_;
}

void DescribeEslDevicesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeEslDevicesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEslDevicesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEslDevicesRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void DescribeEslDevicesRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

int DescribeEslDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEslDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEslDevicesRequest::getTypeEncode()const
{
	return typeEncode_;
}

void DescribeEslDevicesRequest::setTypeEncode(const std::string& typeEncode)
{
	typeEncode_ = typeEncode;
	setBodyParameter("TypeEncode", typeEncode);
}

std::string DescribeEslDevicesRequest::getEslStatus()const
{
	return eslStatus_;
}

void DescribeEslDevicesRequest::setEslStatus(const std::string& eslStatus)
{
	eslStatus_ = eslStatus;
	setBodyParameter("EslStatus", eslStatus);
}

int DescribeEslDevicesRequest::getToBatteryLevel()const
{
	return toBatteryLevel_;
}

void DescribeEslDevicesRequest::setToBatteryLevel(int toBatteryLevel)
{
	toBatteryLevel_ = toBatteryLevel;
	setBodyParameter("ToBatteryLevel", std::to_string(toBatteryLevel));
}

int DescribeEslDevicesRequest::getFromBatteryLevel()const
{
	return fromBatteryLevel_;
}

void DescribeEslDevicesRequest::setFromBatteryLevel(int fromBatteryLevel)
{
	fromBatteryLevel_ = fromBatteryLevel;
	setBodyParameter("FromBatteryLevel", std::to_string(fromBatteryLevel));
}

