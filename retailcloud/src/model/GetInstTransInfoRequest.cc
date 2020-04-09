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

#include <alibabacloud/retailcloud/model/GetInstTransInfoRequest.h>

using AlibabaCloud::Retailcloud::Model::GetInstTransInfoRequest;

GetInstTransInfoRequest::GetInstTransInfoRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "GetInstTransInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetInstTransInfoRequest::~GetInstTransInfoRequest()
{}

std::string GetInstTransInfoRequest::getAliyunUid()const
{
	return aliyunUid_;
}

void GetInstTransInfoRequest::setAliyunUid(const std::string& aliyunUid)
{
	aliyunUid_ = aliyunUid;
	setBodyParameter("AliyunUid", aliyunUid);
}

std::string GetInstTransInfoRequest::getAliyunEquipId()const
{
	return aliyunEquipId_;
}

void GetInstTransInfoRequest::setAliyunEquipId(const std::string& aliyunEquipId)
{
	aliyunEquipId_ = aliyunEquipId;
	setBodyParameter("AliyunEquipId", aliyunEquipId);
}

std::string GetInstTransInfoRequest::getAliyunCommodityCode()const
{
	return aliyunCommodityCode_;
}

void GetInstTransInfoRequest::setAliyunCommodityCode(const std::string& aliyunCommodityCode)
{
	aliyunCommodityCode_ = aliyunCommodityCode;
	setBodyParameter("AliyunCommodityCode", aliyunCommodityCode);
}

