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

#include <alibabacloud/emr/model/ListSecurityGroupRequest.h>

using AlibabaCloud::Emr::Model::ListSecurityGroupRequest;

ListSecurityGroupRequest::ListSecurityGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ListSecurityGroupRequest::~ListSecurityGroupRequest()
{}

std::string ListSecurityGroupRequest::getDepositType()const
{
	return depositType_;
}

void ListSecurityGroupRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string ListSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListSecurityGroupRequest::getProductType()const
{
	return productType_;
}

void ListSecurityGroupRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string ListSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void ListSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListSecurityGroupRequest::getNetType()const
{
	return netType_;
}

void ListSecurityGroupRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::string ListSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void ListSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

