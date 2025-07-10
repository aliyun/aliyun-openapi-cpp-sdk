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

#include <alibabacloud/vpc/model/CreateVpcGatewayEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpcGatewayEndpointResult::CreateVpcGatewayEndpointResult() :
	ServiceResult()
{}

CreateVpcGatewayEndpointResult::CreateVpcGatewayEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcGatewayEndpointResult::~CreateVpcGatewayEndpointResult()
{}

void CreateVpcGatewayEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["EndpointName"].isNull())
		endpointName_ = value["EndpointName"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateVpcGatewayEndpointResult::getEndpointName()const
{
	return endpointName_;
}

std::string CreateVpcGatewayEndpointResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateVpcGatewayEndpointResult::getServiceName()const
{
	return serviceName_;
}

std::string CreateVpcGatewayEndpointResult::getEndpointId()const
{
	return endpointId_;
}

std::string CreateVpcGatewayEndpointResult::getCreationTime()const
{
	return creationTime_;
}

