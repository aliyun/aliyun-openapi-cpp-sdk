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

#include <alibabacloud/facebody/model/BeautifyBodyRequest.h>

using AlibabaCloud::Facebody::Model::BeautifyBodyRequest;

BeautifyBodyRequest::BeautifyBodyRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "BeautifyBody")
{
	setMethod(HttpRequest::Method::Post);
}

BeautifyBodyRequest::~BeautifyBodyRequest()
{}

Array BeautifyBodyRequest::getBodyBoxes()const
{
	return bodyBoxes_;
}

void BeautifyBodyRequest::setBodyBoxes(const Array& bodyBoxes)
{
	bodyBoxes_ = bodyBoxes;
	setBodyParameter("BodyBoxes", std::to_string(bodyBoxes));
}

float BeautifyBodyRequest::getLengthenDegree()const
{
	return lengthenDegree_;
}

void BeautifyBodyRequest::setLengthenDegree(float lengthenDegree)
{
	lengthenDegree_ = lengthenDegree;
	setBodyParameter("LengthenDegree", std::to_string(lengthenDegree));
}

float BeautifyBodyRequest::getMaleLiquifyDegree()const
{
	return maleLiquifyDegree_;
}

void BeautifyBodyRequest::setMaleLiquifyDegree(float maleLiquifyDegree)
{
	maleLiquifyDegree_ = maleLiquifyDegree;
	setBodyParameter("MaleLiquifyDegree", std::to_string(maleLiquifyDegree));
}

long BeautifyBodyRequest::getOriginalWidth()const
{
	return originalWidth_;
}

void BeautifyBodyRequest::setOriginalWidth(long originalWidth)
{
	originalWidth_ = originalWidth;
	setBodyParameter("OriginalWidth", std::to_string(originalWidth));
}

Array BeautifyBodyRequest::getFaceList()const
{
	return faceList_;
}

void BeautifyBodyRequest::setFaceList(const Array& faceList)
{
	faceList_ = faceList;
	setBodyParameter("FaceList", std::to_string(faceList));
}

Struct BeautifyBodyRequest::getAgeRange()const
{
	return ageRange_;
}

void BeautifyBodyRequest::setAgeRange(const Struct& ageRange)
{
	ageRange_ = ageRange;
	setBodyParameter("AgeRange", std::to_string(ageRange));
}

long BeautifyBodyRequest::getCustom()const
{
	return custom_;
}

void BeautifyBodyRequest::setCustom(long custom)
{
	custom_ = custom;
	setBodyParameter("Custom", std::to_string(custom));
}

long BeautifyBodyRequest::getOriginalHeight()const
{
	return originalHeight_;
}

void BeautifyBodyRequest::setOriginalHeight(long originalHeight)
{
	originalHeight_ = originalHeight;
	setBodyParameter("OriginalHeight", std::to_string(originalHeight));
}

std::string BeautifyBodyRequest::getImageURL()const
{
	return imageURL_;
}

void BeautifyBodyRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

float BeautifyBodyRequest::getFemaleLiquifyDegree()const
{
	return femaleLiquifyDegree_;
}

void BeautifyBodyRequest::setFemaleLiquifyDegree(float femaleLiquifyDegree)
{
	femaleLiquifyDegree_ = femaleLiquifyDegree;
	setBodyParameter("FemaleLiquifyDegree", std::to_string(femaleLiquifyDegree));
}

Array BeautifyBodyRequest::getPoseList()const
{
	return poseList_;
}

void BeautifyBodyRequest::setPoseList(const Array& poseList)
{
	poseList_ = poseList;
	setBodyParameter("PoseList", std::to_string(poseList));
}

