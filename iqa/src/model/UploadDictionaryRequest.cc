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

#include <alibabacloud/iqa/model/UploadDictionaryRequest.h>

using AlibabaCloud::Iqa::Model::UploadDictionaryRequest;

UploadDictionaryRequest::UploadDictionaryRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "UploadDictionary")
{
	setMethod(HttpRequest::Method::Post);
}

UploadDictionaryRequest::~UploadDictionaryRequest()
{}

std::string UploadDictionaryRequest::getDictionaryFileUrl()const
{
	return dictionaryFileUrl_;
}

void UploadDictionaryRequest::setDictionaryFileUrl(const std::string& dictionaryFileUrl)
{
	dictionaryFileUrl_ = dictionaryFileUrl;
	setBodyParameter("DictionaryFileUrl", dictionaryFileUrl);
}

std::string UploadDictionaryRequest::getProjectId()const
{
	return projectId_;
}

void UploadDictionaryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string UploadDictionaryRequest::getDictionaryData()const
{
	return dictionaryData_;
}

void UploadDictionaryRequest::setDictionaryData(const std::string& dictionaryData)
{
	dictionaryData_ = dictionaryData;
	setBodyParameter("DictionaryData", dictionaryData);
}

