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

#include <alibabacloud/csas/model/GetApprovalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetApprovalResult::GetApprovalResult() :
	ServiceResult()
{}

GetApprovalResult::GetApprovalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApprovalResult::~GetApprovalResult()
{}

void GetApprovalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApprovalNode = value["Approval"]["data"];
	for (auto valueApprovaldata : allApprovalNode)
	{
		Data approvalObject;
		if(!valueApprovaldata["ApprovalId"].isNull())
			approvalObject.approvalId = valueApprovaldata["ApprovalId"].asString();
		if(!valueApprovaldata["EndTimestamp"].isNull())
			approvalObject.endTimestamp = std::stol(valueApprovaldata["EndTimestamp"].asString());
		if(!valueApprovaldata["ApprovalDetail"].isNull())
			approvalObject.approvalDetail = valueApprovaldata["ApprovalDetail"].asString();
		if(!valueApprovaldata["Status"].isNull())
			approvalObject.status = valueApprovaldata["Status"].asString();
		if(!valueApprovaldata["ProcessId"].isNull())
			approvalObject.processId = valueApprovaldata["ProcessId"].asString();
		if(!valueApprovaldata["ProcessName"].isNull())
			approvalObject.processName = valueApprovaldata["ProcessName"].asString();
		if(!valueApprovaldata["PolicyType"].isNull())
			approvalObject.policyType = valueApprovaldata["PolicyType"].asString();
		if(!valueApprovaldata["SchemaId"].isNull())
			approvalObject.schemaId = valueApprovaldata["SchemaId"].asString();
		if(!valueApprovaldata["SchemaName"].isNull())
			approvalObject.schemaName = valueApprovaldata["SchemaName"].asString();
		if(!valueApprovaldata["SchemaContent"].isNull())
			approvalObject.schemaContent = valueApprovaldata["SchemaContent"].asString();
		if(!valueApprovaldata["CreatorUserId"].isNull())
			approvalObject.creatorUserId = valueApprovaldata["CreatorUserId"].asString();
		if(!valueApprovaldata["CreatorDevTag"].isNull())
			approvalObject.creatorDevTag = valueApprovaldata["CreatorDevTag"].asString();
		if(!valueApprovaldata["CreateTime"].isNull())
			approvalObject.createTime = valueApprovaldata["CreateTime"].asString();
		if(!valueApprovaldata["Reason"].isNull())
			approvalObject.reason = valueApprovaldata["Reason"].asString();
		if(!valueApprovaldata["CreatorUsername"].isNull())
			approvalObject.creatorUsername = valueApprovaldata["CreatorUsername"].asString();
		if(!valueApprovaldata["CreatorDepartment"].isNull())
			approvalObject.creatorDepartment = valueApprovaldata["CreatorDepartment"].asString();
		auto allApprovalProgressesNode = valueApprovaldata["ApprovalProgresses"]["approvalProgressesItem"];
		for (auto valueApprovaldataApprovalProgressesapprovalProgressesItem : allApprovalProgressesNode)
		{
			Data::ApprovalProgressesItem approvalProgressesObject;
			if(!valueApprovaldataApprovalProgressesapprovalProgressesItem["Status"].isNull())
				approvalProgressesObject.status = valueApprovaldataApprovalProgressesapprovalProgressesItem["Status"].asString();
			if(!valueApprovaldataApprovalProgressesapprovalProgressesItem["Executor"].isNull())
				approvalProgressesObject.executor = valueApprovaldataApprovalProgressesapprovalProgressesItem["Executor"].asString();
			if(!valueApprovaldataApprovalProgressesapprovalProgressesItem["Action"].isNull())
				approvalProgressesObject.action = valueApprovaldataApprovalProgressesapprovalProgressesItem["Action"].asString();
			if(!valueApprovaldataApprovalProgressesapprovalProgressesItem["Comment"].isNull())
				approvalProgressesObject.comment = valueApprovaldataApprovalProgressesapprovalProgressesItem["Comment"].asString();
			if(!valueApprovaldataApprovalProgressesapprovalProgressesItem["Timestamp"].isNull())
				approvalProgressesObject.timestamp = std::stol(valueApprovaldataApprovalProgressesapprovalProgressesItem["Timestamp"].asString());
			auto allOperatorsNode = valueApprovaldataApprovalProgressesapprovalProgressesItem["Operators"]["operatorsItem"];
			for (auto valueApprovaldataApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem : allOperatorsNode)
			{
				Data::ApprovalProgressesItem::OperatorsItem operatorsObject;
				if(!valueApprovaldataApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["SaseUserId"].isNull())
					operatorsObject.saseUserId = valueApprovaldataApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["SaseUserId"].asString();
				if(!valueApprovaldataApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["Username"].isNull())
					operatorsObject.username = valueApprovaldataApprovalProgressesapprovalProgressesItemOperatorsoperatorsItem["Username"].asString();
				approvalProgressesObject.operators.push_back(operatorsObject);
			}
			approvalObject.approvalProgresses.push_back(approvalProgressesObject);
		}
		approval_.push_back(approvalObject);
	}

}

std::vector<GetApprovalResult::Data> GetApprovalResult::getApproval()const
{
	return approval_;
}

