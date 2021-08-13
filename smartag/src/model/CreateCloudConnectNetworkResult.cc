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

#include <alibabacloud/smartag/model/CreateCloudConnectNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateCloudConnectNetworkResult::CreateCloudConnectNetworkResult() :
	ServiceResult()
{}

CreateCloudConnectNetworkResult::CreateCloudConnectNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCloudConnectNetworkResult::~CreateCloudConnectNetworkResult()
{}

void CreateCloudConnectNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CcnId"].isNull())
		ccnId_ = value["CcnId"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["SnatCidrBlock"].isNull())
		snatCidrBlock_ = value["SnatCidrBlock"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateCloudConnectNetworkResult::getStatus()const
{
	return status_;
}

std::string CreateCloudConnectNetworkResult::getDescription()const
{
	return description_;
}

std::string CreateCloudConnectNetworkResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateCloudConnectNetworkResult::getCcnId()const
{
	return ccnId_;
}

std::string CreateCloudConnectNetworkResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::string CreateCloudConnectNetworkResult::getSnatCidrBlock()const
{
	return snatCidrBlock_;
}

std::string CreateCloudConnectNetworkResult::getName()const
{
	return name_;
}

