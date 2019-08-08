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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDCASTERLAYOUTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDCASTERLAYOUTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddCasterLayoutRequest : public RpcServiceRequest
			{
				struct AudioLayer
				{
					int fixedDelayDuration;
					float volumeRate;
					std::string validChannel;
				};
				struct VideoLayer
				{
					std::string fillMode;
					float widthNormalized;
					int fixedDelayDuration;
					std::string positionRefer;
					std::vector<float> positionNormalized;
					float heightNormalized;
				};

			public:
				AddCasterLayoutRequest();
				~AddCasterLayoutRequest();

				std::vector<std::string> getBlendList()const;
				void setBlendList(const std::vector<std::string>& blendList);
				std::vector<AudioLayer> getAudioLayer()const;
				void setAudioLayer(const std::vector<AudioLayer>& audioLayer);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<VideoLayer> getVideoLayer()const;
				void setVideoLayer(const std::vector<VideoLayer>& videoLayer);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				std::vector<std::string> getMixList()const;
				void setMixList(const std::vector<std::string>& mixList);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::vector<std::string> blendList_;
				std::vector<AudioLayer> audioLayer_;
				std::string regionId_;
				std::vector<VideoLayer> videoLayer_;
				std::string casterId_;
				std::vector<std::string> mixList_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDCASTERLAYOUTREQUEST_H_