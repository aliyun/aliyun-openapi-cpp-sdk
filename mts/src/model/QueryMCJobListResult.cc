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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListJob["CreationTime"].asString();
		if(!valueJobListJob["ResultOutputFile"].isNull())
			jobListObject.resultOutputFile = valueJobListJob["ResultOutputFile"].asString();
		if(!valueJobListJob["State"].isNull())
			jobListObject.state = valueJobListJob["State"].asString();
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["UserData"].isNull())
			jobListObject.userData = valueJobListJob["UserData"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		auto resultNode = value["Result"];
		if(!resultNode["Suggestion"].isNull())
			jobListObject.result.suggestion = resultNode["Suggestion"].asString();
		if(!resultNode["Score"].isNull())
			jobListObject.result.score = resultNode["Score"].asString();
		auto pornResultNode = resultNode["PornResult"];
		auto allPornTextsNode = pornResultNode["PornTexts"]["PornText"];
		for (auto pornResultNodePornTextsPornText : allPornTextsNode)
		{
			Job::Result::PornResult::PornText pornTextObject;
			if(!pornResultNodePornTextsPornText["Suggestion"].isNull())
				pornTextObject.suggestion = pornResultNodePornTextsPornText["Suggestion"].asString();
			if(!pornResultNodePornTextsPornText["Score"].isNull())
				pornTextObject.score = pornResultNodePornTextsPornText["Score"].asString();
			if(!pornResultNodePornTextsPornText["Text"].isNull())
				pornTextObject.text = pornResultNodePornTextsPornText["Text"].asString();
			jobListObject.result.pornResult.pornTexts.push_back(pornTextObject);
		}
		auto allPornVideosNode = pornResultNode["PornVideos"]["PornVideo"];
		for (auto pornResultNodePornVideosPornVideo : allPornVideosNode)
		{
			Job::Result::PornResult::PornVideo pornVideoObject;
			if(!pornResultNodePornVideosPornVideo["Time"].isNull())
				pornVideoObject.time = pornResultNodePornVideosPornVideo["Time"].asString();
			if(!pornResultNodePornVideosPornVideo["Suggestion"].isNull())
				pornVideoObject.suggestion = pornResultNodePornVideosPornVideo["Suggestion"].asString();
			if(!pornResultNodePornVideosPornVideo["Score"].isNull())
				pornVideoObject.score = pornResultNodePornVideosPornVideo["Score"].asString();
			if(!pornResultNodePornVideosPornVideo["Object"].isNull())
				pornVideoObject.object = pornResultNodePornVideosPornVideo["Object"].asString();
			jobListObject.result.pornResult.pornVideos.push_back(pornVideoObject);
		}
		auto allPornAudiosNode = pornResultNode["PornAudios"]["PornAudio"];
		for (auto pornResultNodePornAudiosPornAudio : allPornAudiosNode)
		{
			Job::Result::PornResult::PornAudio pornAudioObject;
			if(!pornResultNodePornAudiosPornAudio["EndTime"].isNull())
				pornAudioObject.endTime = pornResultNodePornAudiosPornAudio["EndTime"].asString();
			if(!pornResultNodePornAudiosPornAudio["StartTime"].isNull())
				pornAudioObject.startTime = pornResultNodePornAudiosPornAudio["StartTime"].asString();
			if(!pornResultNodePornAudiosPornAudio["Suggestion"].isNull())
				pornAudioObject.suggestion = pornResultNodePornAudiosPornAudio["Suggestion"].asString();
			if(!pornResultNodePornAudiosPornAudio["Score"].isNull())
				pornAudioObject.score = pornResultNodePornAudiosPornAudio["Score"].asString();
			if(!pornResultNodePornAudiosPornAudio["Text"].isNull())
				pornAudioObject.text = pornResultNodePornAudiosPornAudio["Text"].asString();
			if(!pornResultNodePornAudiosPornAudio["Object"].isNull())
				pornAudioObject.object = pornResultNodePornAudiosPornAudio["Object"].asString();
			jobListObject.result.pornResult.pornAudios.push_back(pornAudioObject);
		}
		auto allPornImagesNode = pornResultNode["PornImages"]["PornImage"];
		for (auto pornResultNodePornImagesPornImage : allPornImagesNode)
		{
			Job::Result::PornResult::PornImage pornImageObject;
			if(!pornResultNodePornImagesPornImage["Suggestion"].isNull())
				pornImageObject.suggestion = pornResultNodePornImagesPornImage["Suggestion"].asString();
			if(!pornResultNodePornImagesPornImage["Score"].isNull())
				pornImageObject.score = pornResultNodePornImagesPornImage["Score"].asString();
			if(!pornResultNodePornImagesPornImage["Url"].isNull())
				pornImageObject.url = pornResultNodePornImagesPornImage["Url"].asString();
			if(!pornResultNodePornImagesPornImage["Text"].isNull())
				pornImageObject.text = pornResultNodePornImagesPornImage["Text"].asString();
			jobListObject.result.pornResult.pornImages.push_back(pornImageObject);
		}
		auto allPornOcrsNode = pornResultNode["PornOcrs"]["PornOcr"];
		for (auto pornResultNodePornOcrsPornOcr : allPornOcrsNode)
		{
			Job::Result::PornResult::PornOcr pornOcrObject;
			if(!pornResultNodePornOcrsPornOcr["Time"].isNull())
				pornOcrObject.time = pornResultNodePornOcrsPornOcr["Time"].asString();
			if(!pornResultNodePornOcrsPornOcr["Suggestion"].isNull())
				pornOcrObject.suggestion = pornResultNodePornOcrsPornOcr["Suggestion"].asString();
			if(!pornResultNodePornOcrsPornOcr["Score"].isNull())
				pornOcrObject.score = pornResultNodePornOcrsPornOcr["Score"].asString();
			if(!pornResultNodePornOcrsPornOcr["Text"].isNull())
				pornOcrObject.text = pornResultNodePornOcrsPornOcr["Text"].asString();
			if(!pornResultNodePornOcrsPornOcr["Object"].isNull())
				pornOcrObject.object = pornResultNodePornOcrsPornOcr["Object"].asString();
			jobListObject.result.pornResult.pornOcrs.push_back(pornOcrObject);
		}
		auto adResultNode = resultNode["AdResult"];
		auto allAdOcrsNode = adResultNode["AdOcrs"]["AdOcr"];
		for (auto adResultNodeAdOcrsAdOcr : allAdOcrsNode)
		{
			Job::Result::AdResult::AdOcr adOcrObject;
			if(!adResultNodeAdOcrsAdOcr["Time"].isNull())
				adOcrObject.time = adResultNodeAdOcrsAdOcr["Time"].asString();
			if(!adResultNodeAdOcrsAdOcr["Suggestion"].isNull())
				adOcrObject.suggestion = adResultNodeAdOcrsAdOcr["Suggestion"].asString();
			if(!adResultNodeAdOcrsAdOcr["Score"].isNull())
				adOcrObject.score = adResultNodeAdOcrsAdOcr["Score"].asString();
			if(!adResultNodeAdOcrsAdOcr["Text"].isNull())
				adOcrObject.text = adResultNodeAdOcrsAdOcr["Text"].asString();
			if(!adResultNodeAdOcrsAdOcr["Object"].isNull())
				adOcrObject.object = adResultNodeAdOcrsAdOcr["Object"].asString();
			jobListObject.result.adResult.adOcrs.push_back(adOcrObject);
		}
		auto allAdTextsNode = adResultNode["AdTexts"]["AdText"];
		for (auto adResultNodeAdTextsAdText : allAdTextsNode)
		{
			Job::Result::AdResult::AdText adTextObject;
			if(!adResultNodeAdTextsAdText["Suggestion"].isNull())
				adTextObject.suggestion = adResultNodeAdTextsAdText["Suggestion"].asString();
			if(!adResultNodeAdTextsAdText["Score"].isNull())
				adTextObject.score = adResultNodeAdTextsAdText["Score"].asString();
			if(!adResultNodeAdTextsAdText["Text"].isNull())
				adTextObject.text = adResultNodeAdTextsAdText["Text"].asString();
			jobListObject.result.adResult.adTexts.push_back(adTextObject);
		}
		auto allAdImagesNode = adResultNode["AdImages"]["AdImage"];
		for (auto adResultNodeAdImagesAdImage : allAdImagesNode)
		{
			Job::Result::AdResult::AdImage adImageObject;
			if(!adResultNodeAdImagesAdImage["Suggestion"].isNull())
				adImageObject.suggestion = adResultNodeAdImagesAdImage["Suggestion"].asString();
			if(!adResultNodeAdImagesAdImage["Score"].isNull())
				adImageObject.score = adResultNodeAdImagesAdImage["Score"].asString();
			if(!adResultNodeAdImagesAdImage["Url"].isNull())
				adImageObject.url = adResultNodeAdImagesAdImage["Url"].asString();
			if(!adResultNodeAdImagesAdImage["Text"].isNull())
				adImageObject.text = adResultNodeAdImagesAdImage["Text"].asString();
			jobListObject.result.adResult.adImages.push_back(adImageObject);
		}
		auto allAdAudiosNode = adResultNode["AdAudios"]["AdAudio"];
		for (auto adResultNodeAdAudiosAdAudio : allAdAudiosNode)
		{
			Job::Result::AdResult::AdAudio adAudioObject;
			if(!adResultNodeAdAudiosAdAudio["EndTime"].isNull())
				adAudioObject.endTime = adResultNodeAdAudiosAdAudio["EndTime"].asString();
			if(!adResultNodeAdAudiosAdAudio["StartTime"].isNull())
				adAudioObject.startTime = adResultNodeAdAudiosAdAudio["StartTime"].asString();
			if(!adResultNodeAdAudiosAdAudio["Suggestion"].isNull())
				adAudioObject.suggestion = adResultNodeAdAudiosAdAudio["Suggestion"].asString();
			if(!adResultNodeAdAudiosAdAudio["Score"].isNull())
				adAudioObject.score = adResultNodeAdAudiosAdAudio["Score"].asString();
			if(!adResultNodeAdAudiosAdAudio["Text"].isNull())
				adAudioObject.text = adResultNodeAdAudiosAdAudio["Text"].asString();
			if(!adResultNodeAdAudiosAdAudio["Object"].isNull())
				adAudioObject.object = adResultNodeAdAudiosAdAudio["Object"].asString();
			jobListObject.result.adResult.adAudios.push_back(adAudioObject);
		}
		auto allAdVideosNode = adResultNode["AdVideos"]["AdVideo"];
		for (auto adResultNodeAdVideosAdVideo : allAdVideosNode)
		{
			Job::Result::AdResult::AdVideo adVideoObject;
			if(!adResultNodeAdVideosAdVideo["Time"].isNull())
				adVideoObject.time = adResultNodeAdVideosAdVideo["Time"].asString();
			if(!adResultNodeAdVideosAdVideo["Suggestion"].isNull())
				adVideoObject.suggestion = adResultNodeAdVideosAdVideo["Suggestion"].asString();
			if(!adResultNodeAdVideosAdVideo["Score"].isNull())
				adVideoObject.score = adResultNodeAdVideosAdVideo["Score"].asString();
			if(!adResultNodeAdVideosAdVideo["Object"].isNull())
				adVideoObject.object = adResultNodeAdVideosAdVideo["Object"].asString();
			jobListObject.result.adResult.adVideos.push_back(adVideoObject);
		}
		auto logoResultNode = resultNode["LogoResult"];
		auto allLogoImagesNode = logoResultNode["LogoImages"]["LogoImage"];
		for (auto logoResultNodeLogoImagesLogoImage : allLogoImagesNode)
		{
			Job::Result::LogoResult::LogoImage logoImageObject;
			if(!logoResultNodeLogoImagesLogoImage["Suggestion"].isNull())
				logoImageObject.suggestion = logoResultNodeLogoImagesLogoImage["Suggestion"].asString();
			if(!logoResultNodeLogoImagesLogoImage["Score"].isNull())
				logoImageObject.score = logoResultNodeLogoImagesLogoImage["Score"].asString();
			if(!logoResultNodeLogoImagesLogoImage["Url"].isNull())
				logoImageObject.url = logoResultNodeLogoImagesLogoImage["Url"].asString();
			if(!logoResultNodeLogoImagesLogoImage["Text"].isNull())
				logoImageObject.text = logoResultNodeLogoImagesLogoImage["Text"].asString();
			jobListObject.result.logoResult.logoImages.push_back(logoImageObject);
		}
		auto allLogoVideosNode = logoResultNode["LogoVideos"]["LogoVideo"];
		for (auto logoResultNodeLogoVideosLogoVideo : allLogoVideosNode)
		{
			Job::Result::LogoResult::LogoVideo logoVideoObject;
			if(!logoResultNodeLogoVideosLogoVideo["Time"].isNull())
				logoVideoObject.time = logoResultNodeLogoVideosLogoVideo["Time"].asString();
			if(!logoResultNodeLogoVideosLogoVideo["Suggestion"].isNull())
				logoVideoObject.suggestion = logoResultNodeLogoVideosLogoVideo["Suggestion"].asString();
			if(!logoResultNodeLogoVideosLogoVideo["Score"].isNull())
				logoVideoObject.score = logoResultNodeLogoVideosLogoVideo["Score"].asString();
			if(!logoResultNodeLogoVideosLogoVideo["Object"].isNull())
				logoVideoObject.object = logoResultNodeLogoVideosLogoVideo["Object"].asString();
			jobListObject.result.logoResult.logoVideos.push_back(logoVideoObject);
		}
		auto qrcodeResultNode = resultNode["QrcodeResult"];
		auto allQrcodeImagesNode = qrcodeResultNode["QrcodeImages"]["QrcodeImage"];
		for (auto qrcodeResultNodeQrcodeImagesQrcodeImage : allQrcodeImagesNode)
		{
			Job::Result::QrcodeResult::QrcodeImage qrcodeImageObject;
			if(!qrcodeResultNodeQrcodeImagesQrcodeImage["Suggestion"].isNull())
				qrcodeImageObject.suggestion = qrcodeResultNodeQrcodeImagesQrcodeImage["Suggestion"].asString();
			if(!qrcodeResultNodeQrcodeImagesQrcodeImage["Score"].isNull())
				qrcodeImageObject.score = qrcodeResultNodeQrcodeImagesQrcodeImage["Score"].asString();
			if(!qrcodeResultNodeQrcodeImagesQrcodeImage["Url"].isNull())
				qrcodeImageObject.url = qrcodeResultNodeQrcodeImagesQrcodeImage["Url"].asString();
			if(!qrcodeResultNodeQrcodeImagesQrcodeImage["Text"].isNull())
				qrcodeImageObject.text = qrcodeResultNodeQrcodeImagesQrcodeImage["Text"].asString();
			jobListObject.result.qrcodeResult.qrcodeImages.push_back(qrcodeImageObject);
		}
		auto allQrcodeVideosNode = qrcodeResultNode["QrcodeVideos"]["QrcodeVideo"];
		for (auto qrcodeResultNodeQrcodeVideosQrcodeVideo : allQrcodeVideosNode)
		{
			Job::Result::QrcodeResult::QrcodeVideo qrcodeVideoObject;
			if(!qrcodeResultNodeQrcodeVideosQrcodeVideo["Time"].isNull())
				qrcodeVideoObject.time = qrcodeResultNodeQrcodeVideosQrcodeVideo["Time"].asString();
			if(!qrcodeResultNodeQrcodeVideosQrcodeVideo["Suggestion"].isNull())
				qrcodeVideoObject.suggestion = qrcodeResultNodeQrcodeVideosQrcodeVideo["Suggestion"].asString();
			if(!qrcodeResultNodeQrcodeVideosQrcodeVideo["Score"].isNull())
				qrcodeVideoObject.score = qrcodeResultNodeQrcodeVideosQrcodeVideo["Score"].asString();
			if(!qrcodeResultNodeQrcodeVideosQrcodeVideo["Object"].isNull())
				qrcodeVideoObject.object = qrcodeResultNodeQrcodeVideosQrcodeVideo["Object"].asString();
			jobListObject.result.qrcodeResult.qrcodeVideos.push_back(qrcodeVideoObject);
		}
		auto politicsResultNode = resultNode["PoliticsResult"];
		auto allPoliticsOcrsNode = politicsResultNode["PoliticsOcrs"]["PoliticsOcr"];
		for (auto politicsResultNodePoliticsOcrsPoliticsOcr : allPoliticsOcrsNode)
		{
			Job::Result::PoliticsResult::PoliticsOcr politicsOcrObject;
			if(!politicsResultNodePoliticsOcrsPoliticsOcr["Time"].isNull())
				politicsOcrObject.time = politicsResultNodePoliticsOcrsPoliticsOcr["Time"].asString();
			if(!politicsResultNodePoliticsOcrsPoliticsOcr["Suggestion"].isNull())
				politicsOcrObject.suggestion = politicsResultNodePoliticsOcrsPoliticsOcr["Suggestion"].asString();
			if(!politicsResultNodePoliticsOcrsPoliticsOcr["Score"].isNull())
				politicsOcrObject.score = politicsResultNodePoliticsOcrsPoliticsOcr["Score"].asString();
			if(!politicsResultNodePoliticsOcrsPoliticsOcr["Text"].isNull())
				politicsOcrObject.text = politicsResultNodePoliticsOcrsPoliticsOcr["Text"].asString();
			if(!politicsResultNodePoliticsOcrsPoliticsOcr["Object"].isNull())
				politicsOcrObject.object = politicsResultNodePoliticsOcrsPoliticsOcr["Object"].asString();
			jobListObject.result.politicsResult.politicsOcrs.push_back(politicsOcrObject);
		}
		auto allPoliticsVideosNode = politicsResultNode["PoliticsVideos"]["PoliticsVideo"];
		for (auto politicsResultNodePoliticsVideosPoliticsVideo : allPoliticsVideosNode)
		{
			Job::Result::PoliticsResult::PoliticsVideo politicsVideoObject;
			if(!politicsResultNodePoliticsVideosPoliticsVideo["Time"].isNull())
				politicsVideoObject.time = politicsResultNodePoliticsVideosPoliticsVideo["Time"].asString();
			if(!politicsResultNodePoliticsVideosPoliticsVideo["Suggestion"].isNull())
				politicsVideoObject.suggestion = politicsResultNodePoliticsVideosPoliticsVideo["Suggestion"].asString();
			if(!politicsResultNodePoliticsVideosPoliticsVideo["Score"].isNull())
				politicsVideoObject.score = politicsResultNodePoliticsVideosPoliticsVideo["Score"].asString();
			if(!politicsResultNodePoliticsVideosPoliticsVideo["Object"].isNull())
				politicsVideoObject.object = politicsResultNodePoliticsVideosPoliticsVideo["Object"].asString();
			jobListObject.result.politicsResult.politicsVideos.push_back(politicsVideoObject);
		}
		auto allPoliticsImagesNode = politicsResultNode["PoliticsImages"]["PoliticsImage"];
		for (auto politicsResultNodePoliticsImagesPoliticsImage : allPoliticsImagesNode)
		{
			Job::Result::PoliticsResult::PoliticsImage politicsImageObject;
			if(!politicsResultNodePoliticsImagesPoliticsImage["Suggestion"].isNull())
				politicsImageObject.suggestion = politicsResultNodePoliticsImagesPoliticsImage["Suggestion"].asString();
			if(!politicsResultNodePoliticsImagesPoliticsImage["Score"].isNull())
				politicsImageObject.score = politicsResultNodePoliticsImagesPoliticsImage["Score"].asString();
			if(!politicsResultNodePoliticsImagesPoliticsImage["Url"].isNull())
				politicsImageObject.url = politicsResultNodePoliticsImagesPoliticsImage["Url"].asString();
			if(!politicsResultNodePoliticsImagesPoliticsImage["Text"].isNull())
				politicsImageObject.text = politicsResultNodePoliticsImagesPoliticsImage["Text"].asString();
			jobListObject.result.politicsResult.politicsImages.push_back(politicsImageObject);
		}
		auto allPoliticsTextsNode = politicsResultNode["PoliticsTexts"]["PoliticsText"];
		for (auto politicsResultNodePoliticsTextsPoliticsText : allPoliticsTextsNode)
		{
			Job::Result::PoliticsResult::PoliticsText politicsTextObject;
			if(!politicsResultNodePoliticsTextsPoliticsText["Suggestion"].isNull())
				politicsTextObject.suggestion = politicsResultNodePoliticsTextsPoliticsText["Suggestion"].asString();
			if(!politicsResultNodePoliticsTextsPoliticsText["Score"].isNull())
				politicsTextObject.score = politicsResultNodePoliticsTextsPoliticsText["Score"].asString();
			if(!politicsResultNodePoliticsTextsPoliticsText["Text"].isNull())
				politicsTextObject.text = politicsResultNodePoliticsTextsPoliticsText["Text"].asString();
			jobListObject.result.politicsResult.politicsTexts.push_back(politicsTextObject);
		}
		auto allPoliticsAudiosNode = politicsResultNode["PoliticsAudios"]["PoliticsAudio"];
		for (auto politicsResultNodePoliticsAudiosPoliticsAudio : allPoliticsAudiosNode)
		{
			Job::Result::PoliticsResult::PoliticsAudio politicsAudioObject;
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["EndTime"].isNull())
				politicsAudioObject.endTime = politicsResultNodePoliticsAudiosPoliticsAudio["EndTime"].asString();
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["StartTime"].isNull())
				politicsAudioObject.startTime = politicsResultNodePoliticsAudiosPoliticsAudio["StartTime"].asString();
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["Suggestion"].isNull())
				politicsAudioObject.suggestion = politicsResultNodePoliticsAudiosPoliticsAudio["Suggestion"].asString();
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["Score"].isNull())
				politicsAudioObject.score = politicsResultNodePoliticsAudiosPoliticsAudio["Score"].asString();
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["Text"].isNull())
				politicsAudioObject.text = politicsResultNodePoliticsAudiosPoliticsAudio["Text"].asString();
			if(!politicsResultNodePoliticsAudiosPoliticsAudio["Object"].isNull())
				politicsAudioObject.object = politicsResultNodePoliticsAudiosPoliticsAudio["Object"].asString();
			jobListObject.result.politicsResult.politicsAudios.push_back(politicsAudioObject);
		}
		auto liveResultNode = resultNode["LiveResult"];
		auto allLiveImagesNode = liveResultNode["LiveImages"]["LiveImage"];
		for (auto liveResultNodeLiveImagesLiveImage : allLiveImagesNode)
		{
			Job::Result::LiveResult::LiveImage liveImageObject;
			if(!liveResultNodeLiveImagesLiveImage["Suggestion"].isNull())
				liveImageObject.suggestion = liveResultNodeLiveImagesLiveImage["Suggestion"].asString();
			if(!liveResultNodeLiveImagesLiveImage["Score"].isNull())
				liveImageObject.score = liveResultNodeLiveImagesLiveImage["Score"].asString();
			if(!liveResultNodeLiveImagesLiveImage["Url"].isNull())
				liveImageObject.url = liveResultNodeLiveImagesLiveImage["Url"].asString();
			if(!liveResultNodeLiveImagesLiveImage["Text"].isNull())
				liveImageObject.text = liveResultNodeLiveImagesLiveImage["Text"].asString();
			jobListObject.result.liveResult.liveImages.push_back(liveImageObject);
		}
		auto allLiveVideosNode = liveResultNode["LiveVideos"]["LiveVideo"];
		for (auto liveResultNodeLiveVideosLiveVideo : allLiveVideosNode)
		{
			Job::Result::LiveResult::LiveVideo liveVideoObject;
			if(!liveResultNodeLiveVideosLiveVideo["Time"].isNull())
				liveVideoObject.time = liveResultNodeLiveVideosLiveVideo["Time"].asString();
			if(!liveResultNodeLiveVideosLiveVideo["Suggestion"].isNull())
				liveVideoObject.suggestion = liveResultNodeLiveVideosLiveVideo["Suggestion"].asString();
			if(!liveResultNodeLiveVideosLiveVideo["Score"].isNull())
				liveVideoObject.score = liveResultNodeLiveVideosLiveVideo["Score"].asString();
			if(!liveResultNodeLiveVideosLiveVideo["Object"].isNull())
				liveVideoObject.object = liveResultNodeLiveVideosLiveVideo["Object"].asString();
			jobListObject.result.liveResult.liveVideos.push_back(liveVideoObject);
		}
		auto abuseResultNode = resultNode["AbuseResult"];
		auto allAbuseOcrsNode = abuseResultNode["AbuseOcrs"]["AbuseOcr"];
		for (auto abuseResultNodeAbuseOcrsAbuseOcr : allAbuseOcrsNode)
		{
			Job::Result::AbuseResult::AbuseOcr abuseOcrObject;
			if(!abuseResultNodeAbuseOcrsAbuseOcr["Time"].isNull())
				abuseOcrObject.time = abuseResultNodeAbuseOcrsAbuseOcr["Time"].asString();
			if(!abuseResultNodeAbuseOcrsAbuseOcr["Suggestion"].isNull())
				abuseOcrObject.suggestion = abuseResultNodeAbuseOcrsAbuseOcr["Suggestion"].asString();
			if(!abuseResultNodeAbuseOcrsAbuseOcr["Score"].isNull())
				abuseOcrObject.score = abuseResultNodeAbuseOcrsAbuseOcr["Score"].asString();
			if(!abuseResultNodeAbuseOcrsAbuseOcr["Text"].isNull())
				abuseOcrObject.text = abuseResultNodeAbuseOcrsAbuseOcr["Text"].asString();
			if(!abuseResultNodeAbuseOcrsAbuseOcr["Object"].isNull())
				abuseOcrObject.object = abuseResultNodeAbuseOcrsAbuseOcr["Object"].asString();
			jobListObject.result.abuseResult.abuseOcrs.push_back(abuseOcrObject);
		}
		auto allAbuseAudiosNode = abuseResultNode["AbuseAudios"]["AbuseAudio"];
		for (auto abuseResultNodeAbuseAudiosAbuseAudio : allAbuseAudiosNode)
		{
			Job::Result::AbuseResult::AbuseAudio abuseAudioObject;
			if(!abuseResultNodeAbuseAudiosAbuseAudio["EndTime"].isNull())
				abuseAudioObject.endTime = abuseResultNodeAbuseAudiosAbuseAudio["EndTime"].asString();
			if(!abuseResultNodeAbuseAudiosAbuseAudio["StartTime"].isNull())
				abuseAudioObject.startTime = abuseResultNodeAbuseAudiosAbuseAudio["StartTime"].asString();
			if(!abuseResultNodeAbuseAudiosAbuseAudio["Suggestion"].isNull())
				abuseAudioObject.suggestion = abuseResultNodeAbuseAudiosAbuseAudio["Suggestion"].asString();
			if(!abuseResultNodeAbuseAudiosAbuseAudio["Score"].isNull())
				abuseAudioObject.score = abuseResultNodeAbuseAudiosAbuseAudio["Score"].asString();
			if(!abuseResultNodeAbuseAudiosAbuseAudio["Text"].isNull())
				abuseAudioObject.text = abuseResultNodeAbuseAudiosAbuseAudio["Text"].asString();
			if(!abuseResultNodeAbuseAudiosAbuseAudio["Object"].isNull())
				abuseAudioObject.object = abuseResultNodeAbuseAudiosAbuseAudio["Object"].asString();
			jobListObject.result.abuseResult.abuseAudios.push_back(abuseAudioObject);
		}
		auto allAbuseTextsNode = abuseResultNode["AbuseTexts"]["AbuseText"];
		for (auto abuseResultNodeAbuseTextsAbuseText : allAbuseTextsNode)
		{
			Job::Result::AbuseResult::AbuseText abuseTextObject;
			if(!abuseResultNodeAbuseTextsAbuseText["Suggestion"].isNull())
				abuseTextObject.suggestion = abuseResultNodeAbuseTextsAbuseText["Suggestion"].asString();
			if(!abuseResultNodeAbuseTextsAbuseText["Score"].isNull())
				abuseTextObject.score = abuseResultNodeAbuseTextsAbuseText["Score"].asString();
			if(!abuseResultNodeAbuseTextsAbuseText["Text"].isNull())
				abuseTextObject.text = abuseResultNodeAbuseTextsAbuseText["Text"].asString();
			jobListObject.result.abuseResult.abuseTexts.push_back(abuseTextObject);
		}
		auto spamResultNode = resultNode["SpamResult"];
		auto allSpamTextsNode = spamResultNode["SpamTexts"]["SpamText"];
		for (auto spamResultNodeSpamTextsSpamText : allSpamTextsNode)
		{
			Job::Result::SpamResult::SpamText spamTextObject;
			if(!spamResultNodeSpamTextsSpamText["Suggestion"].isNull())
				spamTextObject.suggestion = spamResultNodeSpamTextsSpamText["Suggestion"].asString();
			if(!spamResultNodeSpamTextsSpamText["Score"].isNull())
				spamTextObject.score = spamResultNodeSpamTextsSpamText["Score"].asString();
			if(!spamResultNodeSpamTextsSpamText["Text"].isNull())
				spamTextObject.text = spamResultNodeSpamTextsSpamText["Text"].asString();
			jobListObject.result.spamResult.spamTexts.push_back(spamTextObject);
		}
		auto allSpamAudiosNode = spamResultNode["SpamAudios"]["SpamAudio"];
		for (auto spamResultNodeSpamAudiosSpamAudio : allSpamAudiosNode)
		{
			Job::Result::SpamResult::SpamAudio spamAudioObject;
			if(!spamResultNodeSpamAudiosSpamAudio["EndTime"].isNull())
				spamAudioObject.endTime = spamResultNodeSpamAudiosSpamAudio["EndTime"].asString();
			if(!spamResultNodeSpamAudiosSpamAudio["StartTime"].isNull())
				spamAudioObject.startTime = spamResultNodeSpamAudiosSpamAudio["StartTime"].asString();
			if(!spamResultNodeSpamAudiosSpamAudio["Suggestion"].isNull())
				spamAudioObject.suggestion = spamResultNodeSpamAudiosSpamAudio["Suggestion"].asString();
			if(!spamResultNodeSpamAudiosSpamAudio["Score"].isNull())
				spamAudioObject.score = spamResultNodeSpamAudiosSpamAudio["Score"].asString();
			if(!spamResultNodeSpamAudiosSpamAudio["Text"].isNull())
				spamAudioObject.text = spamResultNodeSpamAudiosSpamAudio["Text"].asString();
			if(!spamResultNodeSpamAudiosSpamAudio["Object"].isNull())
				spamAudioObject.object = spamResultNodeSpamAudiosSpamAudio["Object"].asString();
			jobListObject.result.spamResult.spamAudios.push_back(spamAudioObject);
		}
		auto allSpamOcrsNode = spamResultNode["SpamOcrs"]["SpamOcr"];
		for (auto spamResultNodeSpamOcrsSpamOcr : allSpamOcrsNode)
		{
			Job::Result::SpamResult::SpamOcr spamOcrObject;
			if(!spamResultNodeSpamOcrsSpamOcr["Time"].isNull())
				spamOcrObject.time = spamResultNodeSpamOcrsSpamOcr["Time"].asString();
			if(!spamResultNodeSpamOcrsSpamOcr["Suggestion"].isNull())
				spamOcrObject.suggestion = spamResultNodeSpamOcrsSpamOcr["Suggestion"].asString();
			if(!spamResultNodeSpamOcrsSpamOcr["Score"].isNull())
				spamOcrObject.score = spamResultNodeSpamOcrsSpamOcr["Score"].asString();
			if(!spamResultNodeSpamOcrsSpamOcr["Text"].isNull())
				spamOcrObject.text = spamResultNodeSpamOcrsSpamOcr["Text"].asString();
			if(!spamResultNodeSpamOcrsSpamOcr["Object"].isNull())
				spamOcrObject.object = spamResultNodeSpamOcrsSpamOcr["Object"].asString();
			jobListObject.result.spamResult.spamOcrs.push_back(spamOcrObject);
		}
		auto contrabandResultNode = resultNode["ContrabandResult"];
		auto allContrabandAudiosNode = contrabandResultNode["ContrabandAudios"]["ContrabandAudio"];
		for (auto contrabandResultNodeContrabandAudiosContrabandAudio : allContrabandAudiosNode)
		{
			Job::Result::ContrabandResult::ContrabandAudio contrabandAudioObject;
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["EndTime"].isNull())
				contrabandAudioObject.endTime = contrabandResultNodeContrabandAudiosContrabandAudio["EndTime"].asString();
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["StartTime"].isNull())
				contrabandAudioObject.startTime = contrabandResultNodeContrabandAudiosContrabandAudio["StartTime"].asString();
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["Suggestion"].isNull())
				contrabandAudioObject.suggestion = contrabandResultNodeContrabandAudiosContrabandAudio["Suggestion"].asString();
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["Score"].isNull())
				contrabandAudioObject.score = contrabandResultNodeContrabandAudiosContrabandAudio["Score"].asString();
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["Text"].isNull())
				contrabandAudioObject.text = contrabandResultNodeContrabandAudiosContrabandAudio["Text"].asString();
			if(!contrabandResultNodeContrabandAudiosContrabandAudio["Object"].isNull())
				contrabandAudioObject.object = contrabandResultNodeContrabandAudiosContrabandAudio["Object"].asString();
			jobListObject.result.contrabandResult.contrabandAudios.push_back(contrabandAudioObject);
		}
		auto allContrabandOcrsNode = contrabandResultNode["ContrabandOcrs"]["ContrabandOcr"];
		for (auto contrabandResultNodeContrabandOcrsContrabandOcr : allContrabandOcrsNode)
		{
			Job::Result::ContrabandResult::ContrabandOcr contrabandOcrObject;
			if(!contrabandResultNodeContrabandOcrsContrabandOcr["Time"].isNull())
				contrabandOcrObject.time = contrabandResultNodeContrabandOcrsContrabandOcr["Time"].asString();
			if(!contrabandResultNodeContrabandOcrsContrabandOcr["Suggestion"].isNull())
				contrabandOcrObject.suggestion = contrabandResultNodeContrabandOcrsContrabandOcr["Suggestion"].asString();
			if(!contrabandResultNodeContrabandOcrsContrabandOcr["Score"].isNull())
				contrabandOcrObject.score = contrabandResultNodeContrabandOcrsContrabandOcr["Score"].asString();
			if(!contrabandResultNodeContrabandOcrsContrabandOcr["Text"].isNull())
				contrabandOcrObject.text = contrabandResultNodeContrabandOcrsContrabandOcr["Text"].asString();
			if(!contrabandResultNodeContrabandOcrsContrabandOcr["Object"].isNull())
				contrabandOcrObject.object = contrabandResultNodeContrabandOcrsContrabandOcr["Object"].asString();
			jobListObject.result.contrabandResult.contrabandOcrs.push_back(contrabandOcrObject);
		}
		auto allContrabandTextsNode = contrabandResultNode["ContrabandTexts"]["ContrabandText"];
		for (auto contrabandResultNodeContrabandTextsContrabandText : allContrabandTextsNode)
		{
			Job::Result::ContrabandResult::ContrabandText contrabandTextObject;
			if(!contrabandResultNodeContrabandTextsContrabandText["Suggestion"].isNull())
				contrabandTextObject.suggestion = contrabandResultNodeContrabandTextsContrabandText["Suggestion"].asString();
			if(!contrabandResultNodeContrabandTextsContrabandText["Score"].isNull())
				contrabandTextObject.score = contrabandResultNodeContrabandTextsContrabandText["Score"].asString();
			if(!contrabandResultNodeContrabandTextsContrabandText["Text"].isNull())
				contrabandTextObject.text = contrabandResultNodeContrabandTextsContrabandText["Text"].asString();
			jobListObject.result.contrabandResult.contrabandTexts.push_back(contrabandTextObject);
		}
		auto terrorismResultNode = resultNode["TerrorismResult"];
		auto allTerrorismOcrsNode = terrorismResultNode["TerrorismOcrs"]["TerrorismOcr"];
		for (auto terrorismResultNodeTerrorismOcrsTerrorismOcr : allTerrorismOcrsNode)
		{
			Job::Result::TerrorismResult::TerrorismOcr terrorismOcrObject;
			if(!terrorismResultNodeTerrorismOcrsTerrorismOcr["Time"].isNull())
				terrorismOcrObject.time = terrorismResultNodeTerrorismOcrsTerrorismOcr["Time"].asString();
			if(!terrorismResultNodeTerrorismOcrsTerrorismOcr["Suggestion"].isNull())
				terrorismOcrObject.suggestion = terrorismResultNodeTerrorismOcrsTerrorismOcr["Suggestion"].asString();
			if(!terrorismResultNodeTerrorismOcrsTerrorismOcr["Score"].isNull())
				terrorismOcrObject.score = terrorismResultNodeTerrorismOcrsTerrorismOcr["Score"].asString();
			if(!terrorismResultNodeTerrorismOcrsTerrorismOcr["Text"].isNull())
				terrorismOcrObject.text = terrorismResultNodeTerrorismOcrsTerrorismOcr["Text"].asString();
			if(!terrorismResultNodeTerrorismOcrsTerrorismOcr["Object"].isNull())
				terrorismOcrObject.object = terrorismResultNodeTerrorismOcrsTerrorismOcr["Object"].asString();
			jobListObject.result.terrorismResult.terrorismOcrs.push_back(terrorismOcrObject);
		}
		auto allTerrorismAudiosNode = terrorismResultNode["TerrorismAudios"]["TerrorismAudio"];
		for (auto terrorismResultNodeTerrorismAudiosTerrorismAudio : allTerrorismAudiosNode)
		{
			Job::Result::TerrorismResult::TerrorismAudio terrorismAudioObject;
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["EndTime"].isNull())
				terrorismAudioObject.endTime = terrorismResultNodeTerrorismAudiosTerrorismAudio["EndTime"].asString();
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["StartTime"].isNull())
				terrorismAudioObject.startTime = terrorismResultNodeTerrorismAudiosTerrorismAudio["StartTime"].asString();
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["Suggestion"].isNull())
				terrorismAudioObject.suggestion = terrorismResultNodeTerrorismAudiosTerrorismAudio["Suggestion"].asString();
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["Score"].isNull())
				terrorismAudioObject.score = terrorismResultNodeTerrorismAudiosTerrorismAudio["Score"].asString();
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["Text"].isNull())
				terrorismAudioObject.text = terrorismResultNodeTerrorismAudiosTerrorismAudio["Text"].asString();
			if(!terrorismResultNodeTerrorismAudiosTerrorismAudio["Object"].isNull())
				terrorismAudioObject.object = terrorismResultNodeTerrorismAudiosTerrorismAudio["Object"].asString();
			jobListObject.result.terrorismResult.terrorismAudios.push_back(terrorismAudioObject);
		}
		auto allTerrorismVideosNode = terrorismResultNode["TerrorismVideos"]["TerrorismVideo"];
		for (auto terrorismResultNodeTerrorismVideosTerrorismVideo : allTerrorismVideosNode)
		{
			Job::Result::TerrorismResult::TerrorismVideo terrorismVideoObject;
			if(!terrorismResultNodeTerrorismVideosTerrorismVideo["Time"].isNull())
				terrorismVideoObject.time = terrorismResultNodeTerrorismVideosTerrorismVideo["Time"].asString();
			if(!terrorismResultNodeTerrorismVideosTerrorismVideo["Suggestion"].isNull())
				terrorismVideoObject.suggestion = terrorismResultNodeTerrorismVideosTerrorismVideo["Suggestion"].asString();
			if(!terrorismResultNodeTerrorismVideosTerrorismVideo["Score"].isNull())
				terrorismVideoObject.score = terrorismResultNodeTerrorismVideosTerrorismVideo["Score"].asString();
			if(!terrorismResultNodeTerrorismVideosTerrorismVideo["Object"].isNull())
				terrorismVideoObject.object = terrorismResultNodeTerrorismVideosTerrorismVideo["Object"].asString();
			jobListObject.result.terrorismResult.terrorismVideos.push_back(terrorismVideoObject);
		}
		auto allTerrorismTextsNode = terrorismResultNode["TerrorismTexts"]["TerrorismText"];
		for (auto terrorismResultNodeTerrorismTextsTerrorismText : allTerrorismTextsNode)
		{
			Job::Result::TerrorismResult::TerrorismText terrorismTextObject;
			if(!terrorismResultNodeTerrorismTextsTerrorismText["Suggestion"].isNull())
				terrorismTextObject.suggestion = terrorismResultNodeTerrorismTextsTerrorismText["Suggestion"].asString();
			if(!terrorismResultNodeTerrorismTextsTerrorismText["Score"].isNull())
				terrorismTextObject.score = terrorismResultNodeTerrorismTextsTerrorismText["Score"].asString();
			if(!terrorismResultNodeTerrorismTextsTerrorismText["Text"].isNull())
				terrorismTextObject.text = terrorismResultNodeTerrorismTextsTerrorismText["Text"].asString();
			jobListObject.result.terrorismResult.terrorismTexts.push_back(terrorismTextObject);
		}
		auto allTerrorismImagesNode = terrorismResultNode["TerrorismImages"]["TerrorismImage"];
		for (auto terrorismResultNodeTerrorismImagesTerrorismImage : allTerrorismImagesNode)
		{
			Job::Result::TerrorismResult::TerrorismImage terrorismImageObject;
			if(!terrorismResultNodeTerrorismImagesTerrorismImage["Suggestion"].isNull())
				terrorismImageObject.suggestion = terrorismResultNodeTerrorismImagesTerrorismImage["Suggestion"].asString();
			if(!terrorismResultNodeTerrorismImagesTerrorismImage["Score"].isNull())
				terrorismImageObject.score = terrorismResultNodeTerrorismImagesTerrorismImage["Score"].asString();
			if(!terrorismResultNodeTerrorismImagesTerrorismImage["Url"].isNull())
				terrorismImageObject.url = terrorismResultNodeTerrorismImagesTerrorismImage["Url"].asString();
			if(!terrorismResultNodeTerrorismImagesTerrorismImage["Text"].isNull())
				terrorismImageObject.text = terrorismResultNodeTerrorismImagesTerrorismImage["Text"].asString();
			jobListObject.result.terrorismResult.terrorismImages.push_back(terrorismImageObject);
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

