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

#include <alibabacloud/aegis/model/RollbackSuspEventQuaraFileRequest.h>

using AlibabaCloud::Aegis::Model::RollbackSuspEventQuaraFileRequest;

RollbackSuspEventQuaraFileRequest::RollbackSuspEventQuaraFileRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "RollbackSuspEventQuaraFile")
{}

RollbackSuspEventQuaraFileRequest::~RollbackSuspEventQuaraFileRequest()
{}

std::string RollbackSuspEventQuaraFileRequest::getSourceIp()const
{
	return sourceIp_;
}

void RollbackSuspEventQuaraFileRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string RollbackSuspEventQuaraFileRequest::getFrom()const
{
	return from_;
}

void RollbackSuspEventQuaraFileRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

int RollbackSuspEventQuaraFileRequest::getQuaraFileId()const
{
	return quaraFileId_;
}

void RollbackSuspEventQuaraFileRequest::setQuaraFileId(int quaraFileId)
{
	quaraFileId_ = quaraFileId;
	setCoreParameter("QuaraFileId", std::to_string(quaraFileId));
}

