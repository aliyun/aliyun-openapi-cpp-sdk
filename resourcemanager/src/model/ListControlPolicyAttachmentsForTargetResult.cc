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

#include <alibabacloud/resourcemanager/model/ListControlPolicyAttachmentsForTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListControlPolicyAttachmentsForTargetResult::ListControlPolicyAttachmentsForTargetResult() :
	ServiceResult()
{}

ListControlPolicyAttachmentsForTargetResult::ListControlPolicyAttachmentsForTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListControlPolicyAttachmentsForTargetResult::~ListControlPolicyAttachmentsForTargetResult()
{}

void ListControlPolicyAttachmentsForTargetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allControlPolicyAttachmentsNode = value["ControlPolicyAttachments"]["ControlPolicyAttachment"];
	for (auto valueControlPolicyAttachmentsControlPolicyAttachment : allControlPolicyAttachmentsNode)
	{
		ControlPolicyAttachment controlPolicyAttachmentsObject;
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["Description"].isNull())
			controlPolicyAttachmentsObject.description = valueControlPolicyAttachmentsControlPolicyAttachment["Description"].asString();
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["EffectScope"].isNull())
			controlPolicyAttachmentsObject.effectScope = valueControlPolicyAttachmentsControlPolicyAttachment["EffectScope"].asString();
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["PolicyName"].isNull())
			controlPolicyAttachmentsObject.policyName = valueControlPolicyAttachmentsControlPolicyAttachment["PolicyName"].asString();
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["PolicyId"].isNull())
			controlPolicyAttachmentsObject.policyId = valueControlPolicyAttachmentsControlPolicyAttachment["PolicyId"].asString();
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["AttachDate"].isNull())
			controlPolicyAttachmentsObject.attachDate = valueControlPolicyAttachmentsControlPolicyAttachment["AttachDate"].asString();
		if(!valueControlPolicyAttachmentsControlPolicyAttachment["PolicyType"].isNull())
			controlPolicyAttachmentsObject.policyType = valueControlPolicyAttachmentsControlPolicyAttachment["PolicyType"].asString();
		controlPolicyAttachments_.push_back(controlPolicyAttachmentsObject);
	}

}

std::vector<ListControlPolicyAttachmentsForTargetResult::ControlPolicyAttachment> ListControlPolicyAttachmentsForTargetResult::getControlPolicyAttachments()const
{
	return controlPolicyAttachments_;
}

