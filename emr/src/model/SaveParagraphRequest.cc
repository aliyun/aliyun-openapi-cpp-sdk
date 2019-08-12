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

#include <alibabacloud/emr/model/SaveParagraphRequest.h>

using AlibabaCloud::Emr::Model::SaveParagraphRequest;

SaveParagraphRequest::SaveParagraphRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SaveParagraph")
{}

SaveParagraphRequest::~SaveParagraphRequest()
{}

long SaveParagraphRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SaveParagraphRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SaveParagraphRequest::getRegionId()const
{
	return regionId_;
}

void SaveParagraphRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string SaveParagraphRequest::getNoteId()const
{
	return noteId_;
}

void SaveParagraphRequest::setNoteId(const std::string& noteId)
{
	noteId_ = noteId;
	setCoreParameter("NoteId", std::to_string(noteId));
}

std::string SaveParagraphRequest::getId()const
{
	return id_;
}

void SaveParagraphRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string SaveParagraphRequest::getText()const
{
	return text_;
}

void SaveParagraphRequest::setText(const std::string& text)
{
	text_ = text;
	setCoreParameter("Text", std::to_string(text));
}

std::string SaveParagraphRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveParagraphRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

