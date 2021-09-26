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

#include <alibabacloud/vs/model/DeletePresetRequest.h>

using AlibabaCloud::Vs::Model::DeletePresetRequest;

DeletePresetRequest::DeletePresetRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DeletePreset")
{
	setMethod(HttpRequest::Method::Post);
}

DeletePresetRequest::~DeletePresetRequest()
{}

std::string DeletePresetRequest::getSubProtocol()const
{
	return subProtocol_;
}

void DeletePresetRequest::setSubProtocol(const std::string& subProtocol)
{
	subProtocol_ = subProtocol;
	setParameter("SubProtocol", subProtocol);
}

std::string DeletePresetRequest::getId()const
{
	return id_;
}

void DeletePresetRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DeletePresetRequest::getPresetId()const
{
	return presetId_;
}

void DeletePresetRequest::setPresetId(const std::string& presetId)
{
	presetId_ = presetId;
	setParameter("PresetId", presetId);
}

std::string DeletePresetRequest::getShowLog()const
{
	return showLog_;
}

void DeletePresetRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DeletePresetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeletePresetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

