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

#include <alibabacloud/resourcemanager/model/ListHandshakesForAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListHandshakesForAccountResult::ListHandshakesForAccountResult() :
	ServiceResult()
{}

ListHandshakesForAccountResult::ListHandshakesForAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHandshakesForAccountResult::~ListHandshakesForAccountResult()
{}

void ListHandshakesForAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHandshakesNode = value["Handshakes"]["Handshake"];
	for (auto valueHandshakesHandshake : allHandshakesNode)
	{
		Handshake handshakesObject;
		if(!valueHandshakesHandshake["Status"].isNull())
			handshakesObject.status = valueHandshakesHandshake["Status"].asString();
		if(!valueHandshakesHandshake["ExpireTime"].isNull())
			handshakesObject.expireTime = valueHandshakesHandshake["ExpireTime"].asString();
		if(!valueHandshakesHandshake["ResourceDirectoryId"].isNull())
			handshakesObject.resourceDirectoryId = valueHandshakesHandshake["ResourceDirectoryId"].asString();
		if(!valueHandshakesHandshake["CreateTime"].isNull())
			handshakesObject.createTime = valueHandshakesHandshake["CreateTime"].asString();
		if(!valueHandshakesHandshake["Note"].isNull())
			handshakesObject.note = valueHandshakesHandshake["Note"].asString();
		if(!valueHandshakesHandshake["TargetEntity"].isNull())
			handshakesObject.targetEntity = valueHandshakesHandshake["TargetEntity"].asString();
		if(!valueHandshakesHandshake["MasterAccountId"].isNull())
			handshakesObject.masterAccountId = valueHandshakesHandshake["MasterAccountId"].asString();
		if(!valueHandshakesHandshake["MasterAccountName"].isNull())
			handshakesObject.masterAccountName = valueHandshakesHandshake["MasterAccountName"].asString();
		if(!valueHandshakesHandshake["ModifyTime"].isNull())
			handshakesObject.modifyTime = valueHandshakesHandshake["ModifyTime"].asString();
		if(!valueHandshakesHandshake["TargetType"].isNull())
			handshakesObject.targetType = valueHandshakesHandshake["TargetType"].asString();
		if(!valueHandshakesHandshake["HandshakeId"].isNull())
			handshakesObject.handshakeId = valueHandshakesHandshake["HandshakeId"].asString();
		handshakes_.push_back(handshakesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListHandshakesForAccountResult::getTotalCount()const
{
	return totalCount_;
}

int ListHandshakesForAccountResult::getPageSize()const
{
	return pageSize_;
}

int ListHandshakesForAccountResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListHandshakesForAccountResult::Handshake> ListHandshakesForAccountResult::getHandshakes()const
{
	return handshakes_;
}

