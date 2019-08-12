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

#include <alibabacloud/imm/model/DeleteTagSetRequest.h>

using AlibabaCloud::Imm::Model::DeleteTagSetRequest;

DeleteTagSetRequest::DeleteTagSetRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteTagSet")
{}

DeleteTagSetRequest::~DeleteTagSetRequest()
{}

std::string DeleteTagSetRequest::getLazyMode()const
{
	return lazyMode_;
}

void DeleteTagSetRequest::setLazyMode(const std::string& lazyMode)
{
	lazyMode_ = lazyMode;
	setCoreParameter("LazyMode", lazyMode);
}

std::string DeleteTagSetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTagSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteTagSetRequest::getProject()const
{
	return project_;
}

void DeleteTagSetRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DeleteTagSetRequest::getSetId()const
{
	return setId_;
}

void DeleteTagSetRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string DeleteTagSetRequest::getCheckEmpty()const
{
	return checkEmpty_;
}

void DeleteTagSetRequest::setCheckEmpty(const std::string& checkEmpty)
{
	checkEmpty_ = checkEmpty;
	setCoreParameter("CheckEmpty", checkEmpty);
}

std::string DeleteTagSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTagSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

