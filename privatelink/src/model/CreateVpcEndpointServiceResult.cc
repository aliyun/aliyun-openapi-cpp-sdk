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

#include <alibabacloud/privatelink/model/CreateVpcEndpointServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

CreateVpcEndpointServiceResult::CreateVpcEndpointServiceResult() :
	ServiceResult()
{}

CreateVpcEndpointServiceResult::CreateVpcEndpointServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcEndpointServiceResult::~CreateVpcEndpointServiceResult()
{}

void CreateVpcEndpointServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ServiceBusinessStatus"].isNull())
		serviceBusinessStatus_ = value["ServiceBusinessStatus"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["ServiceStatus"].isNull())
		serviceStatus_ = value["ServiceStatus"].asString();
	if(!value["ServiceDescription"].isNull())
		serviceDescription_ = value["ServiceDescription"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ServiceDomain"].isNull())
		serviceDomain_ = value["ServiceDomain"].asString();
	if(!value["ZoneAffinityEnabled"].isNull())
		zoneAffinityEnabled_ = value["ZoneAffinityEnabled"].asString() == "true";
	if(!value["AutoAcceptEnabled"].isNull())
		autoAcceptEnabled_ = value["AutoAcceptEnabled"].asString() == "true";
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["ServiceSupportIPv6"].isNull())
		serviceSupportIPv6_ = value["ServiceSupportIPv6"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateVpcEndpointServiceResult::getServiceBusinessStatus()const
{
	return serviceBusinessStatus_;
}

std::string CreateVpcEndpointServiceResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateVpcEndpointServiceResult::getServiceName()const
{
	return serviceName_;
}

std::string CreateVpcEndpointServiceResult::getServiceStatus()const
{
	return serviceStatus_;
}

std::string CreateVpcEndpointServiceResult::getServiceDescription()const
{
	return serviceDescription_;
}

std::string CreateVpcEndpointServiceResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateVpcEndpointServiceResult::getServiceDomain()const
{
	return serviceDomain_;
}

bool CreateVpcEndpointServiceResult::getZoneAffinityEnabled()const
{
	return zoneAffinityEnabled_;
}

bool CreateVpcEndpointServiceResult::getAutoAcceptEnabled()const
{
	return autoAcceptEnabled_;
}

std::string CreateVpcEndpointServiceResult::getServiceId()const
{
	return serviceId_;
}

bool CreateVpcEndpointServiceResult::getServiceSupportIPv6()const
{
	return serviceSupportIPv6_;
}

