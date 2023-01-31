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

#include <alibabacloud/vpc/model/CreateNatGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateNatGatewayResult::CreateNatGatewayResult() :
	ServiceResult()
{}

CreateNatGatewayResult::CreateNatGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNatGatewayResult::~CreateNatGatewayResult()
{}

void CreateNatGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allForwardTableIds = value["ForwardTableIds"]["ForwardTableId"];
	for (const auto &item : allForwardTableIds)
		forwardTableIds_.push_back(item.asString());
	auto allSnatTableIds = value["SnatTableIds"]["SnatTableId"];
	for (const auto &item : allSnatTableIds)
		snatTableIds_.push_back(item.asString());
	auto allBandwidthPackageIds = value["BandwidthPackageIds"]["BandwidthPackageId"];
	for (const auto &item : allBandwidthPackageIds)
		bandwidthPackageIds_.push_back(item.asString());
	auto allFullNatTableIds = value["FullNatTableIds"]["FullNatTableId"];
	for (const auto &item : allFullNatTableIds)
		fullNatTableIds_.push_back(item.asString());
	if(!value["NatGatewayId"].isNull())
		natGatewayId_ = value["NatGatewayId"].asString();

}

std::vector<std::string> CreateNatGatewayResult::getSnatTableIds()const
{
	return snatTableIds_;
}

std::vector<std::string> CreateNatGatewayResult::getForwardTableIds()const
{
	return forwardTableIds_;
}

std::vector<std::string> CreateNatGatewayResult::getFullNatTableIds()const
{
	return fullNatTableIds_;
}

std::vector<std::string> CreateNatGatewayResult::getBandwidthPackageIds()const
{
	return bandwidthPackageIds_;
}

std::string CreateNatGatewayResult::getNatGatewayId()const
{
	return natGatewayId_;
}

