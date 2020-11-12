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

#include <alibabacloud/openanalytics-open/model/AddEndPointRequest.h>

using AlibabaCloud::Openanalytics_open::Model::AddEndPointRequest;

AddEndPointRequest::AddEndPointRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "AddEndPoint")
{
	setMethod(HttpRequest::Method::Post);
}

AddEndPointRequest::~AddEndPointRequest()
{}

std::string AddEndPointRequest::getProduct()const
{
	return product_;
}

void AddEndPointRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

std::string AddEndPointRequest::getNetworkType()const
{
	return networkType_;
}

void AddEndPointRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setBodyParameter("NetworkType", networkType);
}

std::string AddEndPointRequest::getVswitch()const
{
	return vswitch_;
}

void AddEndPointRequest::setVswitch(const std::string& vswitch)
{
	vswitch_ = vswitch;
	setBodyParameter("Vswitch", vswitch);
}

std::string AddEndPointRequest::getRegionId()const
{
	return regionId_;
}

void AddEndPointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string AddEndPointRequest::getZone()const
{
	return zone_;
}

void AddEndPointRequest::setZone(const std::string& zone)
{
	zone_ = zone;
	setBodyParameter("Zone", zone);
}

std::string AddEndPointRequest::getVpcID()const
{
	return vpcID_;
}

void AddEndPointRequest::setVpcID(const std::string& vpcID)
{
	vpcID_ = vpcID;
	setBodyParameter("VpcID", vpcID);
}

