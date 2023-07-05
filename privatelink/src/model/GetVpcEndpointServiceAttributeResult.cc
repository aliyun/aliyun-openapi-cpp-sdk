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

#include <alibabacloud/privatelink/model/GetVpcEndpointServiceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

GetVpcEndpointServiceAttributeResult::GetVpcEndpointServiceAttributeResult() :
	ServiceResult()
{}

GetVpcEndpointServiceAttributeResult::GetVpcEndpointServiceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcEndpointServiceAttributeResult::~GetVpcEndpointServiceAttributeResult()
{}

void GetVpcEndpointServiceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZones = value["Zones"]["Zone"];
	for (const auto &item : allZones)
		zones_.push_back(item.asString());
	if(!value["Payer"].isNull())
		payer_ = value["Payer"].asString();
	if(!value["ServiceDescription"].isNull())
		serviceDescription_ = value["ServiceDescription"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["MaxBandwidth"].isNull())
		maxBandwidth_ = std::stoi(value["MaxBandwidth"].asString());
	if(!value["MinBandwidth"].isNull())
		minBandwidth_ = std::stoi(value["MinBandwidth"].asString());
	if(!value["ServiceDomain"].isNull())
		serviceDomain_ = value["ServiceDomain"].asString();
	if(!value["AutoAcceptEnabled"].isNull())
		autoAcceptEnabled_ = value["AutoAcceptEnabled"].asString() == "true";
	if(!value["ZoneAffinityEnabled"].isNull())
		zoneAffinityEnabled_ = value["ZoneAffinityEnabled"].asString() == "true";
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["ServiceBusinessStatus"].isNull())
		serviceBusinessStatus_ = value["ServiceBusinessStatus"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["ServiceStatus"].isNull())
		serviceStatus_ = value["ServiceStatus"].asString();
	if(!value["ConnectBandwidth"].isNull())
		connectBandwidth_ = std::stoi(value["ConnectBandwidth"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();
	if(!value["ServiceResourceType"].isNull())
		serviceResourceType_ = value["ServiceResourceType"].asString();
	if(!value["PrivateServiceDomainEnabled"].isNull())
		privateServiceDomainEnabled_ = value["PrivateServiceDomainEnabled"].asString() == "true";
	if(!value["PrivateServiceDomain"].isNull())
		privateServiceDomain_ = value["PrivateServiceDomain"].asString();
	if(!value["PrivateServiceDomainVerifyStatus"].isNull())
		privateServiceDomainVerifyStatus_ = value["PrivateServiceDomainVerifyStatus"].asString();
	if(!value["PrivateServiceDomainBusinessStatus"].isNull())
		privateServiceDomainBusinessStatus_ = value["PrivateServiceDomainBusinessStatus"].asString();
	if(!value["PrivateServiceDomainVerifyName"].isNull())
		privateServiceDomainVerifyName_ = value["PrivateServiceDomainVerifyName"].asString();
	if(!value["PrivateServiceDomainVerifyValue"].isNull())
		privateServiceDomainVerifyValue_ = value["PrivateServiceDomainVerifyValue"].asString();
	if(!value["PrivateServiceName"].isNull())
		privateServiceName_ = value["PrivateServiceName"].asString();
	if(!value["ServiceSupportIPv6"].isNull())
		serviceSupportIPv6_ = value["ServiceSupportIPv6"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string GetVpcEndpointServiceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int GetVpcEndpointServiceAttributeResult::getMaxBandwidth()const
{
	return maxBandwidth_;
}

bool GetVpcEndpointServiceAttributeResult::getPrivateServiceDomainEnabled()const
{
	return privateServiceDomainEnabled_;
}

int GetVpcEndpointServiceAttributeResult::getMinBandwidth()const
{
	return minBandwidth_;
}

std::vector<std::string> GetVpcEndpointServiceAttributeResult::getZones()const
{
	return zones_;
}

bool GetVpcEndpointServiceAttributeResult::getAutoAcceptEnabled()const
{
	return autoAcceptEnabled_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceId()const
{
	return serviceId_;
}

bool GetVpcEndpointServiceAttributeResult::getServiceSupportIPv6()const
{
	return serviceSupportIPv6_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceDomainVerifyStatus()const
{
	return privateServiceDomainVerifyStatus_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceDomainVerifyName()const
{
	return privateServiceDomainVerifyName_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceStatus()const
{
	return serviceStatus_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceType()const
{
	return serviceType_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceResourceType()const
{
	return serviceResourceType_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceName()const
{
	return privateServiceName_;
}

std::string GetVpcEndpointServiceAttributeResult::getPayer()const
{
	return payer_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceDomainBusinessStatus()const
{
	return privateServiceDomainBusinessStatus_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceDescription()const
{
	return serviceDescription_;
}

std::string GetVpcEndpointServiceAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceDomain()const
{
	return privateServiceDomain_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceDomain()const
{
	return serviceDomain_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceBusinessStatus()const
{
	return serviceBusinessStatus_;
}

std::string GetVpcEndpointServiceAttributeResult::getServiceName()const
{
	return serviceName_;
}

int GetVpcEndpointServiceAttributeResult::getConnectBandwidth()const
{
	return connectBandwidth_;
}

std::string GetVpcEndpointServiceAttributeResult::getRegionId()const
{
	return regionId_;
}

bool GetVpcEndpointServiceAttributeResult::getZoneAffinityEnabled()const
{
	return zoneAffinityEnabled_;
}

std::string GetVpcEndpointServiceAttributeResult::getPrivateServiceDomainVerifyValue()const
{
	return privateServiceDomainVerifyValue_;
}

