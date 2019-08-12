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

#include <alibabacloud/imm/model/SearchFaceRequest.h>

using AlibabaCloud::Imm::Model::SearchFaceRequest;

SearchFaceRequest::SearchFaceRequest() :
	RpcServiceRequest("imm", "2017-09-06", "SearchFace")
{}

SearchFaceRequest::~SearchFaceRequest()
{}

std::string SearchFaceRequest::getRegionId()const
{
	return regionId_;
}

void SearchFaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int SearchFaceRequest::getResultNum()const
{
	return resultNum_;
}

void SearchFaceRequest::setResultNum(int resultNum)
{
	resultNum_ = resultNum;
	setCoreParameter("ResultNum", resultNum);
}

std::string SearchFaceRequest::getProject()const
{
	return project_;
}

void SearchFaceRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string SearchFaceRequest::getSearchThresholdLevel()const
{
	return searchThresholdLevel_;
}

void SearchFaceRequest::setSearchThresholdLevel(const std::string& searchThresholdLevel)
{
	searchThresholdLevel_ = searchThresholdLevel;
	setCoreParameter("SearchThresholdLevel", std::to_string(searchThresholdLevel));
}

std::string SearchFaceRequest::getSrcUri()const
{
	return srcUri_;
}

void SearchFaceRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", std::to_string(srcUri));
}

bool SearchFaceRequest::getIsThreshold()const
{
	return isThreshold_;
}

void SearchFaceRequest::setIsThreshold(bool isThreshold)
{
	isThreshold_ = isThreshold;
	setCoreParameter("IsThreshold", isThreshold ? "true" : "false");
}

std::string SearchFaceRequest::getGroupName()const
{
	return groupName_;
}

void SearchFaceRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", std::to_string(groupName));
}

std::string SearchFaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchFaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

