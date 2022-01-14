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

#include <alibabacloud/resourcemanager/model/InviteAccountToResourceDirectoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

InviteAccountToResourceDirectoryResult::InviteAccountToResourceDirectoryResult() :
	ServiceResult()
{}

InviteAccountToResourceDirectoryResult::InviteAccountToResourceDirectoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InviteAccountToResourceDirectoryResult::~InviteAccountToResourceDirectoryResult()
{}

void InviteAccountToResourceDirectoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto handshakeNode = value["Handshake"];
	if(!handshakeNode["Status"].isNull())
		handshake_.status = handshakeNode["Status"].asString();
	if(!handshakeNode["ExpireTime"].isNull())
		handshake_.expireTime = handshakeNode["ExpireTime"].asString();
	if(!handshakeNode["ResourceDirectoryId"].isNull())
		handshake_.resourceDirectoryId = handshakeNode["ResourceDirectoryId"].asString();
	if(!handshakeNode["CreateTime"].isNull())
		handshake_.createTime = handshakeNode["CreateTime"].asString();
	if(!handshakeNode["Note"].isNull())
		handshake_.note = handshakeNode["Note"].asString();
	if(!handshakeNode["TargetEntity"].isNull())
		handshake_.targetEntity = handshakeNode["TargetEntity"].asString();
	if(!handshakeNode["MasterAccountId"].isNull())
		handshake_.masterAccountId = handshakeNode["MasterAccountId"].asString();
	if(!handshakeNode["MasterAccountName"].isNull())
		handshake_.masterAccountName = handshakeNode["MasterAccountName"].asString();
	if(!handshakeNode["ModifyTime"].isNull())
		handshake_.modifyTime = handshakeNode["ModifyTime"].asString();
	if(!handshakeNode["TargetType"].isNull())
		handshake_.targetType = handshakeNode["TargetType"].asString();
	if(!handshakeNode["HandshakeId"].isNull())
		handshake_.handshakeId = handshakeNode["HandshakeId"].asString();

}

InviteAccountToResourceDirectoryResult::Handshake InviteAccountToResourceDirectoryResult::getHandshake()const
{
	return handshake_;
}

