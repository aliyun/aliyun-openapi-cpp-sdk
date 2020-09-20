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

#include <alibabacloud/vcs/model/SearchObjectRequest.h>

using AlibabaCloud::Vcs::Model::SearchObjectRequest;

SearchObjectRequest::SearchObjectRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "SearchObject")
{
	setMethod(HttpRequest::Method::Post);
}

SearchObjectRequest::~SearchObjectRequest()
{}

std::string SearchObjectRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void SearchObjectRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string SearchObjectRequest::getCorpId()const
{
	return corpId_;
}

void SearchObjectRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long SearchObjectRequest::getEndTime()const
{
	return endTime_;
}

void SearchObjectRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long SearchObjectRequest::getStartTime()const
{
	return startTime_;
}

void SearchObjectRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

int SearchObjectRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchObjectRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::map<std::string, std::string> SearchObjectRequest::getDeviceList()const
{
	return deviceList_;
}

void SearchObjectRequest::setDeviceList(const std::map<std::string, std::string>& deviceList)
{
	deviceList_ = deviceList;
	setJsonParameters("DeviceList", deviceList);
}

std::string SearchObjectRequest::getPicUrl()const
{
	return picUrl_;
}

void SearchObjectRequest::setPicUrl(const std::string& picUrl)
{
	picUrl_ = picUrl;
	setBodyParameter("PicUrl", picUrl);
}

std::string SearchObjectRequest::getImagePath()const
{
	return imagePath_;
}

void SearchObjectRequest::setImagePath(const std::string& imagePath)
{
	imagePath_ = imagePath;
	setBodyParameter("ImagePath", imagePath);
}

int SearchObjectRequest::getPageSize()const
{
	return pageSize_;
}

void SearchObjectRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string SearchObjectRequest::getObjectType()const
{
	return objectType_;
}

void SearchObjectRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setBodyParameter("ObjectType", objectType);
}

std::string SearchObjectRequest::getConditions()const
{
	return conditions_;
}

void SearchObjectRequest::setConditions(const std::string& conditions)
{
	conditions_ = conditions;
	setBodyParameter("Conditions", conditions);
}

