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

#include <alibabacloud/objectdet/model/DetectWorkwearRequest.h>

using AlibabaCloud::Objectdet::Model::DetectWorkwearRequest;

DetectWorkwearRequest::DetectWorkwearRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectWorkwear")
{
	setMethod(HttpRequest::Method::Post);
}

DetectWorkwearRequest::~DetectWorkwearRequest()
{}

bool DetectWorkwearRequest::getFormatResultToJson()const
{
	return formatResultToJson_;
}

void DetectWorkwearRequest::setFormatResultToJson(bool formatResultToJson)
{
	formatResultToJson_ = formatResultToJson;
	setParameter("FormatResultToJson", formatResultToJson ? "true" : "false");
}

std::string DetectWorkwearRequest::getOssFile()const
{
	return ossFile_;
}

void DetectWorkwearRequest::setOssFile(const std::string& ossFile)
{
	ossFile_ = ossFile;
	setParameter("OssFile", ossFile);
}

std::string DetectWorkwearRequest::getRequestProxyBy()const
{
	return requestProxyBy_;
}

void DetectWorkwearRequest::setRequestProxyBy(const std::string& requestProxyBy)
{
	requestProxyBy_ = requestProxyBy;
	setParameter("RequestProxyBy", requestProxyBy);
}

Struct DetectWorkwearRequest::getClothes()const
{
	return clothes_;
}

void DetectWorkwearRequest::setClothes(const Struct& clothes)
{
	clothes_ = clothes;
	setBodyParameter("Clothes", std::to_string(clothes));
}

std::vector<std::string> DetectWorkwearRequest::getLabels()const
{
	return labels_;
}

void DetectWorkwearRequest::setLabels(const std::vector<std::string>& labels)
{
	labels_ = labels;
	for(int dep1 = 0; dep1!= labels.size(); dep1++) {
		setBodyParameter("Labels."+ std::to_string(dep1), labels.at(dep1));
	}
}

std::string DetectWorkwearRequest::getImageUrl()const
{
	return imageUrl_;
}

void DetectWorkwearRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

