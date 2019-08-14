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

#include <alibabacloud/cms/model/GetMyGroupAlertRequest.h>

using AlibabaCloud::Cms::Model::GetMyGroupAlertRequest;

GetMyGroupAlertRequest::GetMyGroupAlertRequest() :
	RpcServiceRequest("cms", "2018-03-08", "GetMyGroupAlert")
{}

GetMyGroupAlertRequest::~GetMyGroupAlertRequest()
{}

long GetMyGroupAlertRequest::getGroupId()const
{
	return groupId_;
}

void GetMyGroupAlertRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string GetMyGroupAlertRequest::getAlertName()const
{
	return alertName_;
}

void GetMyGroupAlertRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

