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

#include <alibabacloud/cs/model/CreateClusterByResourcesGroupRequest.h>

using AlibabaCloud::CS::Model::CreateClusterByResourcesGroupRequest;

CreateClusterByResourcesGroupRequest::CreateClusterByResourcesGroupRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

CreateClusterByResourcesGroupRequest::~CreateClusterByResourcesGroupRequest()
{}

std::string CreateClusterByResourcesGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterByResourcesGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

