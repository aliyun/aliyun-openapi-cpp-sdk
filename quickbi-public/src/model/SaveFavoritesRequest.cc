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

#include <alibabacloud/quickbi-public/model/SaveFavoritesRequest.h>

using AlibabaCloud::Quickbi_public::Model::SaveFavoritesRequest;

SaveFavoritesRequest::SaveFavoritesRequest() :
	RpcServiceRequest("quickbi-public", "2020-08-09", "SaveFavorites")
{
	setMethod(HttpRequest::Method::Post);
}

SaveFavoritesRequest::~SaveFavoritesRequest()
{}

std::string SaveFavoritesRequest::getWorksId()const
{
	return worksId_;
}

void SaveFavoritesRequest::setWorksId(const std::string& worksId)
{
	worksId_ = worksId;
	setParameter("WorksId", worksId);
}

std::string SaveFavoritesRequest::getWorksType()const
{
	return worksType_;
}

void SaveFavoritesRequest::setWorksType(const std::string& worksType)
{
	worksType_ = worksType;
	setParameter("WorksType", worksType);
}

std::string SaveFavoritesRequest::getAccessPoint()const
{
	return accessPoint_;
}

void SaveFavoritesRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string SaveFavoritesRequest::getSignType()const
{
	return signType_;
}

void SaveFavoritesRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string SaveFavoritesRequest::getUserId()const
{
	return userId_;
}

void SaveFavoritesRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

