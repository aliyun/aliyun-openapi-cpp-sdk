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

#include <alibabacloud/emr/model/QueryUserActionsPolicyRequest.h>

using AlibabaCloud::Emr::Model::QueryUserActionsPolicyRequest;

QueryUserActionsPolicyRequest::QueryUserActionsPolicyRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryUserActionsPolicy")
{}

QueryUserActionsPolicyRequest::~QueryUserActionsPolicyRequest()
{}

long QueryUserActionsPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryUserActionsPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryUserActionsPolicyRequest::getResourceId()const
{
	return resourceId_;
}

void QueryUserActionsPolicyRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string QueryUserActionsPolicyRequest::getResourceType()const
{
	return resourceType_;
}

void QueryUserActionsPolicyRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string QueryUserActionsPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryUserActionsPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryUserActionsPolicyRequest::getRegionId()const
{
	return regionId_;
}

void QueryUserActionsPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> QueryUserActionsPolicyRequest::getActionNameList()const
{
	return actionNameList_;
}

void QueryUserActionsPolicyRequest::setActionNameList(const std::vector<std::string>& actionNameList)
{
	actionNameList_ = actionNameList;
	for(int i = 0; i!= actionNameList.size(); i++)
		setCoreParameter("ActionNameList."+ std::to_string(i), actionNameList.at(i));
}

std::string QueryUserActionsPolicyRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void QueryUserActionsPolicyRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

