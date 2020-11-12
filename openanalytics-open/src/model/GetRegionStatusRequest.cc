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

#include <alibabacloud/openanalytics-open/model/GetRegionStatusRequest.h>

using AlibabaCloud::Openanalytics_open::Model::GetRegionStatusRequest;

GetRegionStatusRequest::GetRegionStatusRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "GetRegionStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetRegionStatusRequest::~GetRegionStatusRequest()
{}

std::string GetRegionStatusRequest::getExternalUid()const
{
	return externalUid_;
}

void GetRegionStatusRequest::setExternalUid(const std::string& externalUid)
{
	externalUid_ = externalUid;
	setBodyParameter("ExternalUid", externalUid);
}

std::string GetRegionStatusRequest::getExternalAliyunUid()const
{
	return externalAliyunUid_;
}

void GetRegionStatusRequest::setExternalAliyunUid(const std::string& externalAliyunUid)
{
	externalAliyunUid_ = externalAliyunUid;
	setBodyParameter("ExternalAliyunUid", externalAliyunUid);
}

std::string GetRegionStatusRequest::getRegionId()const
{
	return regionId_;
}

void GetRegionStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string GetRegionStatusRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void GetRegionStatusRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

