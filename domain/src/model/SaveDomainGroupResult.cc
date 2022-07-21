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

#include <alibabacloud/domain/model/SaveDomainGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

SaveDomainGroupResult::SaveDomainGroupResult() :
	ServiceResult()
{}

SaveDomainGroupResult::SaveDomainGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveDomainGroupResult::~SaveDomainGroupResult()
{}

void SaveDomainGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BeingDeleted"].isNull())
		beingDeleted_ = value["BeingDeleted"].asString() == "true";
	if(!value["CreationDate"].isNull())
		creationDate_ = value["CreationDate"].asString();
	if(!value["DomainGroupName"].isNull())
		domainGroupName_ = value["DomainGroupName"].asString();
	if(!value["ModificationDate"].isNull())
		modificationDate_ = value["ModificationDate"].asString();
	if(!value["DomainGroupStatus"].isNull())
		domainGroupStatus_ = value["DomainGroupStatus"].asString();
	if(!value["DomainGroupId"].isNull())
		domainGroupId_ = std::stol(value["DomainGroupId"].asString());
	if(!value["TotalNumber"].isNull())
		totalNumber_ = std::stoi(value["TotalNumber"].asString());

}

bool SaveDomainGroupResult::getBeingDeleted()const
{
	return beingDeleted_;
}

std::string SaveDomainGroupResult::getCreationDate()const
{
	return creationDate_;
}

std::string SaveDomainGroupResult::getDomainGroupName()const
{
	return domainGroupName_;
}

std::string SaveDomainGroupResult::getModificationDate()const
{
	return modificationDate_;
}

std::string SaveDomainGroupResult::getDomainGroupStatus()const
{
	return domainGroupStatus_;
}

long SaveDomainGroupResult::getDomainGroupId()const
{
	return domainGroupId_;
}

int SaveDomainGroupResult::getTotalNumber()const
{
	return totalNumber_;
}

