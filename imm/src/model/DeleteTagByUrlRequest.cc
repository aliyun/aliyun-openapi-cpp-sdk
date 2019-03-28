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

#include <alibabacloud/imm/model/DeleteTagByUrlRequest.h>

using AlibabaCloud::Imm::Model::DeleteTagByUrlRequest;

DeleteTagByUrlRequest::DeleteTagByUrlRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteTagByUrl")
{}

DeleteTagByUrlRequest::~DeleteTagByUrlRequest()
{}

std::string DeleteTagByUrlRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTagByUrlRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteTagByUrlRequest::getProject()const
{
	return project_;
}

void DeleteTagByUrlRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string DeleteTagByUrlRequest::getSetId()const
{
	return setId_;
}

void DeleteTagByUrlRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setParameter("SetId", setId);
}

std::string DeleteTagByUrlRequest::getSrcUri()const
{
	return srcUri_;
}

void DeleteTagByUrlRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setParameter("SrcUri", srcUri);
}

std::string DeleteTagByUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTagByUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

