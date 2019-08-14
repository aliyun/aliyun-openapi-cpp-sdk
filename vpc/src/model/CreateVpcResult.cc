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

#include <alibabacloud/vpc/model/CreateVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpcResult::CreateVpcResult() :
	ServiceResult()
{}

CreateVpcResult::CreateVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcResult::~CreateVpcResult()
{}

void CreateVpcResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VRouterId"].isNull())
		vRouterId_ = value["VRouterId"].asString();
	if(!value["RouteTableId"].isNull())
		routeTableId_ = value["RouteTableId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateVpcResult::getVRouterId()const
{
	return vRouterId_;
}

std::string CreateVpcResult::getRouteTableId()const
{
	return routeTableId_;
}

std::string CreateVpcResult::getVpcId()const
{
	return vpcId_;
}

std::string CreateVpcResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

