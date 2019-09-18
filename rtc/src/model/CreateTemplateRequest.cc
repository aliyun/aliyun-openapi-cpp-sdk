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
{}

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
	int i = 0;
	for(int i = 0; i!= liveConfig.size(); i++)	{
		auto obj = liveConfig.at(i);
		std::string str ="LiveConfig."+ std::to_string(i);
		setCoreParameter(str + ".DomainName", obj.domainName);
		setCoreParameter(str + ".AppName", obj.appName);
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
	int i = 0;
	for(int i = 0; i!= recordConfig.size(); i++)	{
		auto obj = recordConfig.at(i);
		std::string str ="RecordConfig."+ std::to_string(i);
		setCoreParameter(str + ".StorageType", obj.storageType);
		setCoreParameter(str + ".FileFormat", std::to_string(obj.fileFormat));
		setCoreParameter(str + ".OssEndPoint", obj.ossEndPoint);
		setCoreParameter(str + ".OssBucket", obj.ossBucket);
		setCoreParameter(str + ".VodTransCodeGroupId", std::to_string(obj.vodTransCodeGroupId));
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
	int i = 0;
	for(int i = 0; i!= layOut.size(); i++)	{
		auto obj = layOut.at(i);
		std::string str ="LayOut."+ std::to_string(i);
		setCoreParameter(str + ".Color", obj.color);
		setCoreParameter(str + ".CutMode", std::to_string(obj.cutMode));
		setCoreParameter(str + ".LayOutId", std::to_string(obj.layOutId));
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

