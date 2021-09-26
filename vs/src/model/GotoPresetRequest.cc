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

#include <alibabacloud/vs/model/GotoPresetRequest.h>

using AlibabaCloud::Vs::Model::GotoPresetRequest;

GotoPresetRequest::GotoPresetRequest() :
	RpcServiceRequest("vs", "2018-12-12", "GotoPreset")
{
	setMethod(HttpRequest::Method::Post);
}

GotoPresetRequest::~GotoPresetRequest()
{}

std::string GotoPresetRequest::getSubProtocol()const
{
	return subProtocol_;
}

void GotoPresetRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string GotoPresetRequest::getId()const
{
	return id_;
}

void GotoPresetRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string GotoPresetRequest::getPresetId()const
{
	return presetId_;
}

void GotoPresetRequest::setPresetId(const std::string& presetId)
{
	presetId_ = presetId;
	setParameter("PresetId", presetId);
}

std::string GotoPresetRequest::getShowLog()const
{
	return showLog_;
}

void GotoPresetRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long GotoPresetRequest::getOwnerId()const
{
	return ownerId_;
}

void GotoPresetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

