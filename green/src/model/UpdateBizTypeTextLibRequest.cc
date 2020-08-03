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

#include <alibabacloud/green/model/UpdateBizTypeTextLibRequest.h>

using AlibabaCloud::Green::Model::UpdateBizTypeTextLibRequest;

UpdateBizTypeTextLibRequest::UpdateBizTypeTextLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateBizTypeTextLib")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateBizTypeTextLibRequest::~UpdateBizTypeTextLibRequest()
{}

std::string UpdateBizTypeTextLibRequest::getScene()const
{
	return scene_;
}

void UpdateBizTypeTextLibRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string UpdateBizTypeTextLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateBizTypeTextLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateBizTypeTextLibRequest::getWhite()const
{
	return white_;
}

void UpdateBizTypeTextLibRequest::setWhite(const std::string& white)
{
	white_ = white;
	setParameter("White", white);
}

std::string UpdateBizTypeTextLibRequest::getReview()const
{
	return review_;
}

void UpdateBizTypeTextLibRequest::setReview(const std::string& review)
{
	review_ = review;
	setParameter("Review", review);
}

std::string UpdateBizTypeTextLibRequest::getIgnore()const
{
	return ignore_;
}

void UpdateBizTypeTextLibRequest::setIgnore(const std::string& ignore)
{
	ignore_ = ignore;
	setParameter("Ignore", ignore);
}

std::string UpdateBizTypeTextLibRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void UpdateBizTypeTextLibRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

std::string UpdateBizTypeTextLibRequest::getBlack()const
{
	return black_;
}

void UpdateBizTypeTextLibRequest::setBlack(const std::string& black)
{
	black_ = black;
	setParameter("Black", black);
}

std::string UpdateBizTypeTextLibRequest::getResourceType()const
{
	return resourceType_;
}

void UpdateBizTypeTextLibRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

