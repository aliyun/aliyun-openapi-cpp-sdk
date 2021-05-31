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

#include <alibabacloud/dbfs/model/InsertSynchronizConstantsRequest.h>

using AlibabaCloud::DBFS::Model::InsertSynchronizConstantsRequest;

InsertSynchronizConstantsRequest::InsertSynchronizConstantsRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "InsertSynchronizConstants")
{
	setMethod(HttpRequest::Method::Post);
}

InsertSynchronizConstantsRequest::~InsertSynchronizConstantsRequest()
{}

std::string InsertSynchronizConstantsRequest::getZoneData()const
{
	return zoneData_;
}

void InsertSynchronizConstantsRequest::setZoneData(const std::string& zoneData)
{
	zoneData_ = zoneData;
	setParameter("ZoneData", zoneData);
}

std::string InsertSynchronizConstantsRequest::getOsversionData()const
{
	return osversionData_;
}

void InsertSynchronizConstantsRequest::setOsversionData(const std::string& osversionData)
{
	osversionData_ = osversionData;
	setParameter("OsversionData", osversionData);
}

std::string InsertSynchronizConstantsRequest::getEndpointData()const
{
	return endpointData_;
}

void InsertSynchronizConstantsRequest::setEndpointData(const std::string& endpointData)
{
	endpointData_ = endpointData;
	setParameter("EndpointData", endpointData);
}

int InsertSynchronizConstantsRequest::getPageNumber()const
{
	return pageNumber_;
}

void InsertSynchronizConstantsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string InsertSynchronizConstantsRequest::getMasterData()const
{
	return masterData_;
}

void InsertSynchronizConstantsRequest::setMasterData(const std::string& masterData)
{
	masterData_ = masterData;
	setParameter("MasterData", masterData);
}

std::string InsertSynchronizConstantsRequest::getRegionId()const
{
	return regionId_;
}

void InsertSynchronizConstantsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string InsertSynchronizConstantsRequest::getProductCodeData()const
{
	return productCodeData_;
}

void InsertSynchronizConstantsRequest::setProductCodeData(const std::string& productCodeData)
{
	productCodeData_ = productCodeData;
	setParameter("ProductCodeData", productCodeData);
}

int InsertSynchronizConstantsRequest::getPageSize()const
{
	return pageSize_;
}

void InsertSynchronizConstantsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string InsertSynchronizConstantsRequest::getAccessData()const
{
	return accessData_;
}

void InsertSynchronizConstantsRequest::setAccessData(const std::string& accessData)
{
	accessData_ = accessData;
	setParameter("AccessData", accessData);
}

std::string InsertSynchronizConstantsRequest::getRegionData()const
{
	return regionData_;
}

void InsertSynchronizConstantsRequest::setRegionData(const std::string& regionData)
{
	regionData_ = regionData;
	setParameter("RegionData", regionData);
}

