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

#include <alibabacloud/mts/model/QueryMCJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMCJobListResult::QueryMCJobListResult() :
	ServiceResult()
{}

QueryMCJobListResult::QueryMCJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMCJobListResult::~QueryMCJobListResult()
{}

void QueryMCJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJobList = value["JobList"]["Job"];
	for (auto value : allJobList)
	{
		Job jobListObject;
		if(!value["JobId"].isNull())
			jobListObject.jobId = value["JobId"].asString();
		if(!value["UserData"].isNull())
			jobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			jobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			jobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			jobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			jobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			jobListObject.creationTime = value["CreationTime"].asString();
		if(!value["ResultOutputFile"].isNull())
			jobListObject.resultOutputFile = value["ResultOutputFile"].asString();
		auto resultNode = value["Result"];
		if(!resultNode["Suggestion"].isNull())
			jobListObject.result.suggestion = resultNode["Suggestion"].asString();
		if(!resultNode["Score"].isNull())
			jobListObject.result.score = resultNode["Score"].asString();
		auto pornResultNode = resultNode["PornResult"];
		auto allPornVideos = value["PornVideos"]["PornVideo"];
		for (auto value : allPornVideos)
		{
			Job::Result::PornResult::PornVideo pornVideoObject;
			if(!value["Suggestion"].isNull())
				pornVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				pornVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				pornVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				pornVideoObject.object = value["Object"].asString();
			jobListObject.result.pornResult.pornVideos.push_back(pornVideoObject);
		}
		auto allPornAudios = value["PornAudios"]["PornAudio"];
		for (auto value : allPornAudios)
		{
			Job::Result::PornResult::PornAudio pornAudioObject;
			if(!value["Suggestion"].isNull())
				pornAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				pornAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				pornAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				pornAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				pornAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				pornAudioObject.object = value["Object"].asString();
			jobListObject.result.pornResult.pornAudios.push_back(pornAudioObject);
		}
		auto allPornTexts = value["PornTexts"]["PornText"];
		for (auto value : allPornTexts)
		{
			Job::Result::PornResult::PornText pornTextObject;
			if(!value["Suggestion"].isNull())
				pornTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				pornTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				pornTextObject.text = value["Text"].asString();
			jobListObject.result.pornResult.pornTexts.push_back(pornTextObject);
		}
		auto allPornImages = value["PornImages"]["PornImage"];
		for (auto value : allPornImages)
		{
			Job::Result::PornResult::PornImage pornImageObject;
			if(!value["Suggestion"].isNull())
				pornImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				pornImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				pornImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				pornImageObject.text = value["Text"].asString();
			jobListObject.result.pornResult.pornImages.push_back(pornImageObject);
		}
		auto allPornOcrs = value["PornOcrs"]["PornOcr"];
		for (auto value : allPornOcrs)
		{
			Job::Result::PornResult::PornOcr pornOcrObject;
			if(!value["Suggestion"].isNull())
				pornOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				pornOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				pornOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				pornOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				pornOcrObject.text = value["Text"].asString();
			jobListObject.result.pornResult.pornOcrs.push_back(pornOcrObject);
		}
		auto terrorismResultNode = resultNode["TerrorismResult"];
		auto allTerrorismVideos = value["TerrorismVideos"]["TerrorismVideo"];
		for (auto value : allTerrorismVideos)
		{
			Job::Result::TerrorismResult::TerrorismVideo terrorismVideoObject;
			if(!value["Suggestion"].isNull())
				terrorismVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				terrorismVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				terrorismVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				terrorismVideoObject.object = value["Object"].asString();
			jobListObject.result.terrorismResult.terrorismVideos.push_back(terrorismVideoObject);
		}
		auto allTerrorismAudios = value["TerrorismAudios"]["TerrorismAudio"];
		for (auto value : allTerrorismAudios)
		{
			Job::Result::TerrorismResult::TerrorismAudio terrorismAudioObject;
			if(!value["Suggestion"].isNull())
				terrorismAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				terrorismAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				terrorismAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				terrorismAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				terrorismAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				terrorismAudioObject.object = value["Object"].asString();
			jobListObject.result.terrorismResult.terrorismAudios.push_back(terrorismAudioObject);
		}
		auto allTerrorismTexts = value["TerrorismTexts"]["TerrorismText"];
		for (auto value : allTerrorismTexts)
		{
			Job::Result::TerrorismResult::TerrorismText terrorismTextObject;
			if(!value["Suggestion"].isNull())
				terrorismTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				terrorismTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				terrorismTextObject.text = value["Text"].asString();
			jobListObject.result.terrorismResult.terrorismTexts.push_back(terrorismTextObject);
		}
		auto allTerrorismImages = value["TerrorismImages"]["TerrorismImage"];
		for (auto value : allTerrorismImages)
		{
			Job::Result::TerrorismResult::TerrorismImage terrorismImageObject;
			if(!value["Suggestion"].isNull())
				terrorismImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				terrorismImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				terrorismImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				terrorismImageObject.text = value["Text"].asString();
			jobListObject.result.terrorismResult.terrorismImages.push_back(terrorismImageObject);
		}
		auto allTerrorismOcrs = value["TerrorismOcrs"]["TerrorismOcr"];
		for (auto value : allTerrorismOcrs)
		{
			Job::Result::TerrorismResult::TerrorismOcr terrorismOcrObject;
			if(!value["Suggestion"].isNull())
				terrorismOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				terrorismOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				terrorismOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				terrorismOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				terrorismOcrObject.text = value["Text"].asString();
			jobListObject.result.terrorismResult.terrorismOcrs.push_back(terrorismOcrObject);
		}
		auto politicsResultNode = resultNode["PoliticsResult"];
		auto allPoliticsVideos = value["PoliticsVideos"]["PoliticsVideo"];
		for (auto value : allPoliticsVideos)
		{
			Job::Result::PoliticsResult::PoliticsVideo politicsVideoObject;
			if(!value["Suggestion"].isNull())
				politicsVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				politicsVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				politicsVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				politicsVideoObject.object = value["Object"].asString();
			jobListObject.result.politicsResult.politicsVideos.push_back(politicsVideoObject);
		}
		auto allPoliticsAudios = value["PoliticsAudios"]["PoliticsAudio"];
		for (auto value : allPoliticsAudios)
		{
			Job::Result::PoliticsResult::PoliticsAudio politicsAudioObject;
			if(!value["Suggestion"].isNull())
				politicsAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				politicsAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				politicsAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				politicsAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				politicsAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				politicsAudioObject.object = value["Object"].asString();
			jobListObject.result.politicsResult.politicsAudios.push_back(politicsAudioObject);
		}
		auto allPoliticsTexts = value["PoliticsTexts"]["PoliticsText"];
		for (auto value : allPoliticsTexts)
		{
			Job::Result::PoliticsResult::PoliticsText politicsTextObject;
			if(!value["Suggestion"].isNull())
				politicsTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				politicsTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				politicsTextObject.text = value["Text"].asString();
			jobListObject.result.politicsResult.politicsTexts.push_back(politicsTextObject);
		}
		auto allPoliticsImages = value["PoliticsImages"]["PoliticsImage"];
		for (auto value : allPoliticsImages)
		{
			Job::Result::PoliticsResult::PoliticsImage politicsImageObject;
			if(!value["Suggestion"].isNull())
				politicsImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				politicsImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				politicsImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				politicsImageObject.text = value["Text"].asString();
			jobListObject.result.politicsResult.politicsImages.push_back(politicsImageObject);
		}
		auto allPoliticsOcrs = value["PoliticsOcrs"]["PoliticsOcr"];
		for (auto value : allPoliticsOcrs)
		{
			Job::Result::PoliticsResult::PoliticsOcr politicsOcrObject;
			if(!value["Suggestion"].isNull())
				politicsOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				politicsOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				politicsOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				politicsOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				politicsOcrObject.text = value["Text"].asString();
			jobListObject.result.politicsResult.politicsOcrs.push_back(politicsOcrObject);
		}
		auto adResultNode = resultNode["AdResult"];
		auto allAdVideos = value["AdVideos"]["AdVideo"];
		for (auto value : allAdVideos)
		{
			Job::Result::AdResult::AdVideo adVideoObject;
			if(!value["Suggestion"].isNull())
				adVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				adVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				adVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				adVideoObject.object = value["Object"].asString();
			jobListObject.result.adResult.adVideos.push_back(adVideoObject);
		}
		auto allAdAudios = value["AdAudios"]["AdAudio"];
		for (auto value : allAdAudios)
		{
			Job::Result::AdResult::AdAudio adAudioObject;
			if(!value["Suggestion"].isNull())
				adAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				adAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				adAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				adAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				adAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				adAudioObject.object = value["Object"].asString();
			jobListObject.result.adResult.adAudios.push_back(adAudioObject);
		}
		auto allAdTexts = value["AdTexts"]["AdText"];
		for (auto value : allAdTexts)
		{
			Job::Result::AdResult::AdText adTextObject;
			if(!value["Suggestion"].isNull())
				adTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				adTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				adTextObject.text = value["Text"].asString();
			jobListObject.result.adResult.adTexts.push_back(adTextObject);
		}
		auto allAdImages = value["AdImages"]["AdImage"];
		for (auto value : allAdImages)
		{
			Job::Result::AdResult::AdImage adImageObject;
			if(!value["Suggestion"].isNull())
				adImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				adImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				adImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				adImageObject.text = value["Text"].asString();
			jobListObject.result.adResult.adImages.push_back(adImageObject);
		}
		auto allAdOcrs = value["AdOcrs"]["AdOcr"];
		for (auto value : allAdOcrs)
		{
			Job::Result::AdResult::AdOcr adOcrObject;
			if(!value["Suggestion"].isNull())
				adOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				adOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				adOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				adOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				adOcrObject.text = value["Text"].asString();
			jobListObject.result.adResult.adOcrs.push_back(adOcrObject);
		}
		auto qrcodeResultNode = resultNode["QrcodeResult"];
		auto allQrcodeVideos = value["QrcodeVideos"]["QrcodeVideo"];
		for (auto value : allQrcodeVideos)
		{
			Job::Result::QrcodeResult::QrcodeVideo qrcodeVideoObject;
			if(!value["Suggestion"].isNull())
				qrcodeVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				qrcodeVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				qrcodeVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				qrcodeVideoObject.object = value["Object"].asString();
			jobListObject.result.qrcodeResult.qrcodeVideos.push_back(qrcodeVideoObject);
		}
		auto allQrcodeImages = value["QrcodeImages"]["QrcodeImage"];
		for (auto value : allQrcodeImages)
		{
			Job::Result::QrcodeResult::QrcodeImage qrcodeImageObject;
			if(!value["Suggestion"].isNull())
				qrcodeImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				qrcodeImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				qrcodeImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				qrcodeImageObject.text = value["Text"].asString();
			jobListObject.result.qrcodeResult.qrcodeImages.push_back(qrcodeImageObject);
		}
		auto liveResultNode = resultNode["LiveResult"];
		auto allLiveVideos = value["LiveVideos"]["LiveVideo"];
		for (auto value : allLiveVideos)
		{
			Job::Result::LiveResult::LiveVideo liveVideoObject;
			if(!value["Suggestion"].isNull())
				liveVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				liveVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				liveVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				liveVideoObject.object = value["Object"].asString();
			jobListObject.result.liveResult.liveVideos.push_back(liveVideoObject);
		}
		auto allLiveImages = value["LiveImages"]["LiveImage"];
		for (auto value : allLiveImages)
		{
			Job::Result::LiveResult::LiveImage liveImageObject;
			if(!value["Suggestion"].isNull())
				liveImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				liveImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				liveImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				liveImageObject.text = value["Text"].asString();
			jobListObject.result.liveResult.liveImages.push_back(liveImageObject);
		}
		auto logoResultNode = resultNode["LogoResult"];
		auto allLogoVideos = value["LogoVideos"]["LogoVideo"];
		for (auto value : allLogoVideos)
		{
			Job::Result::LogoResult::LogoVideo logoVideoObject;
			if(!value["Suggestion"].isNull())
				logoVideoObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				logoVideoObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				logoVideoObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				logoVideoObject.object = value["Object"].asString();
			jobListObject.result.logoResult.logoVideos.push_back(logoVideoObject);
		}
		auto allLogoImages = value["LogoImages"]["LogoImage"];
		for (auto value : allLogoImages)
		{
			Job::Result::LogoResult::LogoImage logoImageObject;
			if(!value["Suggestion"].isNull())
				logoImageObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				logoImageObject.score = value["Score"].asString();
			if(!value["Url"].isNull())
				logoImageObject.url = value["Url"].asString();
			if(!value["Text"].isNull())
				logoImageObject.text = value["Text"].asString();
			jobListObject.result.logoResult.logoImages.push_back(logoImageObject);
		}
		auto abuseResultNode = resultNode["AbuseResult"];
		auto allAbuseAudios = value["AbuseAudios"]["AbuseAudio"];
		for (auto value : allAbuseAudios)
		{
			Job::Result::AbuseResult::AbuseAudio abuseAudioObject;
			if(!value["Suggestion"].isNull())
				abuseAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				abuseAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				abuseAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				abuseAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				abuseAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				abuseAudioObject.object = value["Object"].asString();
			jobListObject.result.abuseResult.abuseAudios.push_back(abuseAudioObject);
		}
		auto allAbuseTexts = value["AbuseTexts"]["AbuseText"];
		for (auto value : allAbuseTexts)
		{
			Job::Result::AbuseResult::AbuseText abuseTextObject;
			if(!value["Suggestion"].isNull())
				abuseTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				abuseTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				abuseTextObject.text = value["Text"].asString();
			jobListObject.result.abuseResult.abuseTexts.push_back(abuseTextObject);
		}
		auto allAbuseOcrs = value["AbuseOcrs"]["AbuseOcr"];
		for (auto value : allAbuseOcrs)
		{
			Job::Result::AbuseResult::AbuseOcr abuseOcrObject;
			if(!value["Suggestion"].isNull())
				abuseOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				abuseOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				abuseOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				abuseOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				abuseOcrObject.text = value["Text"].asString();
			jobListObject.result.abuseResult.abuseOcrs.push_back(abuseOcrObject);
		}
		auto contrabandResultNode = resultNode["ContrabandResult"];
		auto allContrabandAudios = value["ContrabandAudios"]["ContrabandAudio"];
		for (auto value : allContrabandAudios)
		{
			Job::Result::ContrabandResult::ContrabandAudio contrabandAudioObject;
			if(!value["Suggestion"].isNull())
				contrabandAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				contrabandAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				contrabandAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				contrabandAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				contrabandAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				contrabandAudioObject.object = value["Object"].asString();
			jobListObject.result.contrabandResult.contrabandAudios.push_back(contrabandAudioObject);
		}
		auto allContrabandTexts = value["ContrabandTexts"]["ContrabandText"];
		for (auto value : allContrabandTexts)
		{
			Job::Result::ContrabandResult::ContrabandText contrabandTextObject;
			if(!value["Suggestion"].isNull())
				contrabandTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				contrabandTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				contrabandTextObject.text = value["Text"].asString();
			jobListObject.result.contrabandResult.contrabandTexts.push_back(contrabandTextObject);
		}
		auto allContrabandOcrs = value["ContrabandOcrs"]["ContrabandOcr"];
		for (auto value : allContrabandOcrs)
		{
			Job::Result::ContrabandResult::ContrabandOcr contrabandOcrObject;
			if(!value["Suggestion"].isNull())
				contrabandOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				contrabandOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				contrabandOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				contrabandOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				contrabandOcrObject.text = value["Text"].asString();
			jobListObject.result.contrabandResult.contrabandOcrs.push_back(contrabandOcrObject);
		}
		auto spamResultNode = resultNode["SpamResult"];
		auto allSpamAudios = value["SpamAudios"]["SpamAudio"];
		for (auto value : allSpamAudios)
		{
			Job::Result::SpamResult::SpamAudio spamAudioObject;
			if(!value["Suggestion"].isNull())
				spamAudioObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				spamAudioObject.score = value["Score"].asString();
			if(!value["StartTime"].isNull())
				spamAudioObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				spamAudioObject.endTime = value["EndTime"].asString();
			if(!value["Text"].isNull())
				spamAudioObject.text = value["Text"].asString();
			if(!value["Object"].isNull())
				spamAudioObject.object = value["Object"].asString();
			jobListObject.result.spamResult.spamAudios.push_back(spamAudioObject);
		}
		auto allSpamTexts = value["SpamTexts"]["SpamText"];
		for (auto value : allSpamTexts)
		{
			Job::Result::SpamResult::SpamText spamTextObject;
			if(!value["Suggestion"].isNull())
				spamTextObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				spamTextObject.score = value["Score"].asString();
			if(!value["Text"].isNull())
				spamTextObject.text = value["Text"].asString();
			jobListObject.result.spamResult.spamTexts.push_back(spamTextObject);
		}
		auto allSpamOcrs = value["SpamOcrs"]["SpamOcr"];
		for (auto value : allSpamOcrs)
		{
			Job::Result::SpamResult::SpamOcr spamOcrObject;
			if(!value["Suggestion"].isNull())
				spamOcrObject.suggestion = value["Suggestion"].asString();
			if(!value["Score"].isNull())
				spamOcrObject.score = value["Score"].asString();
			if(!value["Time"].isNull())
				spamOcrObject.time = value["Time"].asString();
			if(!value["Object"].isNull())
				spamOcrObject.object = value["Object"].asString();
			if(!value["Text"].isNull())
				spamOcrObject.text = value["Text"].asString();
			jobListObject.result.spamResult.spamOcrs.push_back(spamOcrObject);
		}
		jobList_.push_back(jobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string QueryMCJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<QueryMCJobListResult::Job> QueryMCJobListResult::getJobList()const
{
	return jobList_;
}

std::vector<std::string> QueryMCJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

