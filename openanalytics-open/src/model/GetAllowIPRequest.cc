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

#include <alibabacloud/openanalytics-open/model/GetAllowIPRequest.h>

using AlibabaCloud::Openanalytics_open::Model::GetAllowIPRequest;

GetAllowIPRequest::GetAllowIPRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "GetAllowIP")
{
	setMethod(HttpRequest::Method::Post);
}

GetAllowIPRequest::~GetAllowIPRequest()
{}

std::string GetAllowIPRequest::getRegionId()const
{
	return regionId_;
}

void GetAllowIPRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string GetAllowIPRequest::getNetworkType()const
{
	return networkType_;
}

void GetAllowIPRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setBodyParameter("NetworkType", networkType);
}

std::string GetAllowIPRequest::getProduct()const
{
	return product_;
}

void GetAllowIPRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

