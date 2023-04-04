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

#ifndef ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GenerateVideoPlaylistResult : public ServiceResult
			{
			public:
				struct VideoPlaylistItem
				{
					std::string token;
					std::string uRI;
				};
				struct AudioPlaylistItem
				{
					std::string token;
					std::string uRI;
				};
				struct SubtitlePlaylistItem
				{
					std::string language;
					std::string token;
					int index;
					std::string uRI;
				};


				GenerateVideoPlaylistResult();
				explicit GenerateVideoPlaylistResult(const std::string &payload);
				~GenerateVideoPlaylistResult();
				std::vector<VideoPlaylistItem> getVideoPlaylist()const;
				std::vector<SubtitlePlaylistItem> getSubtitlePlaylist()const;
				std::string getToken()const;
				std::string getURI()const;
				std::vector<AudioPlaylistItem> getAudioPlaylist()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VideoPlaylistItem> videoPlaylist_;
				std::vector<SubtitlePlaylistItem> subtitlePlaylist_;
				std::string token_;
				std::string uRI_;
				std::vector<AudioPlaylistItem> audioPlaylist_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTRESULT_H_