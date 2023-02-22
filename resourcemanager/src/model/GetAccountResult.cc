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

#include <alibabacloud/resourcemanager/model/GetAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetAccountResult::GetAccountResult() :
	ServiceResult()
{}

GetAccountResult::GetAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountResult::~GetAccountResult()
{}

void GetAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountNode = value["Account"];
	if(!accountNode["Status"].isNull())
		account_.status = accountNode["Status"].asString();
	if(!accountNode["Type"].isNull())
		account_.type = accountNode["Type"].asString();
	if(!accountNode["DisplayName"].isNull())
		account_.displayName = accountNode["DisplayName"].asString();
	if(!accountNode["FolderId"].isNull())
		account_.folderId = accountNode["FolderId"].asString();
	if(!accountNode["ResourceDirectoryId"].isNull())
		account_.resourceDirectoryId = accountNode["ResourceDirectoryId"].asString();
	if(!accountNode["IdentityInformation"].isNull())
		account_.identityInformation = accountNode["IdentityInformation"].asString();
	if(!accountNode["JoinTime"].isNull())
		account_.joinTime = accountNode["JoinTime"].asString();
	if(!accountNode["AccountId"].isNull())
		account_.accountId = accountNode["AccountId"].asString();
	if(!accountNode["JoinMethod"].isNull())
		account_.joinMethod = accountNode["JoinMethod"].asString();
	if(!accountNode["ModifyTime"].isNull())
		account_.modifyTime = accountNode["ModifyTime"].asString();
	if(!accountNode["AccountName"].isNull())
		account_.accountName = accountNode["AccountName"].asString();
	if(!accountNode["ResourceDirectoryPath"].isNull())
		account_.resourceDirectoryPath = accountNode["ResourceDirectoryPath"].asString();
	if(!accountNode["Location"].isNull())
		account_.location = accountNode["Location"].asString();
	if(!accountNode["EmailStatus"].isNull())
		account_.emailStatus = accountNode["EmailStatus"].asString();
	auto allTagsNode = accountNode["Tags"]["Tag"];
	for (auto accountNodeTagsTag : allTagsNode)
	{
		Account::Tag tagObject;
		if(!accountNodeTagsTag["Key"].isNull())
			tagObject.key = accountNodeTagsTag["Key"].asString();
		if(!accountNodeTagsTag["Value"].isNull())
			tagObject.value = accountNodeTagsTag["Value"].asString();
		account_.tags.push_back(tagObject);
	}

}

GetAccountResult::Account GetAccountResult::getAccount()const
{
	return account_;
}

