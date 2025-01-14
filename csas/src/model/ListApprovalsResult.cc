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

#include <alibabacloud/csas/model/ListApprovalsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListApprovalsResult::ListApprovalsResult() :
	ServiceResult()
{}

ListApprovalsResult::ListApprovalsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApprovalsResult::~ListApprovalsResult()
{}

void ListApprovalsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApprovalsNode = value["Approvals"]["dataList"];
	for (auto valueApprovalsdataList : allApprovalsNode)
	{
		DataList approvalsObject;
		if(!valueApprovalsdataList["ApprovalId"].isNull())
			approvalsObject.approvalId = valueApprovalsdataList["ApprovalId"].asString();
		if(!valueApprovalsdataList["EndTimestamp"].isNull())
			approvalsObject.endTimestamp = std::stol(valueApprovalsdataList["EndTimestamp"].asString());
		if(!valueApprovalsdataList["ApprovalDetail"].isNull())
			approvalsObject.approvalDetail = valueApprovalsdataList["ApprovalDetail"].asString();
		if(!valueApprovalsdataList["Status"].isNull())
			approvalsObject.status = valueApprovalsdataList["Status"].asString();
		if(!valueApprovalsdataList["ProcessId"].isNull())
			approvalsObject.processId = valueApprovalsdataList["ProcessId"].asString();
		if(!valueApprovalsdataList["ProcessName"].isNull())
			approvalsObject.processName = valueApprovalsdataList["ProcessName"].asString();
		if(!valueApprovalsdataList["PolicyType"].isNull())
			approvalsObject.policyType = valueApprovalsdataList["PolicyType"].asString();
		if(!valueApprovalsdataList["SchemaId"].isNull())
			approvalsObject.schemaId = valueApprovalsdataList["SchemaId"].asString();
		if(!valueApprovalsdataList["SchemaName"].isNull())
			approvalsObject.schemaName = valueApprovalsdataList["SchemaName"].asString();
		if(!valueApprovalsdataList["SchemaContent"].isNull())
			approvalsObject.schemaContent = valueApprovalsdataList["SchemaContent"].asString();
		if(!valueApprovalsdataList["CreatorUserId"].isNull())
			approvalsObject.creatorUserId = valueApprovalsdataList["CreatorUserId"].asString();
		if(!valueApprovalsdataList["CreatorDevTag"].isNull())
			approvalsObject.creatorDevTag = valueApprovalsdataList["CreatorDevTag"].asString();
		if(!valueApprovalsdataList["CreateTime"].isNull())
			approvalsObject.createTime = valueApprovalsdataList["CreateTime"].asString();
		if(!valueApprovalsdataList["Reason"].isNull())
			approvalsObject.reason = valueApprovalsdataList["Reason"].asString();
		if(!valueApprovalsdataList["CreatorUsername"].isNull())
			approvalsObject.creatorUsername = valueApprovalsdataList["CreatorUsername"].asString();
		if(!valueApprovalsdataList["CreatorDepartment"].isNull())
			approvalsObject.creatorDepartment = valueApprovalsdataList["CreatorDepartment"].asString();
		auto allApprovalProgressesNode = valueApprovalsdataList["ApprovalProgresses"]["approvalProgressesItem"];
		for (auto valueApprovalsdataListApprovalProgressesapprovalProgressesItem : allApprovalProgressesNode)
		{
			DataList::ApprovalProgressesItem approvalProgressesObject;
			if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Status"].isNull())
				approvalProgressesObject.status = valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Status"].asString();
			if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Executor"].isNull())
				approvalProgressesObject.executor = valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Executor"].asString();
			if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Action"].isNull())
				approvalProgressesObject.action = valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Action"].asString();
			if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Comment"].isNull())
				approvalProgressesObject.comment = valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Comment"].asString();
			if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Timestamp"].isNull())
				approvalProgressesObject.timestamp = std::stol(valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Timestamp"].asString());
			auto allOperatorsNode = valueApprovalsdataListApprovalProgressesapprovalProgressesItem["Operators"]["operatorsItem"];
			for (auto valueApprovalsdataListApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem : allOperatorsNode)
			{
				DataList::ApprovalProgressesItem::OperatorsItem operatorsObject;
				if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["SaseUserId"].isNull())
					operatorsObject.saseUserId = valueApprovalsdataListApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["SaseUserId"].asString();
				if(!valueApprovalsdataListApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["Username"].isNull())
					operatorsObject.username = valueApprovalsdataListApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["Username"].asString();
				approvalProgressesObject.operators.push_back(operatorsObject);
			}
			approvalsObject.approvalProgresses.push_back(approvalProgressesObject);
		}
		approvals_.push_back(approvalsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = value["TotalNum"].asString();

}

std::string ListApprovalsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListApprovalsResult::DataList> ListApprovalsResult::getApprovals()const
{
	return approvals_;
}

