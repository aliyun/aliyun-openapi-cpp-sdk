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

#include <alibabacloud/vs/model/StopAdjustRequest.h>

using AlibabaCloud::Vs::Model::StopAdjustRequest;

StopAdjustRequest::StopAdjustRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StopAdjust")
{
	setMethod(HttpRequest::Method::Post);
}

StopAdjustRequest::~StopAdjustRequest()
{}

bool StopAdjustRequest::getFocus()const
{
	return focus_;
}

void StopAdjustRequest::setFocus(bool focus)
{
	focus_ = focus;
	setParameter("Focus", focus ? "true" : "false");
}

std::string StopAdjustRequest::getSubProtocol()const
{
	return subProtocol_;
}

void StopAdjustRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string StopAdjustRequest::getId()const
{
	return id_;
}

void StopAdjustRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StopAdjustRequest::getShowLog()const
{
	return showLog_;
}

void StopAdjustRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

bool StopAdjustRequest::getIris()const
{
	return iris_;
}

void StopAdjustRequest::setIris(bool iris)
{
	iris_ = iris;
	setParameter("Iris", iris ? "true" : "false");
}

long StopAdjustRequest::getOwnerId()const
{
	return ownerId_;
}

void StopAdjustRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

