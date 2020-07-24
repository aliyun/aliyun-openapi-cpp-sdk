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

#include <alibabacloud/codeup/model/GetFileBlobsRequest.h>

using AlibabaCloud::Codeup::Model::GetFileBlobsRequest;

GetFileBlobsRequest::GetFileBlobsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/repository/blobs");
	setMethod(HttpRequest::Method::Get);
}

GetFileBlobsRequest::~GetFileBlobsRequest()
{}

std::string GetFileBlobsRequest::getAccessToken()const
{
	return accessToken_;
}

void GetFileBlobsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

std::string GetFileBlobsRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetFileBlobsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetFileBlobsRequest::getRef()const
{
	return ref_;
}

void GetFileBlobsRequest::setRef(const std::string& ref)
{
	ref_ = ref;
	setParameter("Ref", ref);
}

std::string GetFileBlobsRequest::getSubUserId()const
{
	return subUserId_;
}

void GetFileBlobsRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string GetFileBlobsRequest::getFilePath()const
{
	return filePath_;
}

void GetFileBlobsRequest::setFilePath(const std::string& filePath)
{
	filePath_ = filePath;
	setParameter("FilePath", filePath);
}

long GetFileBlobsRequest::getFrom()const
{
	return from_;
}

void GetFileBlobsRequest::setFrom(long from)
{
	from_ = from;
	setParameter("From", std::to_string(from));
}

long GetFileBlobsRequest::getTo()const
{
	return to_;
}

void GetFileBlobsRequest::setTo(long to)
{
	to_ = to;
	setParameter("To", std::to_string(to));
}

long GetFileBlobsRequest::getProjectId()const
{
	return projectId_;
}

void GetFileBlobsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

