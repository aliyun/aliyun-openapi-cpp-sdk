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

#include <alibabacloud/hbase/model/ModifySecurityGroupsRequest.h>

using AlibabaCloud::HBase::Model::ModifySecurityGroupsRequest;

ModifySecurityGroupsRequest::ModifySecurityGroupsRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifySecurityGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupsRequest::~ModifySecurityGroupsRequest()
{}

std::string ModifySecurityGroupsRequest::getClusterId()const
{
	return clusterId_;
}

void ModifySecurityGroupsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifySecurityGroupsRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void ModifySecurityGroupsRequest::setSecurityGroupIds(const std::string& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	setParameter("SecurityGroupIds", securityGroupIds);
}

