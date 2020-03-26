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
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeAPGroupRequest::~UpgradeAPGroupRequest()
{}

std::string UpgradeAPGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeAPGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<long> UpgradeAPGroupRequest::getIds()const
{
	return ids_;
}

void UpgradeAPGroupRequest::setIds(const std::vector<long>& ids)
{
	ids_ = ids;
	for(int dep1 = 0; dep1!= ids.size(); dep1++) {
		setParameter("Ids."+ std::to_string(dep1), std::to_string(ids.at(dep1)));
	}
}

