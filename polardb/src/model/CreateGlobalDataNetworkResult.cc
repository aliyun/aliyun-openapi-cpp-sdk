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

#include <alibabacloud/polardb/model/CreateGlobalDataNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

CreateGlobalDataNetworkResult::CreateGlobalDataNetworkResult() :
	ServiceResult()
{}

CreateGlobalDataNetworkResult::CreateGlobalDataNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateGlobalDataNetworkResult::~CreateGlobalDataNetworkResult()
{}

void CreateGlobalDataNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NetworkId"].isNull())
		networkId_ = value["NetworkId"].asString();
	if(!value["ChannelId"].isNull())
		channelId_ = value["ChannelId"].asString();

}

std::string CreateGlobalDataNetworkResult::getNetworkId()const
{
	return networkId_;
}

std::string CreateGlobalDataNetworkResult::getChannelId()const
{
	return channelId_;
}

