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

#include <alibabacloud/outboundbot/model/CreateDownloadUrlRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateDownloadUrlRequest;

CreateDownloadUrlRequest::CreateDownloadUrlRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "CreateDownloadUrl")
{
	setMethod(HttpRequest::Method::Get);
}

CreateDownloadUrlRequest::~CreateDownloadUrlRequest()
{}

std::string CreateDownloadUrlRequest::getDownloadTaskId()const
{
	return downloadTaskId_;
}

void CreateDownloadUrlRequest::setDownloadTaskId(const std::string& downloadTaskId)
{
	downloadTaskId_ = downloadTaskId;
	setParameter("DownloadTaskId", downloadTaskId);
}

std::string CreateDownloadUrlRequest::getFileId()const
{
	return fileId_;
}

void CreateDownloadUrlRequest::setFileId(const std::string& fileId)
{
	fileId_ = fileId;
	setParameter("FileId", fileId);
}

