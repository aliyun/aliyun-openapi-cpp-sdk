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

#include <alibabacloud/ccc/model/PublishContactFlowVersionRequest.h>

using AlibabaCloud::CCC::Model::PublishContactFlowVersionRequest;

PublishContactFlowVersionRequest::PublishContactFlowVersionRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PublishContactFlowVersion")
{}

PublishContactFlowVersionRequest::~PublishContactFlowVersionRequest()
{}

std::string PublishContactFlowVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PublishContactFlowVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PublishContactFlowVersionRequest::getInstanceId()const
{
	return instanceId_;
}

void PublishContactFlowVersionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string PublishContactFlowVersionRequest::getContactFlowVersionId()const
{
	return contactFlowVersionId_;
}

void PublishContactFlowVersionRequest::setContactFlowVersionId(const std::string& contactFlowVersionId)
{
	contactFlowVersionId_ = contactFlowVersionId;
	setCoreParameter("ContactFlowVersionId", contactFlowVersionId);
}

bool PublishContactFlowVersionRequest::getUseTianGong()const
{
	return useTianGong_;
}

void PublishContactFlowVersionRequest::setUseTianGong(bool useTianGong)
{
	useTianGong_ = useTianGong;
	setCoreParameter("UseTianGong", useTianGong ? "true" : "false");
}

