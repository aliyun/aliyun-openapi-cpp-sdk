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

#include <alibabacloud/imm/model/GetWebofficeURLRequest.h>

using AlibabaCloud::Imm::Model::GetWebofficeURLRequest;

GetWebofficeURLRequest::GetWebofficeURLRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetWebofficeURL")
{
	setMethod(HttpRequest::Method::Post);
}

GetWebofficeURLRequest::~GetWebofficeURLRequest()
{}

std::string GetWebofficeURLRequest::getSrcType()const
{
	return srcType_;
}

void GetWebofficeURLRequest::setSrcType(const std::string& srcType)
{
	srcType_ = srcType;
	setParameter("SrcType", srcType);
}

std::string GetWebofficeURLRequest::getProject()const
{
	return project_;
}

void GetWebofficeURLRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string GetWebofficeURLRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetWebofficeURLRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetWebofficeURLRequest::getFile()const
{
	return file_;
}

void GetWebofficeURLRequest::setFile(const std::string& file)
{
	file_ = file;
	setParameter("File", file);
}

std::string GetWebofficeURLRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void GetWebofficeURLRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setParameter("NotifyEndpoint", notifyEndpoint);
}

std::string GetWebofficeURLRequest::getFileID()const
{
	return fileID_;
}

void GetWebofficeURLRequest::setFileID(const std::string& fileID)
{
	fileID_ = fileID;
	setParameter("FileID", fileID);
}

std::string GetWebofficeURLRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void GetWebofficeURLRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setParameter("NotifyTopicName", notifyTopicName);
}

std::string GetWebofficeURLRequest::getPermission()const
{
	return permission_;
}

void GetWebofficeURLRequest::setPermission(const std::string& permission)
{
	permission_ = permission;
	setParameter("Permission", permission);
}

std::string GetWebofficeURLRequest::getUser()const
{
	return user_;
}

void GetWebofficeURLRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

