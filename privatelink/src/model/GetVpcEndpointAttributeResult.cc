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

#include <alibabacloud/privatelink/model/GetVpcEndpointAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

GetVpcEndpointAttributeResult::GetVpcEndpointAttributeResult() :
	ServiceResult()
{}

GetVpcEndpointAttributeResult::GetVpcEndpointAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcEndpointAttributeResult::~GetVpcEndpointAttributeResult()
{}

void GetVpcEndpointAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Payer"].isNull())
		payer_ = value["Payer"].asString();
	if(!value["EndpointDomain"].isNull())
		endpointDomain_ = value["EndpointDomain"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ResourceOwner"].isNull())
		resourceOwner_ = value["ResourceOwner"].asString() == "true";
	if(!value["EndpointBusinessStatus"].isNull())
		endpointBusinessStatus_ = value["EndpointBusinessStatus"].asString();
	if(!value["EndpointDescription"].isNull())
		endpointDescription_ = value["EndpointDescription"].asString();
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["EndpointStatus"].isNull())
		endpointStatus_ = value["EndpointStatus"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["EndpointName"].isNull())
		endpointName_ = value["EndpointName"].asString();
	if(!value["ZonePrivateIpAddressCount"].isNull())
		zonePrivateIpAddressCount_ = std::stol(value["ZonePrivateIpAddressCount"].asString());
	if(!value["EndpointType"].isNull())
		endpointType_ = value["EndpointType"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ConnectionStatus"].isNull())
		connectionStatus_ = value["ConnectionStatus"].asString();
	if(!value["ZoneAffinityEnabled"].isNull())
		zoneAffinityEnabled_ = value["ZoneAffinityEnabled"].asString() == "true";
	if(!value["PrivateServiceName"].isNull())
		privateServiceName_ = value["PrivateServiceName"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string GetVpcEndpointAttributeResult::getPayer()const
{
	return payer_;
}

std::string GetVpcEndpointAttributeResult::getEndpointDomain()const
{
	return endpointDomain_;
}

std::string GetVpcEndpointAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetVpcEndpointAttributeResult::getCreateTime()const
{
	return createTime_;
}

bool GetVpcEndpointAttributeResult::getResourceOwner()const
{
	return resourceOwner_;
}

long GetVpcEndpointAttributeResult::getZonePrivateIpAddressCount()const
{
	return zonePrivateIpAddressCount_;
}

std::string GetVpcEndpointAttributeResult::getEndpointBusinessStatus()const
{
	return endpointBusinessStatus_;
}

std::string GetVpcEndpointAttributeResult::getEndpointDescription()const
{
	return endpointDescription_;
}

std::string GetVpcEndpointAttributeResult::getServiceId()const
{
	return serviceId_;
}

std::string GetVpcEndpointAttributeResult::getEndpointStatus()const
{
	return endpointStatus_;
}

std::string GetVpcEndpointAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string GetVpcEndpointAttributeResult::getEndpointName()const
{
	return endpointName_;
}

std::string GetVpcEndpointAttributeResult::getServiceName()const
{
	return serviceName_;
}

int GetVpcEndpointAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string GetVpcEndpointAttributeResult::getEndpointId()const
{
	return endpointId_;
}

std::string GetVpcEndpointAttributeResult::getEndpointType()const
{
	return endpointType_;
}

std::string GetVpcEndpointAttributeResult::getPrivateServiceName()const
{
	return privateServiceName_;
}

std::string GetVpcEndpointAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string GetVpcEndpointAttributeResult::getConnectionStatus()const
{
	return connectionStatus_;
}

bool GetVpcEndpointAttributeResult::getZoneAffinityEnabled()const
{
	return zoneAffinityEnabled_;
}

