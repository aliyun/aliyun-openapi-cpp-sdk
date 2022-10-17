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

#include <alibabacloud/ocr/model/RecognizeQrCodeRequest.h>

using AlibabaCloud::Ocr::Model::RecognizeQrCodeRequest;

RecognizeQrCodeRequest::RecognizeQrCodeRequest() :
	RpcServiceRequest("ocr", "2019-12-30", "RecognizeQrCode")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeQrCodeRequest::~RecognizeQrCodeRequest()
{}

bool RecognizeQrCodeRequest::getFormatResultToJson()const
{
	return formatResultToJson_;
}

void RecognizeQrCodeRequest::setFormatResultToJson(bool formatResultToJson)
{
	formatResultToJson_ = formatResultToJson;
	setParameter("FormatResultToJson", formatResultToJson ? "true" : "false");
}

std::string RecognizeQrCodeRequest::getOssFile()const
{
	return ossFile_;
}

void RecognizeQrCodeRequest::setOssFile(const std::string& ossFile)
{
	ossFile_ = ossFile;
	setParameter("OssFile", ossFile);
}

std::vector<RecognizeQrCodeRequest::Tasks> RecognizeQrCodeRequest::getTasks()const
{
	return tasks_;
}

void RecognizeQrCodeRequest::setTasks(const std::vector<Tasks>& tasks)
{
	tasks_ = tasks;
	for(int dep1 = 0; dep1!= tasks.size(); dep1++) {
		auto tasksObj = tasks.at(dep1);
		std::string tasksObjStr = "Tasks." + std::to_string(dep1 + 1);
		setParameter(tasksObjStr + ".ImageURL", tasksObj.imageURL);
	}
}

std::string RecognizeQrCodeRequest::getRequestProxyBy()const
{
	return requestProxyBy_;
}

void RecognizeQrCodeRequest::setRequestProxyBy(const std::string& requestProxyBy)
{
	requestProxyBy_ = requestProxyBy;
	setParameter("RequestProxyBy", requestProxyBy);
}

