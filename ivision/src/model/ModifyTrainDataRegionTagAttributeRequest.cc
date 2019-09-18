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

#include <alibabacloud/ivision/model/ModifyTrainDataRegionTagAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyTrainDataRegionTagAttributeRequest;

ModifyTrainDataRegionTagAttributeRequest::ModifyTrainDataRegionTagAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyTrainDataRegionTagAttribute")
{}

ModifyTrainDataRegionTagAttributeRequest::~ModifyTrainDataRegionTagAttributeRequest()
{}

std::string ModifyTrainDataRegionTagAttributeRequest::getProjectId()const
{
	return projectId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyTrainDataRegionTagAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string ModifyTrainDataRegionTagAttributeRequest::getTagItems()const
{
	return tagItems_;
}

void ModifyTrainDataRegionTagAttributeRequest::setTagItems(const std::string& tagItems)
{
	tagItems_ = tagItems;
	setCoreParameter("TagItems", tagItems);
}

long ModifyTrainDataRegionTagAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyTrainDataRegionTagAttributeRequest::getDataId()const
{
	return dataId_;
}

void ModifyTrainDataRegionTagAttributeRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setCoreParameter("DataId", dataId);
}

