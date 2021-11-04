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

#include <alibabacloud/privatelink/model/CreateVpcEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

CreateVpcEndpointResult::CreateVpcEndpointResult() :
	ServiceResult()
{}

CreateVpcEndpointResult::CreateVpcEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcEndpointResult::~CreateVpcEndpointResult()
{}

void CreateVpcEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndpointDomain"].isNull())
		endpointDomain_ = value["EndpointDomain"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
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
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stol(value["Bandwidth"].asString());
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["ConnectionStatus"].isNull())
		connectionStatus_ = value["ConnectionStatus"].asString();

}

std::string CreateVpcEndpointResult::getEndpointStatus()const
{
	return endpointStatus_;
}

std::string CreateVpcEndpointResult::getEndpointDomain()const
{
	return endpointDomain_;
}

std::string CreateVpcEndpointResult::getVpcId()const
{
	return vpcId_;
}

std::string CreateVpcEndpointResult::getEndpointName()const
{
	return endpointName_;
}

std::string CreateVpcEndpointResult::getServiceName()const
{
	return serviceName_;
}

std::string CreateVpcEndpointResult::getCreateTime()const
{
	return createTime_;
}

long CreateVpcEndpointResult::getBandwidth()const
{
	return bandwidth_;
}

std::string CreateVpcEndpointResult::getEndpointId()const
{
	return endpointId_;
}

std::string CreateVpcEndpointResult::getEndpointBusinessStatus()const
{
	return endpointBusinessStatus_;
}

std::string CreateVpcEndpointResult::getEndpointDescription()const
{
	return endpointDescription_;
}

std::string CreateVpcEndpointResult::getConnectionStatus()const
{
	return connectionStatus_;
}

std::string CreateVpcEndpointResult::getServiceId()const
{
	return serviceId_;
}

