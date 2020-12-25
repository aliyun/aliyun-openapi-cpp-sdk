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

#include <alibabacloud/emr/model/ListVswitchRequest.h>

using AlibabaCloud::Emr::Model::ListVswitchRequest;

ListVswitchRequest::ListVswitchRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListVswitch")
{
	setMethod(HttpRequest::Method::Post);
}

ListVswitchRequest::~ListVswitchRequest()
{}

std::string ListVswitchRequest::getDepositType()const
{
	return depositType_;
}

void ListVswitchRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string ListVswitchRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListVswitchRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListVswitchRequest::getProductType()const
{
	return productType_;
}

void ListVswitchRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string ListVswitchRequest::getRegionId()const
{
	return regionId_;
}

void ListVswitchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListVswitchRequest::getVpcId()const
{
	return vpcId_;
}

void ListVswitchRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ListVswitchRequest::getZoneId()const
{
	return zoneId_;
}

void ListVswitchRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

