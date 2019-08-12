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

#include <alibabacloud/emr/model/DeleteParagraphRequest.h>

using AlibabaCloud::Emr::Model::DeleteParagraphRequest;

DeleteParagraphRequest::DeleteParagraphRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteParagraph")
{}

DeleteParagraphRequest::~DeleteParagraphRequest()
{}

long DeleteParagraphRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteParagraphRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteParagraphRequest::getRegionId()const
{
	return regionId_;
}

void DeleteParagraphRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteParagraphRequest::getNoteId()const
{
	return noteId_;
}

void DeleteParagraphRequest::setNoteId(const std::string& noteId)
{
	noteId_ = noteId;
	setCoreParameter("NoteId", noteId);
}

std::string DeleteParagraphRequest::getId()const
{
	return id_;
}

void DeleteParagraphRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DeleteParagraphRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteParagraphRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

