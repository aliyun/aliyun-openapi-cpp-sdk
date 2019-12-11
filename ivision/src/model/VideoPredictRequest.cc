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

#include <alibabacloud/ivision/model/VideoPredictRequest.h>

using AlibabaCloud::Ivision::Model::VideoPredictRequest;

VideoPredictRequest::VideoPredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "VideoPredict")
{
	setMethod(HttpRequest::Method::Post);
}

VideoPredictRequest::~VideoPredictRequest()
{}

std::string VideoPredictRequest::getDataUrl()const
{
	return dataUrl_;
}

void VideoPredictRequest::setDataUrl(const std::string& dataUrl)
{
	dataUrl_ = dataUrl;
	setCoreParameter("DataUrl", dataUrl);
}

std::string VideoPredictRequest::getClientToken()const
{
	return clientToken_;
}

void VideoPredictRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string VideoPredictRequest::getNotify()const
{
	return notify_;
}

void VideoPredictRequest::setNotify(const std::string& notify)
{
	notify_ = notify;
	setCoreParameter("Notify", notify);
}

std::string VideoPredictRequest::getOutput()const
{
	return output_;
}

void VideoPredictRequest::setOutput(const std::string& output)
{
	output_ = output;
	setCoreParameter("Output", output);
}

std::string VideoPredictRequest::getShowLog()const
{
	return showLog_;
}

void VideoPredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string VideoPredictRequest::getModels()const
{
	return models_;
}

void VideoPredictRequest::setModels(const std::string& models)
{
	models_ = models;
	setCoreParameter("Models", models);
}

long VideoPredictRequest::getOwnerId()const
{
	return ownerId_;
}

void VideoPredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

