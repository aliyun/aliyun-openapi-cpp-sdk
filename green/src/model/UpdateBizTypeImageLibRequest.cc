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

#include <alibabacloud/green/model/UpdateBizTypeImageLibRequest.h>

using AlibabaCloud::Green::Model::UpdateBizTypeImageLibRequest;

UpdateBizTypeImageLibRequest::UpdateBizTypeImageLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateBizTypeImageLib")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateBizTypeImageLibRequest::~UpdateBizTypeImageLibRequest()
{}

std::string UpdateBizTypeImageLibRequest::getScene()const
{
	return scene_;
}

void UpdateBizTypeImageLibRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string UpdateBizTypeImageLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateBizTypeImageLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateBizTypeImageLibRequest::getWhite()const
{
	return white_;
}

void UpdateBizTypeImageLibRequest::setWhite(const std::string& white)
{
	white_ = white;
	setParameter("White", white);
}

std::string UpdateBizTypeImageLibRequest::getReview()const
{
	return review_;
}

void UpdateBizTypeImageLibRequest::setReview(const std::string& review)
{
	review_ = review;
	setParameter("Review", review);
}

std::string UpdateBizTypeImageLibRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void UpdateBizTypeImageLibRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

std::string UpdateBizTypeImageLibRequest::getBlack()const
{
	return black_;
}

void UpdateBizTypeImageLibRequest::setBlack(const std::string& black)
{
	black_ = black;
	setParameter("Black", black);
}

std::string UpdateBizTypeImageLibRequest::getResourceType()const
{
	return resourceType_;
}

void UpdateBizTypeImageLibRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

