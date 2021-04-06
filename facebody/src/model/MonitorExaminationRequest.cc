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

#include <alibabacloud/facebody/model/MonitorExaminationRequest.h>

using AlibabaCloud::Facebody::Model::MonitorExaminationRequest;

MonitorExaminationRequest::MonitorExaminationRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "MonitorExamination")
{
	setMethod(HttpRequest::Method::Post);
}

MonitorExaminationRequest::~MonitorExaminationRequest()
{}

long MonitorExaminationRequest::getType()const
{
	return type_;
}

void MonitorExaminationRequest::setType(long type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

std::string MonitorExaminationRequest::getImageURL()const
{
	return imageURL_;
}

void MonitorExaminationRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

