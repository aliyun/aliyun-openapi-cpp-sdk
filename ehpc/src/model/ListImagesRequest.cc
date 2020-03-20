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

#include <alibabacloud/ehpc/model/ListImagesRequest.h>

using AlibabaCloud::EHPC::Model::ListImagesRequest;

ListImagesRequest::ListImagesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListImages")
{
	setMethod(HttpRequest::Method::Get);
}

ListImagesRequest::~ListImagesRequest()
{}

std::string ListImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListImagesRequest::getBaseOsTag()const
{
	return baseOsTag_;
}

void ListImagesRequest::setBaseOsTag(const std::string& baseOsTag)
{
	baseOsTag_ = baseOsTag;
	setParameter("BaseOsTag", baseOsTag);
}

std::string ListImagesRequest::getInstanceType()const
{
	return instanceType_;
}

void ListImagesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

