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

#include <alibabacloud/vcs/model/RecognizeFaceQualityRequest.h>

using AlibabaCloud::Vcs::Model::RecognizeFaceQualityRequest;

RecognizeFaceQualityRequest::RecognizeFaceQualityRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "RecognizeFaceQuality")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeFaceQualityRequest::~RecognizeFaceQualityRequest()
{}

std::string RecognizeFaceQualityRequest::getCorpId()const
{
	return corpId_;
}

void RecognizeFaceQualityRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string RecognizeFaceQualityRequest::getPicUrl()const
{
	return picUrl_;
}

void RecognizeFaceQualityRequest::setPicUrl(const std::string& picUrl)
{
	picUrl_ = picUrl;
	setBodyParameter("PicUrl", picUrl);
}

std::string RecognizeFaceQualityRequest::getPicContent()const
{
	return picContent_;
}

void RecognizeFaceQualityRequest::setPicContent(const std::string& picContent)
{
	picContent_ = picContent;
	setBodyParameter("PicContent", picContent);
}

std::string RecognizeFaceQualityRequest::getPicFormat()const
{
	return picFormat_;
}

void RecognizeFaceQualityRequest::setPicFormat(const std::string& picFormat)
{
	picFormat_ = picFormat;
	setBodyParameter("PicFormat", picFormat);
}

