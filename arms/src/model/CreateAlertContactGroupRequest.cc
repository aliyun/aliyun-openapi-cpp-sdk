<<<<<<< HEAD
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

#include <alibabacloud/arms/model/CreateAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::CreateAlertContactGroupRequest;

CreateAlertContactGroupRequest::CreateAlertContactGroupRequest() :
	RpcServiceRequest("arms", "2019-02-19", "CreateAlertContactGroup")
{}

CreateAlertContactGroupRequest::~CreateAlertContactGroupRequest()
{}

std::string CreateAlertContactGroupRequest::getContactGroupName()const
{
	return contactGroupName_;
}

void CreateAlertContactGroupRequest::setContactGroupName(const std::string& contactGroupName)
{
	contactGroupName_ = contactGroupName;
	setCoreParameter("ContactGroupName", contactGroupName);
}

std::string CreateAlertContactGroupRequest::getContactIds()const
{
	return contactIds_;
}

void CreateAlertContactGroupRequest::setContactIds(const std::string& contactIds)
{
	contactIds_ = contactIds;
	setCoreParameter("ContactIds", contactIds);
}

=======
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

#include <alibabacloud/arms/model/CreateAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::CreateAlertContactGroupRequest;

CreateAlertContactGroupRequest::CreateAlertContactGroupRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CreateAlertContactGroup")
{}

CreateAlertContactGroupRequest::~CreateAlertContactGroupRequest()
{}

std::string CreateAlertContactGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlertContactGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateAlertContactGroupRequest::getContactGroupName()const
{
	return contactGroupName_;
}

void CreateAlertContactGroupRequest::setContactGroupName(const std::string& contactGroupName)
{
	contactGroupName_ = contactGroupName;
	setCoreParameter("ContactGroupName", contactGroupName);
}

std::string CreateAlertContactGroupRequest::getContactIds()const
{
	return contactIds_;
}

void CreateAlertContactGroupRequest::setContactIds(const std::string& contactIds)
{
	contactIds_ = contactIds;
	setCoreParameter("ContactIds", contactIds);
}

>>>>>>> master
