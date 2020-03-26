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

#include <alibabacloud/ots/model/DeleteTagsRequest.h>

using AlibabaCloud::Ots::Model::DeleteTagsRequest;

DeleteTagsRequest::DeleteTagsRequest() :
	RpcServiceRequest("ots", "2016-06-20", "DeleteTags")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTagsRequest::~DeleteTagsRequest()
{}

long DeleteTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTagsRequest::getInstanceName()const
{
	return instanceName_;
}

void DeleteTagsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::vector<DeleteTagsRequest::TagInfo> DeleteTagsRequest::getTagInfo()const
{
	return tagInfo_;
}

void DeleteTagsRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	for(int dep1 = 0; dep1!= tagInfo.size(); dep1++) {
		auto tagInfoObj = tagInfo.at(dep1);
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1 + 1);
		setParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

