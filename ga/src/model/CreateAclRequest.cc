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

#include <alibabacloud/ga/model/CreateAclRequest.h>

using AlibabaCloud::Ga::Model::CreateAclRequest;

CreateAclRequest::CreateAclRequest() :
	RpcServiceRequest("ga", "2019-11-20", "CreateAcl")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAclRequest::~CreateAclRequest()
{}

bool CreateAclRequest::getDryRun()const
{
	return dryRun_;
}

void CreateAclRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateAclRequest::getAclName()const
{
	return aclName_;
}

void CreateAclRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setParameter("AclName", aclName);
}

std::string CreateAclRequest::getClientToken()const
{
	return clientToken_;
}

void CreateAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::vector<CreateAclRequest::AclEntries> CreateAclRequest::getAclEntries()const
{
	return aclEntries_;
}

void CreateAclRequest::setAclEntries(const std::vector<AclEntries>& aclEntries)
{
	aclEntries_ = aclEntries;
	for(int dep1 = 0; dep1!= aclEntries.size(); dep1++) {
		auto aclEntriesObj = aclEntries.at(dep1);
		std::string aclEntriesObjStr = "AclEntries." + std::to_string(dep1 + 1);
		setParameter(aclEntriesObjStr + ".Entry", aclEntriesObj.entry);
		setParameter(aclEntriesObjStr + ".EntryDescription", aclEntriesObj.entryDescription);
	}
}

std::string CreateAclRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void CreateAclRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setParameter("AddressIPVersion", addressIPVersion);
}

std::string CreateAclRequest::getRegionId()const
{
	return regionId_;
}

void CreateAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

