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

#include <alibabacloud/vpc/model/GetIpv4GatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetIpv4GatewayAttributeResult::GetIpv4GatewayAttributeResult() :
	ServiceResult()
{}

GetIpv4GatewayAttributeResult::GetIpv4GatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIpv4GatewayAttributeResult::~GetIpv4GatewayAttributeResult()
{}

void GetIpv4GatewayAttributeResult::parse(const std::string &payload)
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
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Ipv4GatewayId"].isNull())
		ipv4GatewayId_ = value["Ipv4GatewayId"].asString();
	if(!value["Ipv4GatewayDescription"].isNull())
		ipv4GatewayDescription_ = value["Ipv4GatewayDescription"].asString();
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString() == "true";
	if(!value["Ipv4GatewayRouteTableId"].isNull())
		ipv4GatewayRouteTableId_ = value["Ipv4GatewayRouteTableId"].asString();
	if(!value["Ipv4GatewayName"].isNull())
		ipv4GatewayName_ = value["Ipv4GatewayName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string GetIpv4GatewayAttributeResult::getStatus()const
{
	return status_;
}

std::string GetIpv4GatewayAttributeResult::getIpv4GatewayRouteTableId()const
{
	return ipv4GatewayRouteTableId_;
}

std::string GetIpv4GatewayAttributeResult::getIpv4GatewayName()const
{
	return ipv4GatewayName_;
}

std::string GetIpv4GatewayAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string GetIpv4GatewayAttributeResult::getIpv4GatewayId()const
{
	return ipv4GatewayId_;
}

std::string GetIpv4GatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetIpv4GatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

bool GetIpv4GatewayAttributeResult::getEnabled()const
{
	return enabled_;
}

std::vector<GetIpv4GatewayAttributeResult::Tag> GetIpv4GatewayAttributeResult::getTags()const
{
	return tags_;
}

std::string GetIpv4GatewayAttributeResult::getIpv4GatewayDescription()const
{
	return ipv4GatewayDescription_;
}

