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

#include <alibabacloud/cloudwf/model/UpgradeAPRequest.h>

using AlibabaCloud::Cloudwf::Model::UpgradeAPRequest;

UpgradeAPRequest::UpgradeAPRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UpgradeAP")
{}

UpgradeAPRequest::~UpgradeAPRequest()
{}

std::vector<long> UpgradeAPRequest::getIds()const
{
	return ids_;
}

void UpgradeAPRequest::setIds(const std::vector<long>& ids)
{
	ids_ = ids;
	for(int i = 0; i!= ids.size(); i++)
		setParameter("Ids."+ std::to_string(i), std::to_string(ids.at(i)));
}

std::string UpgradeAPRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeAPRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

