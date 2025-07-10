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

#include <alibabacloud/vpc/model/DescribeCustomerGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeCustomerGatewayResult::DescribeCustomerGatewayResult() :
	ServiceResult()
{}

DescribeCustomerGatewayResult::DescribeCustomerGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomerGatewayResult::~DescribeCustomerGatewayResult()
{}

void DescribeCustomerGatewayResult::parse(const std::string &payload)
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
	if(!value["Asn"].isNull())
		asn_ = std::stol(value["Asn"].asString());
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["AuthKey"].isNull())
		authKey_ = value["AuthKey"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeCustomerGatewayResult::getDescription()const
{
	return description_;
}

std::string DescribeCustomerGatewayResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

std::string DescribeCustomerGatewayResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeCustomerGatewayResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeCustomerGatewayResult::getAuthKey()const
{
	return authKey_;
}

std::string DescribeCustomerGatewayResult::getIpAddress()const
{
	return ipAddress_;
}

long DescribeCustomerGatewayResult::getAsn()const
{
	return asn_;
}

std::vector<DescribeCustomerGatewayResult::Tag> DescribeCustomerGatewayResult::getTags()const
{
	return tags_;
}

std::string DescribeCustomerGatewayResult::getName()const
{
	return name_;
}

