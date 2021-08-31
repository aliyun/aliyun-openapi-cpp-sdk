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

#include <alibabacloud/edas/model/QueryRegionConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryRegionConfigResult::QueryRegionConfigResult() :
	ServiceResult()
{}

QueryRegionConfigResult::QueryRegionConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRegionConfigResult::~QueryRegionConfigResult()
{}

void QueryRegionConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto regionConfigNode = value["RegionConfig"];
	if(!regionConfigNode["AddressServerHost"].isNull())
		regionConfig_.addressServerHost = regionConfigNode["AddressServerHost"].asString();
	if(!regionConfigNode["AgentInstallScript"].isNull())
		regionConfig_.agentInstallScript = regionConfigNode["AgentInstallScript"].asString();
	if(!regionConfigNode["FileServerType"].isNull())
		regionConfig_.fileServerType = regionConfigNode["FileServerType"].asString();
	if(!regionConfigNode["Id"].isNull())
		regionConfig_.id = regionConfigNode["Id"].asString();
	if(!regionConfigNode["ImageId"].isNull())
		regionConfig_.imageId = regionConfigNode["ImageId"].asString();
	if(!regionConfigNode["Name"].isNull())
		regionConfig_.name = regionConfigNode["Name"].asString();
	if(!regionConfigNode["No"].isNull())
		regionConfig_.no = std::stoi(regionConfigNode["No"].asString());
	if(!regionConfigNode["Tag"].isNull())
		regionConfig_.tag = regionConfigNode["Tag"].asString();
	auto fileServerConfigNode = regionConfigNode["FileServerConfig"];
	if(!fileServerConfigNode["Bucket"].isNull())
		regionConfig_.fileServerConfig.bucket = fileServerConfigNode["Bucket"].asString();
	if(!fileServerConfigNode["InternalUrl"].isNull())
		regionConfig_.fileServerConfig.internalUrl = fileServerConfigNode["InternalUrl"].asString();
	if(!fileServerConfigNode["PublicUrl"].isNull())
		regionConfig_.fileServerConfig.publicUrl = fileServerConfigNode["PublicUrl"].asString();
	if(!fileServerConfigNode["VpcUrl"].isNull())
		regionConfig_.fileServerConfig.vpcUrl = fileServerConfigNode["VpcUrl"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryRegionConfigResult::getMessage()const
{
	return message_;
}

QueryRegionConfigResult::RegionConfig QueryRegionConfigResult::getRegionConfig()const
{
	return regionConfig_;
}

int QueryRegionConfigResult::getCode()const
{
	return code_;
}

