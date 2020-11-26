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

#include <alibabacloud/actiontrail/model/CreateTrailRequest.h>

using AlibabaCloud::Actiontrail::Model::CreateTrailRequest;

CreateTrailRequest::CreateTrailRequest() :
	RpcServiceRequest("actiontrail", "2017-12-04", "CreateTrail")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTrailRequest::~CreateTrailRequest()
{}

std::string CreateTrailRequest::getSlsProjectArn()const
{
	return slsProjectArn_;
}

void CreateTrailRequest::setSlsProjectArn(const std::string& slsProjectArn)
{
	slsProjectArn_ = slsProjectArn;
	setParameter("SlsProjectArn", slsProjectArn);
}

std::string CreateTrailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateTrailRequest::getSlsWriteRoleArn()const
{
	return slsWriteRoleArn_;
}

void CreateTrailRequest::setSlsWriteRoleArn(const std::string& slsWriteRoleArn)
{
	slsWriteRoleArn_ = slsWriteRoleArn;
	setParameter("SlsWriteRoleArn", slsWriteRoleArn);
}

bool CreateTrailRequest::getIsOrganizationTrail()const
{
	return isOrganizationTrail_;
}

void CreateTrailRequest::setIsOrganizationTrail(bool isOrganizationTrail)
{
	isOrganizationTrail_ = isOrganizationTrail;
	setParameter("IsOrganizationTrail", isOrganizationTrail ? "true" : "false");
}

std::string CreateTrailRequest::getOssKeyPrefix()const
{
	return ossKeyPrefix_;
}

void CreateTrailRequest::setOssKeyPrefix(const std::string& ossKeyPrefix)
{
	ossKeyPrefix_ = ossKeyPrefix;
	setParameter("OssKeyPrefix", ossKeyPrefix);
}

std::string CreateTrailRequest::getMnsTopicArn()const
{
	return mnsTopicArn_;
}

void CreateTrailRequest::setMnsTopicArn(const std::string& mnsTopicArn)
{
	mnsTopicArn_ = mnsTopicArn;
	setParameter("MnsTopicArn", mnsTopicArn);
}

std::string CreateTrailRequest::getRoleName()const
{
	return roleName_;
}

void CreateTrailRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string CreateTrailRequest::getEventRW()const
{
	return eventRW_;
}

void CreateTrailRequest::setEventRW(const std::string& eventRW)
{
	eventRW_ = eventRW;
	setParameter("EventRW", eventRW);
}

std::string CreateTrailRequest::getName()const
{
	return name_;
}

void CreateTrailRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateTrailRequest::getOssBucketName()const
{
	return ossBucketName_;
}

void CreateTrailRequest::setOssBucketName(const std::string& ossBucketName)
{
	ossBucketName_ = ossBucketName;
	setParameter("OssBucketName", ossBucketName);
}

std::string CreateTrailRequest::getTrailRegion()const
{
	return trailRegion_;
}

void CreateTrailRequest::setTrailRegion(const std::string& trailRegion)
{
	trailRegion_ = trailRegion;
	setParameter("TrailRegion", trailRegion);
}

