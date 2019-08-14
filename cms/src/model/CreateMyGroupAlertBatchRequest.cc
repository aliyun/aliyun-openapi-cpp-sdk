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

#include <alibabacloud/cms/model/CreateMyGroupAlertBatchRequest.h>

using AlibabaCloud::Cms::Model::CreateMyGroupAlertBatchRequest;

CreateMyGroupAlertBatchRequest::CreateMyGroupAlertBatchRequest() :
	RpcServiceRequest("cms", "2018-03-08", "CreateMyGroupAlertBatch")
{}

CreateMyGroupAlertBatchRequest::~CreateMyGroupAlertBatchRequest()
{}

long CreateMyGroupAlertBatchRequest::getGroupId()const
{
	return groupId_;
}

void CreateMyGroupAlertBatchRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string CreateMyGroupAlertBatchRequest::getGroupAlertJsonArray()const
{
	return groupAlertJsonArray_;
}

void CreateMyGroupAlertBatchRequest::setGroupAlertJsonArray(const std::string& groupAlertJsonArray)
{
	groupAlertJsonArray_ = groupAlertJsonArray;
	setCoreParameter("GroupAlertJsonArray", groupAlertJsonArray);
}

