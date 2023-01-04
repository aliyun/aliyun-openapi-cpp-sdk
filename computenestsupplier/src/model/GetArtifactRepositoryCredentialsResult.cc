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

#include <alibabacloud/computenestsupplier/model/GetArtifactRepositoryCredentialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

GetArtifactRepositoryCredentialsResult::GetArtifactRepositoryCredentialsResult() :
	ServiceResult()
{}

GetArtifactRepositoryCredentialsResult::GetArtifactRepositoryCredentialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetArtifactRepositoryCredentialsResult::~GetArtifactRepositoryCredentialsResult()
{}

void GetArtifactRepositoryCredentialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableResourcesNode = value["AvailableResources"]["availableResourcesItem"];
	for (auto valueAvailableResourcesavailableResourcesItem : allAvailableResourcesNode)
	{
		AvailableResourcesItem availableResourcesObject;
		if(!valueAvailableResourcesavailableResourcesItem["RegionId"].isNull())
			availableResourcesObject.regionId = valueAvailableResourcesavailableResourcesItem["RegionId"].asString();
		if(!valueAvailableResourcesavailableResourcesItem["RepositoryName"].isNull())
			availableResourcesObject.repositoryName = valueAvailableResourcesavailableResourcesItem["RepositoryName"].asString();
		if(!valueAvailableResourcesavailableResourcesItem["Path"].isNull())
			availableResourcesObject.path = valueAvailableResourcesavailableResourcesItem["Path"].asString();
		availableResources_.push_back(availableResourcesObject);
	}
	auto credentialsNode = value["Credentials"];
	if(!credentialsNode["Username"].isNull())
		credentials_.username = credentialsNode["Username"].asString();
	if(!credentialsNode["Password"].isNull())
		credentials_.password = credentialsNode["Password"].asString();
	if(!credentialsNode["AccessKeyId"].isNull())
		credentials_.accessKeyId = credentialsNode["AccessKeyId"].asString();
	if(!credentialsNode["AccessKeySecret"].isNull())
		credentials_.accessKeySecret = credentialsNode["AccessKeySecret"].asString();
	if(!credentialsNode["SecurityToken"].isNull())
		credentials_.securityToken = credentialsNode["SecurityToken"].asString();
	if(!value["ExpireDate"].isNull())
		expireDate_ = value["ExpireDate"].asString();

}

std::string GetArtifactRepositoryCredentialsResult::getExpireDate()const
{
	return expireDate_;
}

std::vector<GetArtifactRepositoryCredentialsResult::AvailableResourcesItem> GetArtifactRepositoryCredentialsResult::getAvailableResources()const
{
	return availableResources_;
}

GetArtifactRepositoryCredentialsResult::Credentials GetArtifactRepositoryCredentialsResult::getCredentials()const
{
	return credentials_;
}

