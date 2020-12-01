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

#include <alibabacloud/ccc/model/ResetUserStatusRequest.h>

using AlibabaCloud::CCC::Model::ResetUserStatusRequest;

ResetUserStatusRequest::ResetUserStatusRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ResetUserStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ResetUserStatusRequest::~ResetUserStatusRequest()
{}

std::string ResetUserStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ResetUserStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<long> ResetUserStatusRequest::getRamIdList()const
{
	return ramIdList_;
}

void ResetUserStatusRequest::setRamIdList(const std::vector<long>& ramIdList)
{
	ramIdList_ = ramIdList;
	for(int dep1 = 0; dep1!= ramIdList.size(); dep1++) {
		setParameter("RamIdList."+ std::to_string(dep1), std::to_string(ramIdList.at(dep1)));
	}
}

std::string ResetUserStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetUserStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

