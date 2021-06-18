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

#include <alibabacloud/cloudesl/model/DescribeApDevicesRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeApDevicesRequest;

DescribeApDevicesRequest::DescribeApDevicesRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeApDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeApDevicesRequest::~DescribeApDevicesRequest()
{}

std::string DescribeApDevicesRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeApDevicesRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribeApDevicesRequest::getApMac()const
{
	return apMac_;
}

void DescribeApDevicesRequest::setApMac(const std::string& apMac)
{
	apMac_ = apMac;
	setBodyParameter("ApMac", apMac);
}

std::string DescribeApDevicesRequest::getStoreId()const
{
	return storeId_;
}

void DescribeApDevicesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeApDevicesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeApDevicesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeApDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeApDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeApDevicesRequest::getModel()const
{
	return model_;
}

void DescribeApDevicesRequest::setModel(const std::string& model)
{
	model_ = model;
	setBodyParameter("Model", model);
}

bool DescribeApDevicesRequest::getBeActivate()const
{
	return beActivate_;
}

void DescribeApDevicesRequest::setBeActivate(bool beActivate)
{
	beActivate_ = beActivate;
	setBodyParameter("BeActivate", beActivate ? "true" : "false");
}

bool DescribeApDevicesRequest::getStatus()const
{
	return status_;
}

void DescribeApDevicesRequest::setStatus(bool status)
{
	status_ = status;
	setBodyParameter("Status", status ? "true" : "false");
}

