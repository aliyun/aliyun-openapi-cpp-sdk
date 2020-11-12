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

#include <alibabacloud/openanalytics-open/model/SubmitSparkJobRequest.h>

using AlibabaCloud::Openanalytics_open::Model::SubmitSparkJobRequest;

SubmitSparkJobRequest::SubmitSparkJobRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "SubmitSparkJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSparkJobRequest::~SubmitSparkJobRequest()
{}

std::string SubmitSparkJobRequest::getConfigJson()const
{
	return configJson_;
}

void SubmitSparkJobRequest::setConfigJson(const std::string& configJson)
{
	configJson_ = configJson;
	setBodyParameter("ConfigJson", configJson);
}

std::string SubmitSparkJobRequest::getVcName()const
{
	return vcName_;
}

void SubmitSparkJobRequest::setVcName(const std::string& vcName)
{
	vcName_ = vcName;
	setBodyParameter("VcName", vcName);
}

