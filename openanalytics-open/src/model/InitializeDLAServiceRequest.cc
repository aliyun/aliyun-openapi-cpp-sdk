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

#include <alibabacloud/openanalytics-open/model/InitializeDLAServiceRequest.h>

using AlibabaCloud::Openanalytics_open::Model::InitializeDLAServiceRequest;

InitializeDLAServiceRequest::InitializeDLAServiceRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "InitializeDLAService")
{
	setMethod(HttpRequest::Method::Post);
}

InitializeDLAServiceRequest::~InitializeDLAServiceRequest()
{}

std::string InitializeDLAServiceRequest::getExternalUid()const
{
	return externalUid_;
}

void InitializeDLAServiceRequest::setExternalUid(const std::string& externalUid)
{
	externalUid_ = externalUid;
	setBodyParameter("ExternalUid", externalUid);
}

std::string InitializeDLAServiceRequest::getInitPassword()const
{
	return initPassword_;
}

void InitializeDLAServiceRequest::setInitPassword(const std::string& initPassword)
{
	initPassword_ = initPassword;
	setBodyParameter("InitPassword", initPassword);
}

std::string InitializeDLAServiceRequest::getExternalAliyunUid()const
{
	return externalAliyunUid_;
}

void InitializeDLAServiceRequest::setExternalAliyunUid(const std::string& externalAliyunUid)
{
	externalAliyunUid_ = externalAliyunUid;
	setBodyParameter("ExternalAliyunUid", externalAliyunUid);
}

std::string InitializeDLAServiceRequest::getRegionId()const
{
	return regionId_;
}

void InitializeDLAServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

bool InitializeDLAServiceRequest::getUseRandomPassword()const
{
	return useRandomPassword_;
}

void InitializeDLAServiceRequest::setUseRandomPassword(bool useRandomPassword)
{
	useRandomPassword_ = useRandomPassword;
	setBodyParameter("UseRandomPassword", useRandomPassword ? "true" : "false");
}

bool InitializeDLAServiceRequest::getEnableKMS()const
{
	return enableKMS_;
}

void InitializeDLAServiceRequest::setEnableKMS(bool enableKMS)
{
	enableKMS_ = enableKMS;
	setBodyParameter("EnableKMS", enableKMS ? "true" : "false");
}

std::string InitializeDLAServiceRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void InitializeDLAServiceRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

