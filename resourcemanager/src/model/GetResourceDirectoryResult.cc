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

#include <alibabacloud/resourcemanager/model/GetResourceDirectoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetResourceDirectoryResult::GetResourceDirectoryResult() :
	ServiceResult()
{}

GetResourceDirectoryResult::GetResourceDirectoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourceDirectoryResult::~GetResourceDirectoryResult()
{}

void GetResourceDirectoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceDirectoryNode = value["ResourceDirectory"];
	if(!resourceDirectoryNode["ControlPolicyStatus"].isNull())
		resourceDirectory_.controlPolicyStatus = resourceDirectoryNode["ControlPolicyStatus"].asString();
	if(!resourceDirectoryNode["CreateTime"].isNull())
		resourceDirectory_.createTime = resourceDirectoryNode["CreateTime"].asString();
	if(!resourceDirectoryNode["IdentityInformation"].isNull())
		resourceDirectory_.identityInformation = resourceDirectoryNode["IdentityInformation"].asString();
	if(!resourceDirectoryNode["MasterAccountId"].isNull())
		resourceDirectory_.masterAccountId = resourceDirectoryNode["MasterAccountId"].asString();
	if(!resourceDirectoryNode["MasterAccountName"].isNull())
		resourceDirectory_.masterAccountName = resourceDirectoryNode["MasterAccountName"].asString();
	if(!resourceDirectoryNode["MemberDeletionStatus"].isNull())
		resourceDirectory_.memberDeletionStatus = resourceDirectoryNode["MemberDeletionStatus"].asString();
	if(!resourceDirectoryNode["ResourceDirectoryId"].isNull())
		resourceDirectory_.resourceDirectoryId = resourceDirectoryNode["ResourceDirectoryId"].asString();
	if(!resourceDirectoryNode["RootFolderId"].isNull())
		resourceDirectory_.rootFolderId = resourceDirectoryNode["RootFolderId"].asString();
	if(!resourceDirectoryNode["ScpStatus"].isNull())
		resourceDirectory_.scpStatus = resourceDirectoryNode["ScpStatus"].asString();

}

GetResourceDirectoryResult::ResourceDirectory GetResourceDirectoryResult::getResourceDirectory()const
{
	return resourceDirectory_;
}

