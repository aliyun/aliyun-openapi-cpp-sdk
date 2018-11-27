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

#include <alibabacloud/iot/model/SetDeviceGroupTagsRequest.h>

using AlibabaCloud::Iot::Model::SetDeviceGroupTagsRequest;

SetDeviceGroupTagsRequest::SetDeviceGroupTagsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SetDeviceGroupTags")
{}

SetDeviceGroupTagsRequest::~SetDeviceGroupTagsRequest()
{}

std::string SetDeviceGroupTagsRequest::getTagString()const
{
	return tagString_;
}

void SetDeviceGroupTagsRequest::setTagString(const std::string& tagString)
{
	tagString_ = tagString;
	setParameter("TagString", tagString);
}

std::string SetDeviceGroupTagsRequest::getGroupId()const
{
	return groupId_;
}

void SetDeviceGroupTagsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string SetDeviceGroupTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDeviceGroupTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

