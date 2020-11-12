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

#include <alibabacloud/openanalytics-open/model/GetEndPointRequest.h>

using AlibabaCloud::Openanalytics_open::Model::GetEndPointRequest;

GetEndPointRequest::GetEndPointRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "GetEndPoint")
{
	setMethod(HttpRequest::Method::Post);
}

GetEndPointRequest::~GetEndPointRequest()
{}

std::string GetEndPointRequest::getRegionId()const
{
	return regionId_;
}

void GetEndPointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string GetEndPointRequest::getEndPointID()const
{
	return endPointID_;
}

void GetEndPointRequest::setEndPointID(const std::string& endPointID)
{
	endPointID_ = endPointID;
	setBodyParameter("EndPointID", endPointID);
}

