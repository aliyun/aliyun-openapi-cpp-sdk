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

#include <alibabacloud/vs/model/ContinuousMoveRequest.h>

using AlibabaCloud::Vs::Model::ContinuousMoveRequest;

ContinuousMoveRequest::ContinuousMoveRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ContinuousMove")
{
	setMethod(HttpRequest::Method::Post);
}

ContinuousMoveRequest::~ContinuousMoveRequest()
{}

std::string ContinuousMoveRequest::getTilt()const
{
	return tilt_;
}

void ContinuousMoveRequest::setTilt(const std::string& tilt)
{
	tilt_ = tilt;
	setParameter("Tilt", tilt);
}

std::string ContinuousMoveRequest::getSubProtocol()const
{
	return subProtocol_;
}

void ContinuousMoveRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string ContinuousMoveRequest::getId()const
{
	return id_;
}

void ContinuousMoveRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ContinuousMoveRequest::getPan()const
{
	return pan_;
}

void ContinuousMoveRequest::setPan(const std::string& pan)
{
	pan_ = pan;
	setParameter("Pan", pan);
}

std::string ContinuousMoveRequest::getShowLog()const
{
	return showLog_;
}

void ContinuousMoveRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ContinuousMoveRequest::getZoom()const
{
	return zoom_;
}

void ContinuousMoveRequest::setZoom(const std::string& zoom)
{
	zoom_ = zoom;
	setParameter("Zoom", zoom);
}

long ContinuousMoveRequest::getOwnerId()const
{
	return ownerId_;
}

void ContinuousMoveRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

