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

#include <alibabacloud/sas/model/ListPrivateRegistryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListPrivateRegistryListResult::ListPrivateRegistryListResult() :
	ServiceResult()
{}

ListPrivateRegistryListResult::ListPrivateRegistryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateRegistryListResult::~ListPrivateRegistryListResult()
{}

void ListPrivateRegistryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageRegistryInfosNode = value["ImageRegistryInfos"]["ImageRegistryInfo"];
	for (auto valueImageRegistryInfosImageRegistryInfo : allImageRegistryInfosNode)
	{
		ImageRegistryInfo imageRegistryInfosObject;
		if(!valueImageRegistryInfosImageRegistryInfo["VpcId"].isNull())
			imageRegistryInfosObject.vpcId = valueImageRegistryInfosImageRegistryInfo["VpcId"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["Token"].isNull())
			imageRegistryInfosObject.token = valueImageRegistryInfosImageRegistryInfo["Token"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["WhiteList"].isNull())
			imageRegistryInfosObject.whiteList = valueImageRegistryInfosImageRegistryInfo["WhiteList"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["AliUid"].isNull())
			imageRegistryInfosObject.aliUid = std::stol(valueImageRegistryInfosImageRegistryInfo["AliUid"].asString());
		if(!valueImageRegistryInfosImageRegistryInfo["RegistryType"].isNull())
			imageRegistryInfosObject.registryType = valueImageRegistryInfosImageRegistryInfo["RegistryType"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["DomainName"].isNull())
			imageRegistryInfosObject.domainName = valueImageRegistryInfosImageRegistryInfo["DomainName"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["RegionId"].isNull())
			imageRegistryInfosObject.regionId = valueImageRegistryInfosImageRegistryInfo["RegionId"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["Password"].isNull())
			imageRegistryInfosObject.password = valueImageRegistryInfosImageRegistryInfo["Password"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["NetType"].isNull())
			imageRegistryInfosObject.netType = std::stol(valueImageRegistryInfosImageRegistryInfo["NetType"].asString());
		if(!valueImageRegistryInfosImageRegistryInfo["RegistryVersion"].isNull())
			imageRegistryInfosObject.registryVersion = valueImageRegistryInfosImageRegistryInfo["RegistryVersion"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["ProtocolType"].isNull())
			imageRegistryInfosObject.protocolType = std::stol(valueImageRegistryInfosImageRegistryInfo["ProtocolType"].asString());
		if(!valueImageRegistryInfosImageRegistryInfo["RegistryHostIp"].isNull())
			imageRegistryInfosObject.registryHostIp = valueImageRegistryInfosImageRegistryInfo["RegistryHostIp"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["UserName"].isNull())
			imageRegistryInfosObject.userName = valueImageRegistryInfosImageRegistryInfo["UserName"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["Id"].isNull())
			imageRegistryInfosObject.id = std::stol(valueImageRegistryInfosImageRegistryInfo["Id"].asString());
		if(!valueImageRegistryInfosImageRegistryInfo["RegistryName"].isNull())
			imageRegistryInfosObject.registryName = valueImageRegistryInfosImageRegistryInfo["RegistryName"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["PersistenceDay"].isNull())
			imageRegistryInfosObject.persistenceDay = std::stol(valueImageRegistryInfosImageRegistryInfo["PersistenceDay"].asString());
		if(!valueImageRegistryInfosImageRegistryInfo["JenkinsEnv"].isNull())
			imageRegistryInfosObject.jenkinsEnv = valueImageRegistryInfosImageRegistryInfo["JenkinsEnv"].asString();
		if(!valueImageRegistryInfosImageRegistryInfo["TransPerHour"].isNull())
			imageRegistryInfosObject.transPerHour = std::stoi(valueImageRegistryInfosImageRegistryInfo["TransPerHour"].asString());
		imageRegistryInfos_.push_back(imageRegistryInfosObject);
	}

}

std::vector<ListPrivateRegistryListResult::ImageRegistryInfo> ListPrivateRegistryListResult::getImageRegistryInfos()const
{
	return imageRegistryInfos_;
}

