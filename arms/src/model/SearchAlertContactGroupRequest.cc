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

#include <alibabacloud/arms/model/SearchAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertContactGroupRequest;

SearchAlertContactGroupRequest::SearchAlertContactGroupRequest() :
	RpcServiceRequest("arms", "2019-02-19", "SearchAlertContactGroup")
{}

SearchAlertContactGroupRequest::~SearchAlertContactGroupRequest()
{}

std::string SearchAlertContactGroupRequest::getContactGroupName()const
{
	return contactGroupName_;
}

void SearchAlertContactGroupRequest::setContactGroupName(const std::string& contactGroupName)
{
	contactGroupName_ = contactGroupName;
	setCoreParameter("ContactGroupName", contactGroupName);
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

#include <alibabacloud/arms/model/SearchAlertContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertContactGroupRequest;

SearchAlertContactGroupRequest::SearchAlertContactGroupRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SearchAlertContactGroup")
{}

SearchAlertContactGroupRequest::~SearchAlertContactGroupRequest()
{}

std::string SearchAlertContactGroupRequest::getRegionId()const
{
	return regionId_;
}

void SearchAlertContactGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SearchAlertContactGroupRequest::getContactGroupName()const
{
	return contactGroupName_;
}

void SearchAlertContactGroupRequest::setContactGroupName(const std::string& contactGroupName)
{
	contactGroupName_ = contactGroupName;
	setCoreParameter("ContactGroupName", contactGroupName);
}

>>>>>>> master
