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

#include <alibabacloud/scsp/model/GetCMSIdByForeignIdRequest.h>

using AlibabaCloud::Scsp::Model::GetCMSIdByForeignIdRequest;

GetCMSIdByForeignIdRequest::GetCMSIdByForeignIdRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetCMSIdByForeignId")
{
	setMethod(HttpRequest::Method::Post);
}

GetCMSIdByForeignIdRequest::~GetCMSIdByForeignIdRequest()
{}

std::string GetCMSIdByForeignIdRequest::getNick()const
{
	return nick_;
}

void GetCMSIdByForeignIdRequest::setNick(const std::string& nick)
{
	nick_ = nick;
	setParameter("Nick", nick);
}

long GetCMSIdByForeignIdRequest::getSourceId()const
{
	return sourceId_;
}

void GetCMSIdByForeignIdRequest::setSourceId(long sourceId)
{
	sourceId_ = sourceId;
	setParameter("SourceId", std::to_string(sourceId));
}

std::string GetCMSIdByForeignIdRequest::getForeignId()const
{
	return foreignId_;
}

void GetCMSIdByForeignIdRequest::setForeignId(const std::string& foreignId)
{
	foreignId_ = foreignId;
	setParameter("ForeignId", foreignId);
}

std::string GetCMSIdByForeignIdRequest::getInstanceId()const
{
	return instanceId_;
}

void GetCMSIdByForeignIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

