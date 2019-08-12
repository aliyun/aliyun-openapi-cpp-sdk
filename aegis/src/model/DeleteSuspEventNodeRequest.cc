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

#include <alibabacloud/aegis/model/DeleteSuspEventNodeRequest.h>

using AlibabaCloud::Aegis::Model::DeleteSuspEventNodeRequest;

DeleteSuspEventNodeRequest::DeleteSuspEventNodeRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DeleteSuspEventNode")
{}

DeleteSuspEventNodeRequest::~DeleteSuspEventNodeRequest()
{}

std::string DeleteSuspEventNodeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteSuspEventNodeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DeleteSuspEventNodeRequest::getNoteId()const
{
	return noteId_;
}

void DeleteSuspEventNodeRequest::setNoteId(int noteId)
{
	noteId_ = noteId;
	setCoreParameter("NoteId", std::to_string(noteId));
}

