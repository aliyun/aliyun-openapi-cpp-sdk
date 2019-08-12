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

#include <alibabacloud/emr/model/StopParagraphRequest.h>

using AlibabaCloud::Emr::Model::StopParagraphRequest;

StopParagraphRequest::StopParagraphRequest() :
	RpcServiceRequest("emr", "2016-04-08", "StopParagraph")
{}

StopParagraphRequest::~StopParagraphRequest()
{}

long StopParagraphRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopParagraphRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string StopParagraphRequest::getRegionId()const
{
	return regionId_;
}

void StopParagraphRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StopParagraphRequest::getNoteId()const
{
	return noteId_;
}

void StopParagraphRequest::setNoteId(const std::string& noteId)
{
	noteId_ = noteId;
	setCoreParameter("NoteId", noteId);
}

std::string StopParagraphRequest::getId()const
{
	return id_;
}

void StopParagraphRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string StopParagraphRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopParagraphRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

