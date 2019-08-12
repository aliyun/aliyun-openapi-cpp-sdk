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

#include <alibabacloud/ccc/model/ListCallEventDetailByContactIdRequest.h>

using AlibabaCloud::CCC::Model::ListCallEventDetailByContactIdRequest;

ListCallEventDetailByContactIdRequest::ListCallEventDetailByContactIdRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListCallEventDetailByContactId")
{}

ListCallEventDetailByContactIdRequest::~ListCallEventDetailByContactIdRequest()
{}

std::string ListCallEventDetailByContactIdRequest::getInstanceId()const
{
	return instanceId_;
}

void ListCallEventDetailByContactIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListCallEventDetailByContactIdRequest::getContactId()const
{
	return contactId_;
}

void ListCallEventDetailByContactIdRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string ListCallEventDetailByContactIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCallEventDetailByContactIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

