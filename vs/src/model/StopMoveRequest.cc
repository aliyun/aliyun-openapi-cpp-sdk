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

#include <alibabacloud/vs/model/StopMoveRequest.h>

using AlibabaCloud::Vs::Model::StopMoveRequest;

StopMoveRequest::StopMoveRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StopMove")
{
	setMethod(HttpRequest::Method::Post);
}

StopMoveRequest::~StopMoveRequest()
{}

bool StopMoveRequest::getTilt()const
{
	return tilt_;
}

void StopMoveRequest::setTilt(bool tilt)
{
	tilt_ = tilt;
	setParameter("Tilt", tilt ? "true" : "false");
}

std::string StopMoveRequest::getSubProtocol()const
{
	return subProtocol_;
}

void StopMoveRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string StopMoveRequest::getId()const
{
	return id_;
}

void StopMoveRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

bool StopMoveRequest::getPan()const
{
	return pan_;
}

void StopMoveRequest::setPan(bool pan)
{
	pan_ = pan;
	setParameter("Pan", pan ? "true" : "false");
}

std::string StopMoveRequest::getShowLog()const
{
	return showLog_;
}

void StopMoveRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

bool StopMoveRequest::getZoom()const
{
	return zoom_;
}

void StopMoveRequest::setZoom(bool zoom)
{
	zoom_ = zoom;
	setParameter("Zoom", zoom ? "true" : "false");
}

long StopMoveRequest::getOwnerId()const
{
	return ownerId_;
}

void StopMoveRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

