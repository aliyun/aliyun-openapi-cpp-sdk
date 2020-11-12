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

#include <alibabacloud/openanalytics-open/model/InitializeRegionRequest.h>

using AlibabaCloud::Openanalytics_open::Model::InitializeRegionRequest;

InitializeRegionRequest::InitializeRegionRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "InitializeRegion")
{
	setMethod(HttpRequest::Method::Post);
}

InitializeRegionRequest::~InitializeRegionRequest()
{}

std::string InitializeRegionRequest::getExternalUid()const
{
	return externalUid_;
}

void InitializeRegionRequest::setExternalUid(const std::string& externalUid)
{
	externalUid_ = externalUid;
	setBodyParameter("ExternalUid", externalUid);
}

std::string InitializeRegionRequest::getInitPassword()const
{
	return initPassword_;
}

void InitializeRegionRequest::setInitPassword(const std::string& initPassword)
{
	initPassword_ = initPassword;
	setBodyParameter("InitPassword", initPassword);
}

std::string InitializeRegionRequest::getExternalAliyunUid()const
{
	return externalAliyunUid_;
}

void InitializeRegionRequest::setExternalAliyunUid(const std::string& externalAliyunUid)
{
	externalAliyunUid_ = externalAliyunUid;
	setBodyParameter("ExternalAliyunUid", externalAliyunUid);
}

std::string InitializeRegionRequest::getRegionId()const
{
	return regionId_;
}

void InitializeRegionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

bool InitializeRegionRequest::getUseRandomPassword()const
{
	return useRandomPassword_;
}

void InitializeRegionRequest::setUseRandomPassword(bool useRandomPassword)
{
	useRandomPassword_ = useRandomPassword;
	setBodyParameter("UseRandomPassword", useRandomPassword ? "true" : "false");
}

bool InitializeRegionRequest::getEnableKMS()const
{
	return enableKMS_;
}

void InitializeRegionRequest::setEnableKMS(bool enableKMS)
{
	enableKMS_ = enableKMS;
	setBodyParameter("EnableKMS", enableKMS ? "true" : "false");
}

std::string InitializeRegionRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void InitializeRegionRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

