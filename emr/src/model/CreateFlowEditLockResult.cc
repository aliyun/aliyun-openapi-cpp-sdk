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

#include <alibabacloud/emr/model/CreateFlowEditLockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

CreateFlowEditLockResult::CreateFlowEditLockResult() :
	ServiceResult()
{}

CreateFlowEditLockResult::CreateFlowEditLockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFlowEditLockResult::~CreateFlowEditLockResult()
{}

void CreateFlowEditLockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["EntityId"].isNull())
		entityId_ = value["EntityId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = value["OwnerId"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();

}

std::string CreateFlowEditLockResult::getEntityId()const
{
	return entityId_;
}

std::string CreateFlowEditLockResult::getStatus()const
{
	return status_;
}

std::string CreateFlowEditLockResult::getOwnerId()const
{
	return ownerId_;
}

std::string CreateFlowEditLockResult::getUserId()const
{
	return userId_;
}

std::string CreateFlowEditLockResult::getBizId()const
{
	return bizId_;
}

