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
{
	setMethod(HttpRequest::Method::Post);
}

InsertTagsRequest::~InsertTagsRequest()
{}

long InsertTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InsertTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string InsertTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InsertTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string InsertTagsRequest::getInstanceName()const
{
	return instanceName_;
}

void InsertTagsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::vector<InsertTagsRequest::TagInfo> InsertTagsRequest::getTagInfo()const
{
	return tagInfo_;
}

void InsertTagsRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	for(int dep1 = 0; dep1!= tagInfo.size(); dep1++) {
		auto tagInfoObj = tagInfo.at(dep1);
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1 + 1);
		setParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

