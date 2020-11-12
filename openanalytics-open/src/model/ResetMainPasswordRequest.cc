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

#include <alibabacloud/openanalytics-open/model/ResetMainPasswordRequest.h>

using AlibabaCloud::Openanalytics_open::Model::ResetMainPasswordRequest;

ResetMainPasswordRequest::ResetMainPasswordRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "ResetMainPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ResetMainPasswordRequest::~ResetMainPasswordRequest()
{}

std::string ResetMainPasswordRequest::getExternalUid()const
{
	return externalUid_;
}

void ResetMainPasswordRequest::setExternalUid(const std::string& externalUid)
{
	externalUid_ = externalUid;
	setBodyParameter("ExternalUid", externalUid);
}

std::string ResetMainPasswordRequest::getInitPassword()const
{
	return initPassword_;
}

void ResetMainPasswordRequest::setInitPassword(const std::string& initPassword)
{
	initPassword_ = initPassword;
	setBodyParameter("InitPassword", initPassword);
}

std::string ResetMainPasswordRequest::getExternalAliyunUid()const
{
	return externalAliyunUid_;
}

void ResetMainPasswordRequest::setExternalAliyunUid(const std::string& externalAliyunUid)
{
	externalAliyunUid_ = externalAliyunUid;
	setBodyParameter("ExternalAliyunUid", externalAliyunUid);
}

std::string ResetMainPasswordRequest::getRegionId()const
{
	return regionId_;
}

void ResetMainPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

bool ResetMainPasswordRequest::getUseRandomPassword()const
{
	return useRandomPassword_;
}

void ResetMainPasswordRequest::setUseRandomPassword(bool useRandomPassword)
{
	useRandomPassword_ = useRandomPassword;
	setBodyParameter("UseRandomPassword", useRandomPassword ? "true" : "false");
}

bool ResetMainPasswordRequest::getEnableKMS()const
{
	return enableKMS_;
}

void ResetMainPasswordRequest::setEnableKMS(bool enableKMS)
{
	enableKMS_ = enableKMS;
	setBodyParameter("EnableKMS", enableKMS ? "true" : "false");
}

std::string ResetMainPasswordRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void ResetMainPasswordRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

