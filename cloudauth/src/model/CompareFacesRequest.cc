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

#include <alibabacloud/cloudauth/model/CompareFacesRequest.h>

using AlibabaCloud::Cloudauth::Model::CompareFacesRequest;

CompareFacesRequest::CompareFacesRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "CompareFaces")
{
	setMethod(HttpRequest::Method::Post);
}

CompareFacesRequest::~CompareFacesRequest()
{}

std::string CompareFacesRequest::getSourceImageType()const
{
	return sourceImageType_;
}

void CompareFacesRequest::setSourceImageType(const std::string& sourceImageType)
{
	sourceImageType_ = sourceImageType;
	setCoreParameter("SourceImageType", sourceImageType);
}

long CompareFacesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CompareFacesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CompareFacesRequest::getTargetImageType()const
{
	return targetImageType_;
}

void CompareFacesRequest::setTargetImageType(const std::string& targetImageType)
{
	targetImageType_ = targetImageType;
	setCoreParameter("TargetImageType", targetImageType);
}

std::string CompareFacesRequest::getTargetImageValue()const
{
	return targetImageValue_;
}

void CompareFacesRequest::setTargetImageValue(const std::string& targetImageValue)
{
	targetImageValue_ = targetImageValue;
	setCoreParameter("TargetImageValue", targetImageValue);
}

std::string CompareFacesRequest::getSourceIp()const
{
	return sourceIp_;
}

void CompareFacesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CompareFacesRequest::getSourceImageValue()const
{
	return sourceImageValue_;
}

void CompareFacesRequest::setSourceImageValue(const std::string& sourceImageValue)
{
	sourceImageValue_ = sourceImageValue;
	setCoreParameter("SourceImageValue", sourceImageValue);
}

