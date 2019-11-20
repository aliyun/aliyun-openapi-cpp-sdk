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

#include <alibabacloud/rtc/model/CreateTemplateRequest.h>

using AlibabaCloud::Rtc::Model::CreateTemplateRequest;

CreateTemplateRequest::CreateTemplateRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTemplateRequest::~CreateTemplateRequest()
{}

int CreateTemplateRequest::getServiceMode()const
{
	return serviceMode_;
}

void CreateTemplateRequest::setServiceMode(int serviceMode)
{
	serviceMode_ = serviceMode;
	setCoreParameter("ServiceMode", std::to_string(serviceMode));
}

std::vector<CreateTemplateRequest::LiveConfig> CreateTemplateRequest::getLiveConfig()const
{
	return liveConfig_;
}

void CreateTemplateRequest::setLiveConfig(const std::vector<LiveConfig>& liveConfig)
{
	liveConfig_ = liveConfig;
	for(int dep1 = 0; dep1!= liveConfig.size(); dep1++) {
		auto liveConfigObj = liveConfig.at(dep1);
		std::string liveConfigObjStr = "LiveConfig." + std::to_string(dep1);
		setCoreParameter(liveConfigObjStr + ".DomainName", liveConfigObj.domainName);
		setCoreParameter(liveConfigObjStr + ".AppName", liveConfigObj.appName);
	}
}

int CreateTemplateRequest::getMediaConfig()const
{
	return mediaConfig_;
}

void CreateTemplateRequest::setMediaConfig(int mediaConfig)
{
	mediaConfig_ = mediaConfig;
	setCoreParameter("MediaConfig", std::to_string(mediaConfig));
}

int CreateTemplateRequest::getMaxMixStreamCount()const
{
	return maxMixStreamCount_;
}

void CreateTemplateRequest::setMaxMixStreamCount(int maxMixStreamCount)
{
	maxMixStreamCount_ = maxMixStreamCount;
	setCoreParameter("MaxMixStreamCount", std::to_string(maxMixStreamCount));
}

std::vector<CreateTemplateRequest::RecordConfig> CreateTemplateRequest::getRecordConfig()const
{
	return recordConfig_;
}

void CreateTemplateRequest::setRecordConfig(const std::vector<RecordConfig>& recordConfig)
{
	recordConfig_ = recordConfig;
	for(int dep1 = 0; dep1!= recordConfig.size(); dep1++) {
		auto recordConfigObj = recordConfig.at(dep1);
		std::string recordConfigObjStr = "RecordConfig." + std::to_string(dep1);
		setCoreParameter(recordConfigObjStr + ".StorageType", recordConfigObj.storageType);
		setCoreParameter(recordConfigObjStr + ".FileFormat", std::to_string(recordConfigObj.fileFormat));
		setCoreParameter(recordConfigObjStr + ".OssEndPoint", recordConfigObj.ossEndPoint);
		setCoreParameter(recordConfigObjStr + ".OssBucket", recordConfigObj.ossBucket);
		setCoreParameter(recordConfigObjStr + ".VodTransCodeGroupId", std::to_string(recordConfigObj.vodTransCodeGroupId));
	}
}

long CreateTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateTemplateRequest::LayOut> CreateTemplateRequest::getLayOut()const
{
	return layOut_;
}

void CreateTemplateRequest::setLayOut(const std::vector<LayOut>& layOut)
{
	layOut_ = layOut;
	for(int dep1 = 0; dep1!= layOut.size(); dep1++) {
		auto layOutObj = layOut.at(dep1);
		std::string layOutObjStr = "LayOut." + std::to_string(dep1);
		setCoreParameter(layOutObjStr + ".Color", layOutObj.color);
		setCoreParameter(layOutObjStr + ".CutMode", std::to_string(layOutObj.cutMode));
		setCoreParameter(layOutObjStr + ".LayOutId", std::to_string(layOutObj.layOutId));
	}
}

std::string CreateTemplateRequest::getAppId()const
{
	return appId_;
}

void CreateTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string CreateTemplateRequest::getCallBack()const
{
	return callBack_;
}

void CreateTemplateRequest::setCallBack(const std::string& callBack)
{
	callBack_ = callBack;
	setCoreParameter("CallBack", callBack);
}

int CreateTemplateRequest::getMixMode()const
{
	return mixMode_;
}

void CreateTemplateRequest::setMixMode(int mixMode)
{
	mixMode_ = mixMode;
	setCoreParameter("MixMode", std::to_string(mixMode));
}

