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

#include <alibabacloud/domain/model/QueryOperationAuditInfoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryOperationAuditInfoListResult::QueryOperationAuditInfoListResult() :
	ServiceResult()
{}

QueryOperationAuditInfoListResult::QueryOperationAuditInfoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOperationAuditInfoListResult::~QueryOperationAuditInfoListResult()
{}

void QueryOperationAuditInfoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["OperationAuditRecord"];
	for (auto valueDataOperationAuditRecord : allDataNode)
	{
		OperationAuditRecord dataObject;
		if(!valueDataOperationAuditRecord["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataOperationAuditRecord["UpdateTime"].asString());
		if(!valueDataOperationAuditRecord["Remark"].isNull())
			dataObject.remark = valueDataOperationAuditRecord["Remark"].asString();
		if(!valueDataOperationAuditRecord["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataOperationAuditRecord["CreateTime"].asString());
		if(!valueDataOperationAuditRecord["AuditType"].isNull())
			dataObject.auditType = std::stoi(valueDataOperationAuditRecord["AuditType"].asString());
		if(!valueDataOperationAuditRecord["BusinessName"].isNull())
			dataObject.businessName = valueDataOperationAuditRecord["BusinessName"].asString();
		if(!valueDataOperationAuditRecord["AuditInfo"].isNull())
			dataObject.auditInfo = valueDataOperationAuditRecord["AuditInfo"].asString();
		if(!valueDataOperationAuditRecord["DomainName"].isNull())
			dataObject.domainName = valueDataOperationAuditRecord["DomainName"].asString();
		if(!valueDataOperationAuditRecord["AuditStatus"].isNull())
			dataObject.auditStatus = std::stoi(valueDataOperationAuditRecord["AuditStatus"].asString());
		if(!valueDataOperationAuditRecord["Id"].isNull())
			dataObject.id = std::stol(valueDataOperationAuditRecord["Id"].asString());
		data_.push_back(dataObject);
	}
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool QueryOperationAuditInfoListResult::getPrePage()const
{
	return prePage_;
}

int QueryOperationAuditInfoListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryOperationAuditInfoListResult::getPageSize()const
{
	return pageSize_;
}

int QueryOperationAuditInfoListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryOperationAuditInfoListResult::OperationAuditRecord> QueryOperationAuditInfoListResult::getData()const
{
	return data_;
}

int QueryOperationAuditInfoListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryOperationAuditInfoListResult::getNextPage()const
{
	return nextPage_;
}

