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

#include <alibabacloud/tdsr/model/PublishHotspotRequest.h>

using AlibabaCloud::Tdsr::Model::PublishHotspotRequest;

PublishHotspotRequest::PublishHotspotRequest() :
	RpcServiceRequest("tdsr", "2020-01-01", "PublishHotspot")
{
	setMethod(HttpRequest::Method::Post);
}

PublishHotspotRequest::~PublishHotspotRequest()
{}

std::string PublishHotspotRequest::getSubSceneUuid()const
{
	return subSceneUuid_;
}

void PublishHotspotRequest::setSubSceneUuid(const std::string& subSceneUuid)
{
	subSceneUuid_ = subSceneUuid;
	setParameter("SubSceneUuid", subSceneUuid);
}

std::string PublishHotspotRequest::getParamTag()const
{
	return paramTag_;
}

void PublishHotspotRequest::setParamTag(const std::string& paramTag)
{
	paramTag_ = paramTag;
	setParameter("ParamTag", paramTag);
}

