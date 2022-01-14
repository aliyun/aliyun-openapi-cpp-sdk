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

#include <alibabacloud/resourcemanager/model/ListTargetAttachmentsForControlPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListTargetAttachmentsForControlPolicyResult::ListTargetAttachmentsForControlPolicyResult() :
	ServiceResult()
{}

ListTargetAttachmentsForControlPolicyResult::ListTargetAttachmentsForControlPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTargetAttachmentsForControlPolicyResult::~ListTargetAttachmentsForControlPolicyResult()
{}

void ListTargetAttachmentsForControlPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetAttachmentsNode = value["TargetAttachments"]["TargetAttachment"];
	for (auto valueTargetAttachmentsTargetAttachment : allTargetAttachmentsNode)
	{
		TargetAttachment targetAttachmentsObject;
		if(!valueTargetAttachmentsTargetAttachment["TargetId"].isNull())
			targetAttachmentsObject.targetId = valueTargetAttachmentsTargetAttachment["TargetId"].asString();
		if(!valueTargetAttachmentsTargetAttachment["TargetName"].isNull())
			targetAttachmentsObject.targetName = valueTargetAttachmentsTargetAttachment["TargetName"].asString();
		if(!valueTargetAttachmentsTargetAttachment["AttachDate"].isNull())
			targetAttachmentsObject.attachDate = valueTargetAttachmentsTargetAttachment["AttachDate"].asString();
		if(!valueTargetAttachmentsTargetAttachment["TargetType"].isNull())
			targetAttachmentsObject.targetType = valueTargetAttachmentsTargetAttachment["TargetType"].asString();
		targetAttachments_.push_back(targetAttachmentsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListTargetAttachmentsForControlPolicyResult::getTotalCount()const
{
	return totalCount_;
}

int ListTargetAttachmentsForControlPolicyResult::getPageSize()const
{
	return pageSize_;
}

int ListTargetAttachmentsForControlPolicyResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTargetAttachmentsForControlPolicyResult::TargetAttachment> ListTargetAttachmentsForControlPolicyResult::getTargetAttachments()const
{
	return targetAttachments_;
}

