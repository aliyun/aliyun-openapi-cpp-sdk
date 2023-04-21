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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHMEDIACLIPBYFACERESULT_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHMEDIACLIPBYFACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT SearchMediaClipByFaceResult : public ServiceResult
			{
			public:
				struct MediaClip
				{
					struct OccurrencesInfo
					{
						struct TrackDataItem
						{
							struct BoxPosition
							{
								int w;
								int x;
								int h;
								int y;
							};
							BoxPosition boxPosition;
							float timestamp;
						};
						float endTime;
						float startTime;
						std::vector<OccurrencesInfo::TrackDataItem> trackData;
					};
					std::string entityId;
					float score;
					std::string category;
					std::string labelName;
					std::vector<MediaClip::OccurrencesInfo> occurrencesInfos;
				};


				SearchMediaClipByFaceResult();
				explicit SearchMediaClipByFaceResult(const std::string &payload);
				~SearchMediaClipByFaceResult();
				long getTotal()const;
				std::string getCode()const;
				std::string getSuccess()const;
				std::vector<MediaClip> getMediaClipList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long total_;
				std::string code_;
				std::string success_;
				std::vector<MediaClip> mediaClipList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHMEDIACLIPBYFACERESULT_H_