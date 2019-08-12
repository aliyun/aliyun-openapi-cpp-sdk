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

#include <alibabacloud/cloudauth/model/DetectFaceAttributesRequest.h>

using AlibabaCloud::Cloudauth::Model::DetectFaceAttributesRequest;

DetectFaceAttributesRequest::DetectFaceAttributesRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "DetectFaceAttributes")
{}

DetectFaceAttributesRequest::~DetectFaceAttributesRequest()
{}

int DetectFaceAttributesRequest::getMaxNumPhotosPerCategory()const
{
	return maxNumPhotosPerCategory_;
}

void DetectFaceAttributesRequest::setMaxNumPhotosPerCategory(int maxNumPhotosPerCategory)
{
	maxNumPhotosPerCategory_ = maxNumPhotosPerCategory;
	setCoreParameter("MaxNumPhotosPerCategory", maxNumPhotosPerCategory);
}

int DetectFaceAttributesRequest::getMaxFaceNum()const
{
	return maxFaceNum_;
}

void DetectFaceAttributesRequest::setMaxFaceNum(int maxFaceNum)
{
	maxFaceNum_ = maxFaceNum;
	setCoreParameter("MaxFaceNum", maxFaceNum);
}

long DetectFaceAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetectFaceAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DetectFaceAttributesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DetectFaceAttributesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DetectFaceAttributesRequest::getRetAttributes()const
{
	return retAttributes_;
}

void DetectFaceAttributesRequest::setRetAttributes(const std::string& retAttributes)
{
	retAttributes_ = retAttributes;
	setCoreParameter("RetAttributes", std::to_string(retAttributes));
}

std::string DetectFaceAttributesRequest::getMaterialValue()const
{
	return materialValue_;
}

void DetectFaceAttributesRequest::setMaterialValue(const std::string& materialValue)
{
	materialValue_ = materialValue;
	setCoreParameter("MaterialValue", std::to_string(materialValue));
}

bool DetectFaceAttributesRequest::getDontSaveDB()const
{
	return dontSaveDB_;
}

void DetectFaceAttributesRequest::setDontSaveDB(bool dontSaveDB)
{
	dontSaveDB_ = dontSaveDB;
	setCoreParameter("DontSaveDB", dontSaveDB ? "true" : "false");
}

std::string DetectFaceAttributesRequest::getClientTag()const
{
	return clientTag_;
}

void DetectFaceAttributesRequest::setClientTag(const std::string& clientTag)
{
	clientTag_ = clientTag;
	setCoreParameter("ClientTag", std::to_string(clientTag));
}

