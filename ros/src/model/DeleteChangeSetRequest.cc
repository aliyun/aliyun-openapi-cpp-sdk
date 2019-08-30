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

#include <alibabacloud/ros/model/DeleteChangeSetRequest.h>

using AlibabaCloud::ROS::Model::DeleteChangeSetRequest;

DeleteChangeSetRequest::DeleteChangeSetRequest() :
	RpcServiceRequest("ros", "2019-09-10", "DeleteChangeSet")
{}

DeleteChangeSetRequest::~DeleteChangeSetRequest()
{}

std::string DeleteChangeSetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteChangeSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteChangeSetRequest::getChangeSetId()const
{
	return changeSetId_;
}

void DeleteChangeSetRequest::setChangeSetId(const std::string& changeSetId)
{
	changeSetId_ = changeSetId;
	setCoreParameter("ChangeSetId", changeSetId);
}

