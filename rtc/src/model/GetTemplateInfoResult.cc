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

#include <alibabacloud/rtc/model/GetTemplateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

GetTemplateInfoResult::GetTemplateInfoResult() :
	ServiceResult()
{}

GetTemplateInfoResult::GetTemplateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTemplateInfoResult::~GetTemplateInfoResult()
{}

void GetTemplateInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto layOutNode = value["LayOut"];
	if(!layOutNode["Color"].isNull())
		layOut_.color = layOutNode["Color"].asString();
	if(!layOutNode["Cutmode"].isNull())
		layOut_.cutmode = std::stoi(layOutNode["Cutmode"].asString());
	if(!layOutNode["LayoutID"].isNull())
		layOut_.layoutID = std::stoi(layOutNode["LayoutID"].asString());
	auto recordConfigNode = value["RecordConfig"];
	if(!recordConfigNode["StorageType"].isNull())
		recordConfig_.storageType = recordConfigNode["StorageType"].asString();
	if(!recordConfigNode["FileFormat"].isNull())
		recordConfig_.fileFormat = std::stoi(recordConfigNode["FileFormat"].asString());
	if(!recordConfigNode["OssEndpoint"].isNull())
		recordConfig_.ossEndpoint = recordConfigNode["OssEndpoint"].asString();
	if(!recordConfigNode["OssBucket"].isNull())
		recordConfig_.ossBucket = recordConfigNode["OssBucket"].asString();
	if(!recordConfigNode["VodTranscodeGroupId"].isNull())
		recordConfig_.vodTranscodeGroupId = std::stoi(recordConfigNode["VodTranscodeGroupId"].asString());
	auto liveConfigNode = value["LiveConfig"];
	if(!liveConfigNode["DomainName"].isNull())
		liveConfig_.domainName = liveConfigNode["DomainName"].asString();
	if(!liveConfigNode["AppName"].isNull())
		liveConfig_.appName = liveConfigNode["AppName"].asString();
	if(!value["MixMode"].isNull())
		mixMode_ = std::stoi(value["MixMode"].asString());
	if(!value["ServiceMode"].isNull())
		serviceMode_ = std::stoi(value["ServiceMode"].asString());
	if(!value["CallBack"].isNull())
		callBack_ = value["CallBack"].asString();
	if(!value["MaxMixStreamCount"].isNull())
		maxMixStreamCount_ = std::stoi(value["MaxMixStreamCount"].asString());
	if(!value["MediaConfig"].isNull())
		mediaConfig_ = std::stoi(value["MediaConfig"].asString());

}

std::string GetTemplateInfoResult::getCallBack()const
{
	return callBack_;
}

int GetTemplateInfoResult::getMixMode()const
{
	return mixMode_;
}

GetTemplateInfoResult::LayOut GetTemplateInfoResult::getLayOut()const
{
	return layOut_;
}

int GetTemplateInfoResult::getMaxMixStreamCount()const
{
	return maxMixStreamCount_;
}

GetTemplateInfoResult::LiveConfig GetTemplateInfoResult::getLiveConfig()const
{
	return liveConfig_;
}

int GetTemplateInfoResult::getServiceMode()const
{
	return serviceMode_;
}

int GetTemplateInfoResult::getMediaConfig()const
{
	return mediaConfig_;
}

GetTemplateInfoResult::RecordConfig GetTemplateInfoResult::getRecordConfig()const
{
	return recordConfig_;
}

