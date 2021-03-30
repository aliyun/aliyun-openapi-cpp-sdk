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

#include <alibabacloud/airec/model/RecommendRequest.h>

using AlibabaCloud::Airec::Model::RecommendRequest;

RecommendRequest::RecommendRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/actions/recommend");
	setMethod(HttpRequest::Method::Get);
}

RecommendRequest::~RecommendRequest()
{}

int RecommendRequest::getReturnCount()const
{
	return returnCount_;
}

void RecommendRequest::setReturnCount(int returnCount)
{
	returnCount_ = returnCount;
	setParameter("ReturnCount", std::to_string(returnCount));
}

std::string RecommendRequest::getServiceType()const
{
	return serviceType_;
}

void RecommendRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string RecommendRequest::getInstanceId()const
{
	return instanceId_;
}

void RecommendRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RecommendRequest::getDebug()const
{
	return debug_;
}

void RecommendRequest::setDebug(const std::string& debug)
{
	debug_ = debug;
	setParameter("Debug", debug);
}

std::string RecommendRequest::getIp()const
{
	return ip_;
}

void RecommendRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string RecommendRequest::getLogLevel()const
{
	return logLevel_;
}

void RecommendRequest::setLogLevel(const std::string& logLevel)
{
	logLevel_ = logLevel;
	setParameter("LogLevel", logLevel);
}

std::string RecommendRequest::getSceneId()const
{
	return sceneId_;
}

void RecommendRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string RecommendRequest::getImei()const
{
	return imei_;
}

void RecommendRequest::setImei(const std::string& imei)
{
	imei_ = imei;
	setParameter("Imei", imei);
}

std::string RecommendRequest::getExperimentId()const
{
	return experimentId_;
}

void RecommendRequest::setExperimentId(const std::string& experimentId)
{
	experimentId_ = experimentId;
	setParameter("ExperimentId", experimentId);
}

std::string RecommendRequest::getUserId()const
{
	return userId_;
}

void RecommendRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string RecommendRequest::getItems()const
{
	return items_;
}

void RecommendRequest::setItems(const std::string& items)
{
	items_ = items;
	setParameter("Items", items);
}

std::string RecommendRequest::getUserInfo()const
{
	return userInfo_;
}

void RecommendRequest::setUserInfo(const std::string& userInfo)
{
	userInfo_ = userInfo;
	setParameter("UserInfo", userInfo);
}

