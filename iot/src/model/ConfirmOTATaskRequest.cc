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

#include <alibabacloud/iot/model/ConfirmOTATaskRequest.h>

using AlibabaCloud::Iot::Model::ConfirmOTATaskRequest;

ConfirmOTATaskRequest::ConfirmOTATaskRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ConfirmOTATask")
{
	setMethod(HttpRequest::Method::Post);
}

ConfirmOTATaskRequest::~ConfirmOTATaskRequest()
{}

std::string ConfirmOTATaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfirmOTATaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfirmOTATaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ConfirmOTATaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> ConfirmOTATaskRequest::getTaskId()const
{
	return taskId_;
}

void ConfirmOTATaskRequest::setTaskId(const std::vector<std::string>& taskId)
{
	taskId_ = taskId;
	for(int dep1 = 0; dep1!= taskId.size(); dep1++) {
		setParameter("TaskId."+ std::to_string(dep1), taskId.at(dep1));
	}
}

std::string ConfirmOTATaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void ConfirmOTATaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ConfirmOTATaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void ConfirmOTATaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

