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

#include <alibabacloud/vpc/model/GetVpcGatewayEndpointAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVpcGatewayEndpointAttributeResult::GetVpcGatewayEndpointAttributeResult() :
	ServiceResult()
{}

GetVpcGatewayEndpointAttributeResult::GetVpcGatewayEndpointAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcGatewayEndpointAttributeResult::~GetVpcGatewayEndpointAttributeResult()
{}

void GetVpcGatewayEndpointAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allRouteTables = value["RouteTables"]["RouteTable"];
	for (const auto &item : allRouteTables)
		routeTables_.push_back(item.asString());
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["EndpointName"].isNull())
		endpointName_ = value["EndpointName"].asString();
	if(!value["EndpointDescription"].isNull())
		endpointDescription_ = value["EndpointDescription"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["PolicyDocument"].isNull())
		policyDocument_ = value["PolicyDocument"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["EndpointStatus"].isNull())
		endpointStatus_ = value["EndpointStatus"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string GetVpcGatewayEndpointAttributeResult::getEndpointStatus()const
{
	return endpointStatus_;
}

std::string GetVpcGatewayEndpointAttributeResult::getEndpointName()const
{
	return endpointName_;
}

std::string GetVpcGatewayEndpointAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string GetVpcGatewayEndpointAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetVpcGatewayEndpointAttributeResult::getServiceName()const
{
	return serviceName_;
}

std::vector<std::string> GetVpcGatewayEndpointAttributeResult::getRouteTables()const
{
	return routeTables_;
}

std::string GetVpcGatewayEndpointAttributeResult::getEndpointId()const
{
	return endpointId_;
}

std::string GetVpcGatewayEndpointAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string GetVpcGatewayEndpointAttributeResult::getPolicyDocument()const
{
	return policyDocument_;
}

std::string GetVpcGatewayEndpointAttributeResult::getEndpointDescription()const
{
	return endpointDescription_;
}

std::vector<GetVpcGatewayEndpointAttributeResult::Tag> GetVpcGatewayEndpointAttributeResult::getTags()const
{
	return tags_;
}

