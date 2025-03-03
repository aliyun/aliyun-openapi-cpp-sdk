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

#include <alibabacloud/resourcemanager/model/ListPolicyAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListPolicyAttachmentsResult::ListPolicyAttachmentsResult() :
	ServiceResult()
{}

ListPolicyAttachmentsResult::ListPolicyAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPolicyAttachmentsResult::~ListPolicyAttachmentsResult()
{}

void ListPolicyAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyAttachmentsNode = value["PolicyAttachments"]["PolicyAttachment"];
	for (auto valuePolicyAttachmentsPolicyAttachment : allPolicyAttachmentsNode)
	{
		PolicyAttachment policyAttachmentsObject;
		if(!valuePolicyAttachmentsPolicyAttachment["AttachDate"].isNull())
			policyAttachmentsObject.attachDate = valuePolicyAttachmentsPolicyAttachment["AttachDate"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["Description"].isNull())
			policyAttachmentsObject.description = valuePolicyAttachmentsPolicyAttachment["Description"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["PolicyName"].isNull())
			policyAttachmentsObject.policyName = valuePolicyAttachmentsPolicyAttachment["PolicyName"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["PolicyType"].isNull())
			policyAttachmentsObject.policyType = valuePolicyAttachmentsPolicyAttachment["PolicyType"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["PrincipalName"].isNull())
			policyAttachmentsObject.principalName = valuePolicyAttachmentsPolicyAttachment["PrincipalName"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["PrincipalType"].isNull())
			policyAttachmentsObject.principalType = valuePolicyAttachmentsPolicyAttachment["PrincipalType"].asString();
		if(!valuePolicyAttachmentsPolicyAttachment["ResourceGroupId"].isNull())
			policyAttachmentsObject.resourceGroupId = valuePolicyAttachmentsPolicyAttachment["ResourceGroupId"].asString();
		policyAttachments_.push_back(policyAttachmentsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListPolicyAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListPolicyAttachmentsResult::PolicyAttachment> ListPolicyAttachmentsResult::getPolicyAttachments()const
{
	return policyAttachments_;
}

int ListPolicyAttachmentsResult::getPageSize()const
{
	return pageSize_;
}

int ListPolicyAttachmentsResult::getPageNumber()const
{
	return pageNumber_;
}

