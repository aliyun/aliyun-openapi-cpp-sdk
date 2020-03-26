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

#include <alibabacloud/ccc/model/ListRecordingsByContactIdRequest.h>

using AlibabaCloud::CCC::Model::ListRecordingsByContactIdRequest;

ListRecordingsByContactIdRequest::ListRecordingsByContactIdRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListRecordingsByContactId")
{
	setMethod(HttpRequest::Method::Post);
}

ListRecordingsByContactIdRequest::~ListRecordingsByContactIdRequest()
{}

std::string ListRecordingsByContactIdRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRecordingsByContactIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListRecordingsByContactIdRequest::getContactId()const
{
	return contactId_;
}

void ListRecordingsByContactIdRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setParameter("ContactId", contactId);
}

std::string ListRecordingsByContactIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRecordingsByContactIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

