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

#include <alibabacloud/vod/model/DeleteVodRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Vod::Model::DeleteVodRealtimeLogDeliveryRequest;

DeleteVodRealtimeLogDeliveryRequest::DeleteVodRealtimeLogDeliveryRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteVodRealtimeLogDelivery")
{
	setMethod(HttpRequest::Method::Get);
}

DeleteVodRealtimeLogDeliveryRequest::~DeleteVodRealtimeLogDeliveryRequest()
{}

std::string DeleteVodRealtimeLogDeliveryRequest::getProject()const
{
	return project_;
}

void DeleteVodRealtimeLogDeliveryRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string DeleteVodRealtimeLogDeliveryRequest::getDomainName()const
{
	return domainName_;
}

void DeleteVodRealtimeLogDeliveryRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteVodRealtimeLogDeliveryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVodRealtimeLogDeliveryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteVodRealtimeLogDeliveryRequest::getRegion()const
{
	return region_;
}

void DeleteVodRealtimeLogDeliveryRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string DeleteVodRealtimeLogDeliveryRequest::getLogstore()const
{
	return logstore_;
}

void DeleteVodRealtimeLogDeliveryRequest::setLogstore(const std::string& logstore)
{
	logstore_ = logstore;
	setParameter("Logstore", logstore);
}

