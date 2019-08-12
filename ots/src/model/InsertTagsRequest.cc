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

#include <alibabacloud/ots/model/InsertTagsRequest.h>

using AlibabaCloud::Ots::Model::InsertTagsRequest;

InsertTagsRequest::InsertTagsRequest() :
	RpcServiceRequest("ots", "2016-06-20", "InsertTags")
{}

InsertTagsRequest::~InsertTagsRequest()
{}

std::string InsertTagsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void InsertTagsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long InsertTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InsertTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string InsertTagsRequest::getInstanceName()const
{
	return instanceName_;
}

void InsertTagsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

std::vector<InsertTagsRequest::TagInfo> InsertTagsRequest::getTagInfo()const
{
	return tagInfo_;
}

void InsertTagsRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	int i = 0;
	for(int i = 0; i!= tagInfo.size(); i++)	{
		auto obj = tagInfo.at(i);
		std::string str ="TagInfo."+ std::to_string(i);
		setCoreParameter(str + ".TagValue", std::to_string(obj.tagValue));
		setCoreParameter(str + ".TagKey", std::to_string(obj.tagKey));
	}
}

