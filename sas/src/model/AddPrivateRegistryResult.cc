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

#include <alibabacloud/sas/model/AddPrivateRegistryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

AddPrivateRegistryResult::AddPrivateRegistryResult() :
	ServiceResult()
{}

AddPrivateRegistryResult::AddPrivateRegistryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddPrivateRegistryResult::~AddPrivateRegistryResult()
{}

void AddPrivateRegistryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["Token"].isNull())
		data_.token = dataNode["Token"].asString();
	if(!dataNode["TransPerHour"].isNull())
		data_.transPerHour = std::stoi(dataNode["TransPerHour"].asString());
	if(!dataNode["AliUid"].isNull())
		data_.aliUid = std::stol(dataNode["AliUid"].asString());
	if(!dataNode["RegistryType"].isNull())
		data_.registryType = dataNode["RegistryType"].asString();
	if(!dataNode["DomainName"].isNull())
		data_.domainName = dataNode["DomainName"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Password"].isNull())
		data_.password = dataNode["Password"].asString();
	if(!dataNode["NetType"].isNull())
		data_.netType = std::stol(dataNode["NetType"].asString());
	if(!dataNode["RegistryVersion"].isNull())
		data_.registryVersion = dataNode["RegistryVersion"].asString();
	if(!dataNode["ProtocolType"].isNull())
		data_.protocolType = std::stol(dataNode["ProtocolType"].asString());
	if(!dataNode["RegistryHostIp"].isNull())
		data_.registryHostIp = dataNode["RegistryHostIp"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());

}

AddPrivateRegistryResult::Data AddPrivateRegistryResult::getData()const
{
	return data_;
}

