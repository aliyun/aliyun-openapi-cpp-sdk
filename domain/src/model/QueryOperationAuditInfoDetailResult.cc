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

#include <alibabacloud/domain/model/QueryOperationAuditInfoDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryOperationAuditInfoDetailResult::QueryOperationAuditInfoDetailResult() :
	ServiceResult()
{}

QueryOperationAuditInfoDetailResult::QueryOperationAuditInfoDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOperationAuditInfoDetailResult::~QueryOperationAuditInfoDetailResult()
{}

void QueryOperationAuditInfoDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AuditInfo"].isNull())
		auditInfo_ = value["AuditInfo"].asString();
	if(!value["AuditStatus"].isNull())
		auditStatus_ = std::stoi(value["AuditStatus"].asString());
	if(!value["BusinessName"].isNull())
		businessName_ = value["BusinessName"].asString();
	if(!value["AuditType"].isNull())
		auditType_ = std::stoi(value["AuditType"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = std::stol(value["UpdateTime"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();

}

std::string QueryOperationAuditInfoDetailResult::getAuditInfo()const
{
	return auditInfo_;
}

int QueryOperationAuditInfoDetailResult::getAuditStatus()const
{
	return auditStatus_;
}

std::string QueryOperationAuditInfoDetailResult::getBusinessName()const
{
	return businessName_;
}

int QueryOperationAuditInfoDetailResult::getAuditType()const
{
	return auditType_;
}

std::string QueryOperationAuditInfoDetailResult::getDomainName()const
{
	return domainName_;
}

long QueryOperationAuditInfoDetailResult::getCreateTime()const
{
	return createTime_;
}

long QueryOperationAuditInfoDetailResult::getUpdateTime()const
{
	return updateTime_;
}

std::string QueryOperationAuditInfoDetailResult::getId()const
{
	return id_;
}

std::string QueryOperationAuditInfoDetailResult::getRemark()const
{
	return remark_;
}

