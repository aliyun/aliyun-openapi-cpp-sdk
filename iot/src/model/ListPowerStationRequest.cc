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

#include <alibabacloud/iot/model/ListPowerStationRequest.h>

using AlibabaCloud::Iot::Model::ListPowerStationRequest;

ListPowerStationRequest::ListPowerStationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListPowerStation")
{
	setMethod(HttpRequest::Method::Post);
}

ListPowerStationRequest::~ListPowerStationRequest()
{}

std::string ListPowerStationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListPowerStationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListPowerStationRequest::getPageSize()const
{
	return pageSize_;
}

void ListPowerStationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListPowerStationRequest::getAlgorithmInstanceUid()const
{
	return algorithmInstanceUid_;
}

void ListPowerStationRequest::setAlgorithmInstanceUid(const std::string& algorithmInstanceUid)
{
	algorithmInstanceUid_ = algorithmInstanceUid;
	setParameter("AlgorithmInstanceUid", algorithmInstanceUid);
}

int ListPowerStationRequest::getPageNo()const
{
	return pageNo_;
}

void ListPowerStationRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string ListPowerStationRequest::getPowerStationName()const
{
	return powerStationName_;
}

void ListPowerStationRequest::setPowerStationName(const std::string& powerStationName)
{
	powerStationName_ = powerStationName;
	setParameter("PowerStationName", powerStationName);
}

std::string ListPowerStationRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListPowerStationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListPowerStationRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListPowerStationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

