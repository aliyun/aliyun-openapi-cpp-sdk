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

#include <alibabacloud/vs/model/ContinuousAdjustRequest.h>

using AlibabaCloud::Vs::Model::ContinuousAdjustRequest;

ContinuousAdjustRequest::ContinuousAdjustRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ContinuousAdjust")
{
	setMethod(HttpRequest::Method::Post);
}

ContinuousAdjustRequest::~ContinuousAdjustRequest()
{}

std::string ContinuousAdjustRequest::getFocus()const
{
	return focus_;
}

void ContinuousAdjustRequest::setFocus(const std::string& focus)
{
	focus_ = focus;
	setParameter("Focus", focus);
}

std::string ContinuousAdjustRequest::getSubProtocol()const
{
	return subProtocol_;
}

void ContinuousAdjustRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string ContinuousAdjustRequest::getId()const
{
	return id_;
}

void ContinuousAdjustRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ContinuousAdjustRequest::getShowLog()const
{
	return showLog_;
}

void ContinuousAdjustRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ContinuousAdjustRequest::getIris()const
{
	return iris_;
}

void ContinuousAdjustRequest::setIris(const std::string& iris)
{
	iris_ = iris;
	setParameter("Iris", iris);
}

long ContinuousAdjustRequest::getOwnerId()const
{
	return ownerId_;
}

void ContinuousAdjustRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

