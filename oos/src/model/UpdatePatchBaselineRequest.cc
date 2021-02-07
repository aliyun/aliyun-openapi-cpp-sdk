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

#include <alibabacloud/oos/model/UpdatePatchBaselineRequest.h>

using AlibabaCloud::Oos::Model::UpdatePatchBaselineRequest;

UpdatePatchBaselineRequest::UpdatePatchBaselineRequest() :
	RpcServiceRequest("oos", "2019-06-01", "UpdatePatchBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

UpdatePatchBaselineRequest::~UpdatePatchBaselineRequest()
{}

std::string UpdatePatchBaselineRequest::getClientToken()const
{
	return clientToken_;
}

void UpdatePatchBaselineRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdatePatchBaselineRequest::getApprovalRules()const
{
	return approvalRules_;
}

void UpdatePatchBaselineRequest::setApprovalRules(const std::string& approvalRules)
{
	approvalRules_ = approvalRules;
	setParameter("ApprovalRules", approvalRules);
}

std::string UpdatePatchBaselineRequest::getDescription()const
{
	return description_;
}

void UpdatePatchBaselineRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdatePatchBaselineRequest::getRegionId()const
{
	return regionId_;
}

void UpdatePatchBaselineRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdatePatchBaselineRequest::getName()const
{
	return name_;
}

void UpdatePatchBaselineRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

