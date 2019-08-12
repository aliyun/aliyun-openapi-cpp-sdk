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

#include <alibabacloud/cloudwf/model/SetUpgradeImgByModelRequest.h>

using AlibabaCloud::Cloudwf::Model::SetUpgradeImgByModelRequest;

SetUpgradeImgByModelRequest::SetUpgradeImgByModelRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SetUpgradeImgByModel")
{}

SetUpgradeImgByModelRequest::~SetUpgradeImgByModelRequest()
{}

std::string SetUpgradeImgByModelRequest::getImgAddr()const
{
	return imgAddr_;
}

void SetUpgradeImgByModelRequest::setImgAddr(const std::string& imgAddr)
{
	imgAddr_ = imgAddr;
	setCoreParameter("ImgAddr", imgAddr);
}

std::string SetUpgradeImgByModelRequest::getImgVersion()const
{
	return imgVersion_;
}

void SetUpgradeImgByModelRequest::setImgVersion(const std::string& imgVersion)
{
	imgVersion_ = imgVersion;
	setCoreParameter("ImgVersion", imgVersion);
}

long SetUpgradeImgByModelRequest::getApModelId()const
{
	return apModelId_;
}

void SetUpgradeImgByModelRequest::setApModelId(long apModelId)
{
	apModelId_ = apModelId;
	setCoreParameter("ApModelId", apModelId);
}

std::string SetUpgradeImgByModelRequest::getComment()const
{
	return comment_;
}

void SetUpgradeImgByModelRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

std::string SetUpgradeImgByModelRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetUpgradeImgByModelRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

