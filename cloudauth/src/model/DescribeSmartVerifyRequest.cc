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

#include <alibabacloud/cloudauth/model/DescribeSmartVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeSmartVerifyRequest;

DescribeSmartVerifyRequest::DescribeSmartVerifyRequest() :
	RpcServiceRequest("cloudauth", "2020-06-18", "DescribeSmartVerify")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSmartVerifyRequest::~DescribeSmartVerifyRequest()
{}

long DescribeSmartVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void DescribeSmartVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setBodyParameter("SceneId", std::to_string(sceneId));
}

std::string DescribeSmartVerifyRequest::getCertifyId()const
{
	return certifyId_;
}

void DescribeSmartVerifyRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setBodyParameter("CertifyId", certifyId);
}

