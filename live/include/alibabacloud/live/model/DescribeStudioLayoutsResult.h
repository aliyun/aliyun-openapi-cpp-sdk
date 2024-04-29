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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBESTUDIOLAYOUTSRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBESTUDIOLAYOUTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeStudioLayoutsResult : public ServiceResult
			{
			public:
				struct StudioLayout
				{
					struct BgImageConfig
					{
						std::string materialId;
						std::string locationId;
						std::string imageUrl;
						std::string id;
					};
					struct CommonConfig
					{
						std::string channelId;
						std::string videoResourceId;
					};
					struct LayerOrderConfig
					{
						std::string type;
						std::string id;
					};
					struct MediaInputConfig
					{
						std::string fillMode;
						std::string imageMaterialId;
						float heightNormalized;
						int index;
						std::string positionRefer;
						std::string id;
						std::string channelId;
						std::string videoResourceId;
						float widthNormalized;
						std::vector<std::string> positionNormalized;
					};
					struct ScreenInputConfig
					{
						struct AudioConfig
						{
							std::string validChannel;
							float volumeRate;
						};
						std::string positionY;
						std::string color;
						AudioConfig audioConfig;
						float heightNormalized;
						int portraitType;
						int index;
						std::string id;
						std::string channelId;
						std::string videoResourceId;
						std::string positionX;
						bool onlyAudio;
					};
					std::vector<StudioLayout::ScreenInputConfig> screenInputConfigList;
					std::vector<StudioLayout::MediaInputConfig> mediaInputConfigList;
					BgImageConfig bgImageConfig;
					std::vector<StudioLayout::LayerOrderConfig> layerOrderConfigList;
					std::string layoutId;
					CommonConfig commonConfig;
					std::string layoutName;
					std::string layoutType;
				};


				DescribeStudioLayoutsResult();
				explicit DescribeStudioLayoutsResult(const std::string &payload);
				~DescribeStudioLayoutsResult();
				std::vector<StudioLayout> getStudioLayouts()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StudioLayout> studioLayouts_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBESTUDIOLAYOUTSRESULT_H_