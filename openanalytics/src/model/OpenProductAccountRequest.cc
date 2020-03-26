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

#include <alibabacloud/openanalytics/model/OpenProductAccountRequest.h>

using AlibabaCloud::Openanalytics::Model::OpenProductAccountRequest;

OpenProductAccountRequest::OpenProductAccountRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "OpenProductAccount")
{
	setMethod(HttpRequest::Method::Post);
}

OpenProductAccountRequest::~OpenProductAccountRequest()
{}

std::string OpenProductAccountRequest::getRegionID()const
{
	return regionID_;
}

void OpenProductAccountRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setBodyParameter("RegionID", regionID);
}

std::string OpenProductAccountRequest::getProductCode()const
{
	return productCode_;
}

void OpenProductAccountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string OpenProductAccountRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void OpenProductAccountRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setBodyParameter("ProductAccessKey", productAccessKey);
}

std::string OpenProductAccountRequest::getTargetUid()const
{
	return targetUid_;
}

void OpenProductAccountRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setBodyParameter("TargetUid", targetUid);
}

std::string OpenProductAccountRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void OpenProductAccountRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setBodyParameter("TargetArnRole", targetArnRole);
}

