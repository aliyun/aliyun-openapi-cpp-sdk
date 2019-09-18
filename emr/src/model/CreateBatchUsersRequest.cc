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

#include <alibabacloud/emr/model/CreateBatchUsersRequest.h>

using AlibabaCloud::Emr::Model::CreateBatchUsersRequest;

CreateBatchUsersRequest::CreateBatchUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBatchUsers")
{}

CreateBatchUsersRequest::~CreateBatchUsersRequest()
{}

long CreateBatchUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBatchUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<CreateBatchUsersRequest::UserBaseParamList> CreateBatchUsersRequest::getUserBaseParamList()const
{
	return userBaseParamList_;
}

void CreateBatchUsersRequest::setUserBaseParamList(const std::vector<UserBaseParamList>& userBaseParamList)
{
	userBaseParamList_ = userBaseParamList;
	int i = 0;
	for(int i = 0; i!= userBaseParamList.size(); i++)	{
		auto obj = userBaseParamList.at(i);
		std::string str ="UserBaseParamList."+ std::to_string(i);
		setCoreParameter(str + ".AliyunUserId", obj.aliyunUserId);
		setCoreParameter(str + ".UserName", obj.userName);
		setCoreParameter(str + ".UserType", obj.userType);
		setCoreParameter(str + ".IsSuperAdmin", obj.isSuperAdmin);
	}
}

std::vector<long> CreateBatchUsersRequest::getRoleId()const
{
	return roleId_;
}

void CreateBatchUsersRequest::setRoleId(const std::vector<long>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), std::to_string(roleId.at(i)));
}

std::vector<long> CreateBatchUsersRequest::getGroupId()const
{
	return groupId_;
}

void CreateBatchUsersRequest::setGroupId(const std::vector<long>& groupId)
{
	groupId_ = groupId;
	for(int i = 0; i!= groupId.size(); i++)
		setCoreParameter("GroupId."+ std::to_string(i), std::to_string(groupId.at(i)));
}

std::string CreateBatchUsersRequest::getDescription()const
{
	return description_;
}

void CreateBatchUsersRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateBatchUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBatchUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateBatchUsersRequest::getRegionId()const
{
	return regionId_;
}

void CreateBatchUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

