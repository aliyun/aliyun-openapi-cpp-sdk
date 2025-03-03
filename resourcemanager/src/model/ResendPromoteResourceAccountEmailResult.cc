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

#include <alibabacloud/resourcemanager/model/ResendPromoteResourceAccountEmailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ResendPromoteResourceAccountEmailResult::ResendPromoteResourceAccountEmailResult() :
	ServiceResult()
{}

ResendPromoteResourceAccountEmailResult::ResendPromoteResourceAccountEmailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResendPromoteResourceAccountEmailResult::~ResendPromoteResourceAccountEmailResult()
{}

void ResendPromoteResourceAccountEmailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountNode = value["Account"];
	if(!accountNode["AccountId"].isNull())
		account_.accountId = accountNode["AccountId"].asString();
	if(!accountNode["AccountName"].isNull())
		account_.accountName = accountNode["AccountName"].asString();
	if(!accountNode["DisplayName"].isNull())
		account_.displayName = accountNode["DisplayName"].asString();
	if(!accountNode["FolderId"].isNull())
		account_.folderId = accountNode["FolderId"].asString();
	if(!accountNode["JoinMethod"].isNull())
		account_.joinMethod = accountNode["JoinMethod"].asString();
	if(!accountNode["JoinTime"].isNull())
		account_.joinTime = accountNode["JoinTime"].asString();
	if(!accountNode["ModifyTime"].isNull())
		account_.modifyTime = accountNode["ModifyTime"].asString();
	if(!accountNode["RecordId"].isNull())
		account_.recordId = accountNode["RecordId"].asString();
	if(!accountNode["ResourceDirectoryId"].isNull())
		account_.resourceDirectoryId = accountNode["ResourceDirectoryId"].asString();
	if(!accountNode["Status"].isNull())
		account_.status = accountNode["Status"].asString();
	if(!accountNode["Type"].isNull())
		account_.type = accountNode["Type"].asString();

}

ResendPromoteResourceAccountEmailResult::Account ResendPromoteResourceAccountEmailResult::getAccount()const
{
	return account_;
}

