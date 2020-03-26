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

#include <alibabacloud/emr/model/ReleaseClusterByTemplateTagForInternalRequest.h>

using AlibabaCloud::Emr::Model::ReleaseClusterByTemplateTagForInternalRequest;

ReleaseClusterByTemplateTagForInternalRequest::ReleaseClusterByTemplateTagForInternalRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ReleaseClusterByTemplateTagForInternal")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseClusterByTemplateTagForInternalRequest::~ReleaseClusterByTemplateTagForInternalRequest()
{}

std::vector<std::string> ReleaseClusterByTemplateTagForInternalRequest::getTemplateTagSet()const
{
	return templateTagSet_;
}

void ReleaseClusterByTemplateTagForInternalRequest::setTemplateTagSet(const std::vector<std::string>& templateTagSet)
{
	templateTagSet_ = templateTagSet;
	for(int dep1 = 0; dep1!= templateTagSet.size(); dep1++) {
		setParameter("TemplateTagSet."+ std::to_string(dep1), templateTagSet.at(dep1));
	}
}

long ReleaseClusterByTemplateTagForInternalRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseClusterByTemplateTagForInternalRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReleaseClusterByTemplateTagForInternalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseClusterByTemplateTagForInternalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseClusterByTemplateTagForInternalRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseClusterByTemplateTagForInternalRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

