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

#include <alibabacloud/ccc/model/DeletePhoneTagsRequest.h>

using AlibabaCloud::CCC::Model::DeletePhoneTagsRequest;

DeletePhoneTagsRequest::DeletePhoneTagsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DeletePhoneTags")
{
	setMethod(HttpRequest::Method::Post);
}

DeletePhoneTagsRequest::~DeletePhoneTagsRequest()
{}

std::string DeletePhoneTagsRequest::getInstanceId()const
{
	return instanceId_;
}

void DeletePhoneTagsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> DeletePhoneTagsRequest::getPhoneNumberList()const
{
	return phoneNumberList_;
}

void DeletePhoneTagsRequest::setPhoneNumberList(const std::vector<std::string>& phoneNumberList)
{
	phoneNumberList_ = phoneNumberList;
	for(int dep1 = 0; dep1!= phoneNumberList.size(); dep1++) {
		setParameter("PhoneNumberList."+ std::to_string(dep1), phoneNumberList.at(dep1));
	}
}

std::string DeletePhoneTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeletePhoneTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

