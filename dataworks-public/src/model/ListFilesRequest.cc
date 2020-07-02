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

#include <alibabacloud/dataworks-public/model/ListFilesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListFilesRequest;

ListFilesRequest::ListFilesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListFiles")
{
	setMethod(HttpRequest::Method::Post);
}

ListFilesRequest::~ListFilesRequest()
{}

std::string ListFilesRequest::getOwner()const
{
	return owner_;
}

void ListFilesRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setBodyParameter("Owner", owner);
}

std::string ListFilesRequest::getFileTypes()const
{
	return fileTypes_;
}

void ListFilesRequest::setFileTypes(const std::string& fileTypes)
{
	fileTypes_ = fileTypes;
	setBodyParameter("FileTypes", fileTypes);
}

std::string ListFilesRequest::getProjectIdentifier()const
{
	return projectIdentifier_;
}

void ListFilesRequest::setProjectIdentifier(const std::string& projectIdentifier)
{
	projectIdentifier_ = projectIdentifier;
	setBodyParameter("ProjectIdentifier", projectIdentifier);
}

int ListFilesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFilesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFilesRequest::getFileFolderPath()const
{
	return fileFolderPath_;
}

void ListFilesRequest::setFileFolderPath(const std::string& fileFolderPath)
{
	fileFolderPath_ = fileFolderPath;
	setBodyParameter("FileFolderPath", fileFolderPath);
}

int ListFilesRequest::getPageSize()const
{
	return pageSize_;
}

void ListFilesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListFilesRequest::getKeyword()const
{
	return keyword_;
}

void ListFilesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setBodyParameter("Keyword", keyword);
}

long ListFilesRequest::getProjectId()const
{
	return projectId_;
}

void ListFilesRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

int ListFilesRequest::getUseType()const
{
	return useType_;
}

void ListFilesRequest::setUseType(int useType)
{
	useType_ = useType;
	setBodyParameter("UseType", std::to_string(useType));
}

