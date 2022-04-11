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

#ifndef ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetMediaAuditResultResult : public ServiceResult
			{
			public:
				struct MediaAuditResult
				{
					struct VideoResult
					{
						struct PornResult
						{
							struct CounterListItem
							{
								std::string label;
								int count;
							};
							struct TopListItem
							{
								std::string score;
								std::string label;
								std::string timestamp;
								std::string url;
							};
							std::vector<TopListItem> topList;
							std::string suggestion;
							std::string maxScore;
							std::string averageScore;
							std::string label;
							std::vector<CounterListItem> counterList;
						};
						struct AdResult
						{
							struct CounterListItem3
							{
								std::string label;
								int count;
							};
							struct TopListItem4
							{
								std::string score;
								std::string label;
								std::string timestamp;
								std::string url;
							};
							std::vector<CounterListItem3> counterList1;
							std::string suggestion;
							std::string maxScore;
							std::string averageScore;
							std::string label;
							std::vector<TopListItem4> topList2;
						};
						struct LogoResult
						{
							struct CounterListItem7
							{
								std::string label;
								int count;
							};
							struct TopListItem8
							{
								std::string score;
								std::string label;
								std::string timestamp;
								std::string url;
							};
							std::string suggestion;
							std::string maxScore;
							std::string averageScore;
							std::vector<TopListItem8> topList6;
							std::string label;
							std::vector<CounterListItem7> counterList5;
						};
						struct LiveResult
						{
							struct CounterListItem11
							{
								std::string label;
								int count;
							};
							struct TopListItem12
							{
								std::string score;
								std::string label;
								std::string timestamp;
								std::string url;
							};
							std::string suggestion;
							std::string maxScore;
							std::string averageScore;
							std::string label;
							std::vector<CounterListItem11> counterList9;
							std::vector<TopListItem12> topList10;
						};
						struct TerrorismResult
						{
							struct CounterListItem15
							{
								std::string label;
								int count;
							};
							struct TopListItem16
							{
								std::string score;
								std::string label;
								std::string timestamp;
								std::string url;
							};
							std::string suggestion;
							std::string maxScore;
							std::string averageScore;
							std::vector<TopListItem16> topList14;
							std::string label;
							std::vector<CounterListItem15> counterList13;
						};
						LogoResult logoResult;
						std::string suggestion;
						LiveResult liveResult;
						TerrorismResult terrorismResult;
						std::string label;
						PornResult pornResult;
						AdResult adResult;
					};
					struct AudioResultItem
					{
						std::string suggestion;
						std::string score;
						std::string label;
						std::string scene;
					};
					struct ImageResultItem
					{
						struct ResultItem
						{
							std::string suggestion;
							std::string score;
							std::string label;
							std::string scene;
						};
						std::string suggestion;
						std::string type;
						std::string label;
						std::string url;
						std::vector<ImageResultItem::ResultItem> result;
					};
					struct TextResultItem
					{
						std::string suggestion;
						std::string type;
						std::string score;
						std::string content;
						std::string label;
						std::string scene;
					};
					std::vector<TextResultItem> textResult;
					std::string suggestion;
					VideoResult videoResult;
					std::vector<ImageResultItem> imageResult;
					std::string abnormalModules;
					std::string label;
					std::vector<AudioResultItem> audioResult;
				};


				GetMediaAuditResultResult();
				explicit GetMediaAuditResultResult(const std::string &payload);
				~GetMediaAuditResultResult();
				MediaAuditResult getMediaAuditResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaAuditResult mediaAuditResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTRESULT_H_