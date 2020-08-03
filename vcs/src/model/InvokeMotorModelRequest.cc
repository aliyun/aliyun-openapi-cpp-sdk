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

#include <alibabacloud/vcs/model/InvokeMotorModelRequest.h>

using AlibabaCloud::Vcs::Model::InvokeMotorModelRequest;

InvokeMotorModelRequest::InvokeMotorModelRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "InvokeMotorModel")
{
	setMethod(HttpRequest::Method::Post);
}

InvokeMotorModelRequest::~InvokeMotorModelRequest()
{}

std::string InvokeMotorModelRequest::getPicPath()const
{
	return picPath_;
}

void InvokeMotorModelRequest::setPicPath(const std::string& picPath)
{
	picPath_ = picPath;
	setBodyParameter("PicPath", picPath);
}

std::string InvokeMotorModelRequest::getCorpId()const
{
	return corpId_;
}

void InvokeMotorModelRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string InvokeMotorModelRequest::getPicUrl()const
{
	return picUrl_;
}

void InvokeMotorModelRequest::setPicUrl(const std::string& picUrl)
{
	picUrl_ = picUrl;
	setBodyParameter("PicUrl", picUrl);
}

std::string InvokeMotorModelRequest::getPicId()const
{
	return picId_;
}

void InvokeMotorModelRequest::setPicId(const std::string& picId)
{
	picId_ = picId;
	setBodyParameter("PicId", picId);
}

