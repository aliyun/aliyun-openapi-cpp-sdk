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

#include <alibabacloud/ivpd/model/RecolorImageRequest.h>

using AlibabaCloud::Ivpd::Model::RecolorImageRequest;

RecolorImageRequest::RecolorImageRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "RecolorImage")
{
	setMethod(HttpRequest::Method::Post);
}

RecolorImageRequest::~RecolorImageRequest()
{}

std::vector<RecolorImageRequest::ColorTemplate> RecolorImageRequest::getColorTemplate()const
{
	return colorTemplate_;
}

void RecolorImageRequest::setColorTemplate(const std::vector<ColorTemplate>& colorTemplate)
{
	colorTemplate_ = colorTemplate;
	for(int dep1 = 0; dep1!= colorTemplate.size(); dep1++) {
		auto colorTemplateObj = colorTemplate.at(dep1);
		std::string colorTemplateObjStr = "ColorTemplate." + std::to_string(dep1);
		setCoreParameter(colorTemplateObjStr + ".Color", colorTemplateObj.color);
	}
}

std::string RecolorImageRequest::getUrl()const
{
	return url_;
}

void RecolorImageRequest::setUrl(const std::string& url)
{
	url_ = url;
	setCoreParameter("Url", url);
}

std::string RecolorImageRequest::getMode()const
{
	return mode_;
}

void RecolorImageRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setCoreParameter("Mode", mode);
}

int RecolorImageRequest::getColorCount()const
{
	return colorCount_;
}

void RecolorImageRequest::setColorCount(int colorCount)
{
	colorCount_ = colorCount;
	setCoreParameter("ColorCount", std::to_string(colorCount));
}

std::string RecolorImageRequest::getRefUrl()const
{
	return refUrl_;
}

void RecolorImageRequest::setRefUrl(const std::string& refUrl)
{
	refUrl_ = refUrl;
	setCoreParameter("RefUrl", refUrl);
}

