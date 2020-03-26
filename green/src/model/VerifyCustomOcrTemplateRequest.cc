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

#include <alibabacloud/green/model/VerifyCustomOcrTemplateRequest.h>

using AlibabaCloud::Green::Model::VerifyCustomOcrTemplateRequest;

VerifyCustomOcrTemplateRequest::VerifyCustomOcrTemplateRequest() :
	RpcServiceRequest("green", "2017-08-23", "VerifyCustomOcrTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyCustomOcrTemplateRequest::~VerifyCustomOcrTemplateRequest()
{}

std::string VerifyCustomOcrTemplateRequest::getTestImgUrl()const
{
	return testImgUrl_;
}

void VerifyCustomOcrTemplateRequest::setTestImgUrl(const std::string& testImgUrl)
{
	testImgUrl_ = testImgUrl;
	setParameter("TestImgUrl", testImgUrl);
}

std::string VerifyCustomOcrTemplateRequest::getSourceIp()const
{
	return sourceIp_;
}

void VerifyCustomOcrTemplateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long VerifyCustomOcrTemplateRequest::getId()const
{
	return id_;
}

void VerifyCustomOcrTemplateRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

