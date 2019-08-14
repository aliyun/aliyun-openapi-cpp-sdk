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

#include <alibabacloud/cloudwf/model/UpgradeAPGroupRequest.h>

using AlibabaCloud::Cloudwf::Model::UpgradeAPGroupRequest;

UpgradeAPGroupRequest::UpgradeAPGroupRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UpgradeAPGroup")
{}

UpgradeAPGroupRequest::~UpgradeAPGroupRequest()
{}

std::vector<long> UpgradeAPGroupRequest::getIds()const
{
	return ids_;
}

void UpgradeAPGroupRequest::setIds(const std::vector<long>& ids)
{
	ids_ = ids;
	for(int i = 0; i!= ids.size(); i++)
		setCoreParameter("Ids."+ std::to_string(i), std::to_string(ids.at(i)));
}

std::string UpgradeAPGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeAPGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

