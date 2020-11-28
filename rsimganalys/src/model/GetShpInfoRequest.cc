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

#include <alibabacloud/rsimganalys/model/GetShpInfoRequest.h>

using AlibabaCloud::Rsimganalys::Model::GetShpInfoRequest;

GetShpInfoRequest::GetShpInfoRequest() :
	RpcServiceRequest("rsimganalys", "2019-08-01", "GetShpInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetShpInfoRequest::~GetShpInfoRequest()
{}

std::string GetShpInfoRequest::getFid()const
{
	return fid_;
}

void GetShpInfoRequest::setFid(const std::string& fid)
{
	fid_ = fid;
	setParameter("Fid", fid);
}

std::string GetShpInfoRequest::getTaskId()const
{
	return taskId_;
}

void GetShpInfoRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string GetShpInfoRequest::getFileId()const
{
	return fileId_;
}

void GetShpInfoRequest::setFileId(const std::string& fileId)
{
	fileId_ = fileId;
	setParameter("FileId", fileId);
}

